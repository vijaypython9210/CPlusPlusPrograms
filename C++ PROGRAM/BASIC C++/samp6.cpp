#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char ch;
	cin>>a>>b;
	cin>>ch;
	if(ch=='+')
	{
		cout<<"\nAddition of value is:"<<a+b;
	}
	else if(ch=='-')
	{
		cout<<"\nSubtraction of value is:"<<a-b;
	}
	else if(ch=='*')
	{
		cout<<"\nMultiplication of value is:"<<a*b;
	}
	else if(ch=='/')
	{
		cout<<"\nDivision of value is:"<<a/b;
	}
	else
	{
		cout<<"\n You press a wrong operator";
		cout<<"\n Press correct one!";
	}
}
