#include<iostream>									//SUM OF GIVEN NUMBERS
using namespace std;
/*int main()
{
	int i,n,num,sum=0;
	cin>>n;
	for(i=0;i<n;i++)						//FOR LOOP METHOD
	{
		cin>>num;
		sum+=num;
	}
	cout<<sum;
	return 0;
}*/


/*int main()
{
	int i=0,n,num,sum=0;
	cin>>n;
	while(i<n)
	{
		cin>>num;						//WHILE LOOP METHOD
		sum+=num;
		i++;
	}
	cout<<sum;
	return 0;
}*/

/*int main()
{
	int a[10],i,n,sum=0;
	cin>>n;
	for(i=0;i<n;i++)
	{												//ARRAY METHOD
		cin>>a[i];
		sum+=a[i];
	}
	cout<<sum;
	return 0;
}*/

int addnumm(int[],int);
int main()
{
	int arr[30],i,n,sum;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];						//FUNCTION METHOD
	}
	sum=addnumm(arr,n);
	cout<<sum;
}
int addnumm(int arr[30],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	return sum;
}
