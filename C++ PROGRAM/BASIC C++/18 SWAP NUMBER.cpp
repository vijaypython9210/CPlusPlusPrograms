#include<iostream>
using namespace std;
int main ()
{
	cout<<"SWAP THE NUMBER"<<endl<<endl;
	int a,b;
	cout<<"Enter the 1st number";
	cin>>a;
	cout<<"Enter the 2nd number";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"1st Number=";
	cout<<a<<endl;
	cout<<"2nd Number=";
	cout<<b;
}
