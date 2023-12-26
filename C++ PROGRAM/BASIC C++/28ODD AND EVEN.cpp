#include<iostream>
using namespace std;
/*int main()
{
	int n;
	cin>>n;
	if(n%2==0)
	{
		cout<<"Even number";
	}
	else
	{
		cout<<"Odd number";
	}
	return 0;
}*/

/*int main()
{
	int n;
	cin>>n;
	(n%2==0)?cout<<"Even number":cout<<"Odd number";
	return 0;
}*/


int main()
{
	int n;
	cin>>n;
	(n%2==0)?'e':'o';
	if('e')
	{
		cout<<"even number";
	}
	else if('o')
	{
		cout<<"odd number";
	}
	return 0;
}
