#include<iostream>
using namespace std;
/*int main()
{
	int rem,num,rev=0;
	cin>>num;
   	while(num!=0)
   	{
   		rem=num%10;
   		rev=rem+(rev*10);
   		num=num/10;
	   }
	   cout<<rev;
}*/



int reverse(int);
int main()
{
	cout<<"REVERSE THE GIVEN NUMBER"<<endl<<endl;
	int n,s;
	cout<<"Enter the number:";
	cin>>n;
	s=reverse(n);
	cout<<s;
	return 0;
}
int reverse(int n)
{
	int rem,rev=0;
	while(n!=0)
	{
	rem=n%10;
	rev=rem+(rev*10);
	n=n/10;
 	}
 	return rev;
}
