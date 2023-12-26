#include<iostream>
using namespace std;
int main()
{
	cout<<"FORST AND LAST NUMBER ADDICTION"<<endl;
	int n,a=0,last,rem;
	cout<<"Enter the number:";
	cin>>n;
	while(n!=0)
	{
		if(a==0)
		{
			last=n%10;						//FIRST AND LAST NUMBER ADDICTION AND PROCESSING 
			a++;
		}
		rem=n%10;
		cout<<rem;
		
		n=n/10;
	}
	cout<<"first number is:"<<rem<<endl<<"lastnumber is :"<<last<<endl<<"1st and 2nd number add:"<<rem+last;
	return 0;
}
