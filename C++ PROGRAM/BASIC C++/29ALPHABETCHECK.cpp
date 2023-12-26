#include<iostream>
using namespace std;
/*int main()
{
	char n,a;
	cout<<"Enter the letter:";
	cin>>n;
	a=n;										//ALPHABET LETTER CHECK
	if(a>=65 && a<=90)
	{
		cout<<"Capital letter";
	}
	else if(a>=97 && a<=122)
	{
		cout<<"Small letter";
	}
	else
	{
		cout<<"its not a alphabet";
	}
}*/

int main()
{
	char ch;
	cin>>ch;
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
	{
		cout<<"Alphabet letters";
	}
	else
	{
		cout<<"not alphabet";
	}
}
