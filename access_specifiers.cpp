#include<iostream>
using namespace std;
class Human{
private:              //we need a public specifier to access the private specifier
	string name;
	int age;
public:
	void SetData(int val,string word){
		age=val;
		name=word;
	}
	void GetData(){
		cout<<"i am "<<name<<" with age "<<age<<endl;
	}
};
int main()
{
	Human yashu;
	yashu.SetData(19,"yashu");
	yashu.GetData();
	return 0;
}