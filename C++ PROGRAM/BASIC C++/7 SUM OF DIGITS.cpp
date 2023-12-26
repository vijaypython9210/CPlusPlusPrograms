#include<iostream>
using namespace std;
int main()
{
	int a,rem,sum=0;
	cout<<"SUM OF DIGITS"<<endl;
	cout<<"Enter a number:";
	cin>>a;
	while(a>0)
		{
		 	rem=a%10;
			 sum=rem+sum;
			 a=a/10;	
		}
		cout<<sum;
		return 0;
}
