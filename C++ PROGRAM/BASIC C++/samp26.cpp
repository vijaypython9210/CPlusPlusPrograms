#include<iostream>
using namespace std;
int main()
{
	cout<<"PRODUCT OF THE NUMBERS"<<endl;
	int n,s=1,rem;
	cout<<"Enter the number:";
	cin>>n;
	while(n>0)
	{													//MULTIPLICATION OF DIGITS
	rem=n%10;
	s=rem*s;
	n=n/10;
   }
cout<<"Product of Given number="<<s;
}
