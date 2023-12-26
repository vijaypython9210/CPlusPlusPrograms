#include<iostream>
using namespace std;
/*int main()
{
	float p,n,r,si;
	cin>>p>>n>>r;
	si=((p*n*r)/100);
	cout<<si;
	return 0;
}*/

int main()
{
	float p,n,r,si;
	char ch;
	cout<<"Enter a amount:"<<endl;
	cin>>p;
	cout<<"Enter a Rate of Interest"<<endl;
	cin>>r;
	cout<<"year wise or month wise"<<endl;
	cin>>ch;
	if(ch=='Y'||ch=='y')
	{
		cin>>n;
		n=n;
	}
	else if(ch=='M'||ch=='m')
	{
		cin>>n;
		n=n/12;
	}
	si=((p*n*r)/100);
	cout<<si;
	return 0;
}
