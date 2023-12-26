#include<iostream>
using namespace std;
int main()
{
	char arr[5]={'a','b','c','d','e'};	//pre-define array
	for(int i=0;i<4;i++)
	{
		cout<<arr[i]<<endl;//--->arr[0]==>a
	}
	
	//for each loop
	for(char ar:arr)
	{
		cout<<ar;
	}
	
	
	
	
	int mark[5],total=0;
	
	cout<<"Enter Your Marks:";
	
	for(int i=0;i<5;i++)
	{
		cin>>mark[i];
	}
	
	for(int m:mark)
	{
		total+=m;
		cout<<m<<endl;
	}
	cout<<total;
	cout<<"\n average:"<<total/5;
}