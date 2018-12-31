#include<iostream>
#include<string>

using namespace std;

struct  Person
{
	 string name;
	 int age;
	 string eyeColor;
};

int main()
{
	/*
	int* array=new int;
	
	for(int i=0;i<5;i++)
	{
		*(array+i)=i;
		cout<<*(array+i);
	}

	*/

	cout<<"Enter a name\n";
	string name;
	getline(cin,name);


	cout<<"age\n";
	string ages;
	getline(cin,ages);
	int age=stoi(ages);

	cout<<"eye color\n";
	string eyeColor;
	getline(cin,eyeColor);
	

	Person obj;
	obj.name=name;
	obj.age=age;
	obj.eyeColor=eyeColor;

	cout<<"your name is "<<obj.name<<"\n";
	cout<<"your age is "<<obj.age<<"\n";
	cout<<"your eye color is "<<obj.eyeColor<<"\n";

}
