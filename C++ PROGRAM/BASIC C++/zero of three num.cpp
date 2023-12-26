#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,c,sum=0,a[10];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				c=a[i]+a[j]+a[k];
				if(c==0)
				{
					cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
				}
			}
		}
	}
}
