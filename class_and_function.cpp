#include<iostream>
using namespace std;
//class
class Human{
public:
	string name;
	void Display();//function declaration is inside the class
};
void Human::Display(){      //here we can define the function
	cout<<"hi i am "<<name<<endl;
}
int main()
{
	//various ways to objection creation
	Human yashu;
	yashu.name="yashu";
	yashu.Display();//calling the dot()

	//Human *gayathri = new Human();//creating using pointer
	//gayathri->name="gayathri";//creating using an arrow()
	Human *gayathri = &yashu;  //class pointer
	gayathri->Display();     //(*gyathri).name
    return 0;
}