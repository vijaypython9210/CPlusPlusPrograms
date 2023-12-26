#include<iostream>
using namespace std;
int main()
{
	int N,A[10],B[210],i,a[10],b;
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>A[i];
	}
	for(i=0;i<N;i++)
	{
		cin>>B[i];
	}
	for(i=0;i<N;i++)
	{
		a[i]=B[i]/A[i];
		cout<<"\t"<<a[i];
	}
	b=a[0];
	for(i=0;i<N;i++)
	{
		if(b>a[i])
		{
			b=a[i];
		}
	}
	cout<<b<<endl;
}
