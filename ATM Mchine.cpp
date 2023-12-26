#include<iostream>
using namespace std;
int main()
{
	int a,w,b,s,v;
	cin>>a;
	cout<<"Your Current Balance:"<<a<<endl;
		if(a<100)
	{
		cout<<"Does not have a sufficient money in your account.So 25$ have Service Charge for any withdraw activity\n";
		cout<<"Your Current Amount:"<<a-25;
	}
	else
	{
	cout<<"Enter Your Withdraw Amount:"<<endl;
	cin>>w;
	cout<<"Your Withdraw Amount"<<w<<endl;
	if(w>=300&&w<=499)
	{
		s=(a*4)/100;
		cout<<"Service Charge amount:"<<s<<endl;
		b=a-w;
		v=b-s;
		cout<<"Your Balance Amount:"<<v;
	}
	else if(w>=500)
	{
		b=a-w;
		cout<<"You Withdraw the Maximum Number of Amount!\n";
		cout<<"Your Balance Amount:"<<b;
	}
	else if(w<0)
	{
		cout<<"Your Account has a negative value of amount.So Dont have Withdraw the any Money\n";
	}
}

}

