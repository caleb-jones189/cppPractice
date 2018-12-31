#include<iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>
using namespace std;


void printVector(vector<int>temp)
{
	for(int i=0;i<temp.size();i++)
	{
		cout<<temp.at(i)<<" ";
	}

	cout<<endl;
}
int sum(vector<int>temp)
{
	int sum=0;
	for(int i=0;i<temp.size();i++)
	{
		sum+=temp.at(i);
	}

	return sum;
}

double average(vector<int>temp)
{
	int sum=0;
	double avg;
	for(int i=0;i<temp.size();i++)
	{
		sum+=temp[i];
	}

	avg=sum/(double)temp.size();

	return avg;
}


int main()
{
	cout<<"The goal is to generate a certain number of ints and store them in a vector"<<endl;

	vector<int>myList;

	srand(time(NULL));
	int numTimes=rand()%100;

	cout<<"Generating "<<numTimes<<" numbers"<<endl;
	
	for(int i=0;i<numTimes;i++)
	{
	
		int num=rand()%100;
		myList.push_back(num);
	}

	printVector(myList);

	int s=sum(myList);
	double a=average(myList);

	cout<<"The sum is "<<s<<endl;
	cout<<"The average is "<<a<<endl;

	cout<<endl;
	//cout<<myList;

	


}
