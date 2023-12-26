#include<iostream>
using namespace std;
/*int main()
{
	int n,i,rem;
	cin>>n;
	for(i=1;i<=n;i++)									//DIGITS COUNTS
	{
		n=n/10;
	}
	cout<<i;
}*/

int count(int);
int main()
{
	cout<<"DIGITS COUNT"<<endl;
	int n,s;
	cout<<"Enter the numbers:";
	cin>>n;
	s=count(n);
	cout<<"Number of digits given number="<<s;
	return 0;
}
int count(int a)
{
	int i;
	for(i=0;a>i;i++)
	{
		a=a/10;
	}
	return i;
}
