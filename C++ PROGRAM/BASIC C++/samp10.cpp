#include<iostream>						//SUM OF NATURAL NUMBERS
using namespace std;
/*int sumof(int);
int main()
{
	int sum,n;
	cin>>n;
	sum=sumof(n);
	cout<<"\n"<<sum;								FUNCTION METHOD
	return 0;
}
int sumof(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}*/
/*int main()
{
	int i=1,n,sum=0;
	cin>>n;
	while(i<=n)
	{												NORMAL WHILE STATEMENT METHOD
		sum=sum+i;
		i++;
	}
	cout<<"\n"<<sum;
	return 0;
}*/
int main()
{
	int i,n,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{												//NORMAL FOR  STATEMENT MENT
		sum+=i;
	}
	cout<<sum;
}
