#include<iostream>
using namespace std;
void add(int,int) ;
int sub(int,int);
int mul(int,int);
void div(int,int);
void add(int a,int b)
{
	cout<<"\nTwo numbers adding total value is:"<<a+b;
}
int sub(int a,int b)
{
	return(a-b);
}
int mul(int a,int b)
{
	return(a*b);
}
void div(int a,int b)
{
	cout<<"\nTwo number division value is:"<<a/b;
}
int main()
{
	int n1,n2,s1,m1;
	cin>>n1>>n2;
	add(n1,n2);
	s1=sub(n1,n2);
	cout<<"\nTwo numbers subtract value:"<<s1;
	m1=mul(n1,n2);
	cout<<"\nTwo numbers multiplication value:"<<m1;
	div(n1,n2);
	return 0;
}
