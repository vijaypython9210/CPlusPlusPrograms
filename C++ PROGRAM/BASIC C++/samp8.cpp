#include<iostream>
using namespace std;
int main()
{
	int i=0,a=0,n,sum=0,mark[a];
	float avg,per;
	cout<<"Enter the subject number\n";
	cin>>n;
	cout<<"Enter the marks of this "<<n<<" subjects:";
	while(i<n)
	{
		cin>>mark[a];
		sum=sum+mark[a];
		a++;
		i++;
	}
	cout<<"\n Total value:"<<sum;
	avg=sum/n;
	cout<<"\n Average value:"<<avg;
	per=avg;
	cout<<"\n Percentage value is:"<<per<<"%";
	return 0;
}
