#include<iostream>
using namespace std;
int main()
{
	cout<<"LCM"<<endl;
	int n,m,k;
	cout<<"Enter the 2 numbers:";
	cin>>n>>m;
	if(n>m)
	{
		k=n;
	}
	else													//LCM
	{
		k=m;
	}
	while(1)
	{
	if((k%n==0)&&(k%m==0))
	{
		break;
	}
	else
	{
		k++;
	}
    }
    cout<<"LCM of given number="<<k;
}


/*int main()
{
	cout<<"HCF"<<endl<<endl;
	int n,m,k;
	cout<<"Enter the 1stNumber:"<<endl;
	cin>>n;
	cout<<"Enter the 2nd number:"<<endl;
	cin>>m;
	if(n>m)
	{
		k=n;
	}
	else
	{
		k=m;
	}
	while(1)
	{
	if((n%k==0)&&(m%k==0))
	{
		break;
	}
	else
	{
		k--;
	}	
}
cout<<"HCF of the given number="<<k;
	return 0;
}*/
