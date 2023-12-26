#include<iostream>
using namespace std;
int main()
{
	int led,cfl,exc,amount,count,bal,p,p2,bal2,count2;
	cin>>led>>cfl>>exc>>amount;
	if(exc<cfl)
	{
	while(amount>=led||cfl)
	{
		while(amount>=led&&amount>=cfl)
		{
			count=amount/led;
			cout<<"No of LED bulbs:"<<count<<endl;
			bal=amount%led;
			cout<<"Balance of amount before exchaning:"<<bal<<endl;
			p=count*exc;
			amount=p+bal;
			cout<<"Balance of amount after exchaning:"<<amount<<endl;
			break;
		}
		while(amount>=cfl&&amount<=led)
		{
			count2=amount/cfl;
			cout<<"No of CFL bulbs:"<<count2<<endl;
			bal2=amount%cfl;
			cout<<"Balance of amount before exchaning:"<<bal2<<endl;
			p2=count*exc;
			amount=p2+bal2;
			cout<<"Balance of amount after exchaning:"<<amount<<endl;
			break;
		}
	}
}
else
{
	cout<<"To assign a low level exchange amount to cfl value";
}
	return 0;
}
