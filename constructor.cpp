#include<iostream>
using namespace std;
class Human{
private:          //we need a public specifier to access the private specifier
	string name;
	int age;
public:
	Human(){
		name="No Name";
		age=0;
	}
	Human(string word,int val)   //default constructor
	{
		name=word;
		age=val;
	}
	Human(string word)    //we declared only one object i.e.name
	{
		name=word;
		age=0;
	}
	Human(int val)      //we declare only one object i.e.val
	{
		name="No name";
		age=val;
	}
	Human(Human &yashu){   //copy constructor
		name=yashu.name;
		age=yashu.age;
	}
	void display(){    //display
		cout<<name<<" "<<age<<endl;
	}
	
};
int main()
{
	//Human yashu("yashu",19);
	Human yashu("yashu",19);//non parametrised constructor
	yashu.display();
    Human gaay("gaay",20);//parametrised constructor
    gaay.display();
    Human h("gaay");
    h.display();
    Human hu(20);
    hu.display();
    Human word(yashu);
    word.display();
	return 0;
}