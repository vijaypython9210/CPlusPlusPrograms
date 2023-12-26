#include<iostream>								//FIND OF SQUARE AREA, PERIMATER VALUE
using namespace std;
/*int main()
{
	int a,area,perimeter;
	cin>>a;
	area=a*a;											//NORMAL METHOD
	perimeter=4*a;
	cout<<area<<endl;
	cout<<perimeter<<endl;
	return 0;
}*/


/*int area(int);
int peri(int);
int main()
{
	int a,A,P;
	cin>>a;
	A=area(a);
	P=peri(a);
	cout<<"\nSquare length:"<<a;
	cout<<"\nSquare of area:"<<A;						//FUNCTION METHOD 
	cout<<"\nSquare of perimeter:"<<P;
	return 0;
}
int area(int a)
{
	return(a*a);
}
int peri(int a)
{
	return(4*a);
}*/



class square
{
	private:
		int a;
	public:
		int getdata();
		int area();
		int peri();	
};
int square::getdata()
{
	cin>>a;
	return a;
}
int square::area()
{
	return(a*a);
}														//CLASS WITH FUNCTION
int square::peri()
{
	return(4*a);
}
int main()
{
	int A,P,L;
	square s;
	L=s.getdata();
	A=s.area();
	P=s.peri();
	cout<<"\nSquare length:"<<L;
	cout<<"\nSquare of area is:"<<A;
	cout<<"\nSquare of perimeter:"<<P;
	return 0;
}
