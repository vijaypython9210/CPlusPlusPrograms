#include<iostream>
using namespace std;
int main()
{
	cout<<"FACTORS OF NUMBER"<<endl<<endl;
	int i,n,m;
	cout<<"Enter the number:";
	cin>>n;
	cout<<"The factor number is=";
	for(i=1;i<=n;i++)
	{															//FACTORS
		if(n%i==0)
		{
			m=i;
			cout<<m<<endl;
		}
	}
}
