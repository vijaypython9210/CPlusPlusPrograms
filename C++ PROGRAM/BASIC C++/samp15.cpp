#include<iostream>
using namespace std;
/*float celcius(float);
float fahrenheit(float);
float celcius(float a)
{
	return ((a-32)/1.8);
}
float fahrenheit(float b)
{
	return ((b*1.8)+32);
	
}
int main()
{
	float f,c,x,y;
	cin>>f;
	cin>>c;
	x=celcius(f);
	y=fahrenheit(c);
	cout<<x<<endl;
	cout<<y<<endl;
	return 0;
}*/




int main()
{
	float c,f,a,b;
	char ch;
	cout<<"SELECT A CALUCATION MODE"<<endl;
	cin>>ch;
	if(ch=='F'||ch=='f')
	{
		cout<<"ENTER A CELCIUS VALUE"<<endl;
		cin>>c;
		cout<<"CELCIUS VALUE:"<<c<<endl;
		a=((c-32)/1.8);
		cout<<"CELCIUS TO FAHRENHEIT VALUE:"<<a<<endl;
	}
	else if(ch=='C'||cch=='c')
	{
		cout<<"ENTER A FAHRENHEIT VALUE"<<endl;
		cin>>f;
		cout<<"FAHRENHEIT VALUE:"<<f<<endl;
		b=((f*1.8)+32);
		cout<<"FEHRENHEIT TO CELCIUS VALUE:"<<b;
	}
	else
	{
		cout<<"PRESS CORRECT KEY!";
	}
	return 0;
}
