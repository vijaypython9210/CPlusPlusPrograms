#include<iostream>
using namespace std;
/*int main()
{
	int n,m=1,i;
	cin>>n;
	if(n==0)
	{
		cout<<"PLease put a correctable of factorial number";
	}
	else
	{
	for(i=0;i<n;n--)
	{
		m*=n;
	}
	cout<<m;
}
	return 0;
}*/


int fact(int);
int main()
{
	cout<<"FACTORIAL NUMBER"<<endl<<endl;
	int n,m;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	m=fact(n);
	cout<<"Factorial of the given number="<<m;
	return 0;
}
int fact(int a)
{
	int i,j=1;
	for(i=1;i<=5;i++)
	{
		j*=a;
		a--;
	}
	return j;
}
