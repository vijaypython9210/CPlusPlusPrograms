#include<iostream>
using namespace std;
int main()
{
	cout<<"ARITHMETIC USING OPERATOR"<<endl;
	int i,j;
	char n;
	cout<<"Enter the 2 numbers:"<<endl;
	cin>>i>>j;
	cout<<"Enter the operation ooperator:"<<endl;
	cin>>n;
	switch(n)
	{
	case '+':
		cout<<i+j;
		break;
	case '-':
		cout<<i-j;
		break;
	case '*':
		cout<<i*j;
		break;
	case '/':
		cout<<i/j;
		break;
	default:
		cout<<"Entre a correct symbol";		
	}
		
}
