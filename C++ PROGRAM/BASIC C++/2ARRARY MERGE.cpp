#include<iostream>
using namespace std;
int main()
{
	int arr[50],n1,n2,i,k,merge[50];
	cin>>n1;
	for(i=0;i<n1;i++)
	{
		cin>>arr[i];
		merge[i]=arr[i];
	}
	k=i;
	cin>>n2;
	for(i=0;i<n2;i++)
	{
		cin>>arr[i];
		merge[k]=arr[i];
		k++;
	}
	for(i=0;i<k;i++)
	{
		cout<<merge[i];
	}
}
