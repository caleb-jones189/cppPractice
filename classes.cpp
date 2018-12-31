//To show a change is made. 
#include<iostream>
#include<string>

using namespace std;
class Person
{
	private:
		string name;
		int age;
		string eyeColor;
		int id;
		static int numFamily;
		
	public:
	
		Person(string n,int a,string e);
		Person();
		string getName();
		int  getAge();
		string getEye();
		int getId();
		int operator+(Person p);
		friend ostream& operator<<(ostream& o, Person& p);

		static int getNumFamily()
		{
			return numFamily;
		}

		string toString()	
		{
			return "name is "+name;
		}


};

class Male: public Person
{
	private:
		string gender;
	public:	

		Male(string n, int a, string e,string g);
		void setGender(string g);
		string getGender();
	
};

Male::Male(string n,int a, string e,string g):Person(n,a,e)
{
	setGender(g);
} 

void Male::setGender(string g){gender=g;}
string Male::getGender(){return gender;}

int Person::numFamily=0;//initalize my static variable 

ostream& operator<<(ostream& o,Person& p)
{
	o<<"name is " <<p.name<<" age is "<<p.age<<" eye color is "<<p.eyeColor;
	return o;
}

Person::Person(string n,int a,string e)
{
	name=n;
	age=a;
	eyeColor=e;
	numFamily++;
	id=numFamily;
}
Person::Person()
{
	name="default";	

}
string Person::getName(){return name;}
int Person::getAge(){return age;}
int Person::getId(){return id;}
string Person::getEye(){return eyeColor;}

int Person::operator+(Person p)
{
	return id+p.getId();
}
		  
int main()
{
	Person cakes("Caleb",22,"green");
	cout<<cakes<<endl;


	
	Person josh("Joshua",23,"blue");
	cout<<josh<<endl;

	int num=cakes+josh;

	cout<<"id's combined is "<<num<<endl;

	Male  chuck("Chuck",59,"blue","male");
	cout<<chuck<<chuck.getGender()<<endl;

	return 0;
}


