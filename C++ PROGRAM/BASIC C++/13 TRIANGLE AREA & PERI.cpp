#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,s,area,peri;						//TRIIANGLE AREA AND PERI USING SIDES
	cin>>a>>b>>c;
	s=((a+b+c)/2);
	area=sqrt(s*((s-a)*(s-b)*(s-c)));
	peri=a+b+c;
	cout<<"\nArea of triangle:"<<area;
	cout<<"\nPerimater of triangle:"<<peri;
	return 0;
}
