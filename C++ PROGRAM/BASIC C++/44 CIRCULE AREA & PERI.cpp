#include<iostream>
using namespace std;
class circule
{
public:
	float r;
	float area(float);
	float peri(float);
};
int main()
{
	circule c;
	double A,P,r;
	cin>>r;
	A=c.area(r);
	P=c.peri(r);
	cout<<"\nCircule of area:"<<A;
	cout<<"\nCircule of perimeter:"<<P;
	return 0;													//CIRCULE AREA AND PERIMETER USING CLASS WITH FUNCTION
}
float circule::area(float r)
{
	float a;
	a=3.14*r*r;
	return a;
}
float circule::peri(float r)
{
	float b;
	b=2*3.14*r;
	return b;
}
