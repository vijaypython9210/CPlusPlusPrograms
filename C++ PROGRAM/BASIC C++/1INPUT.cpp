#include<iostream>
using namespace std;
int main()
{
	char str1[200];
	char str2[200];
cout<<"\nHello world how are you!";
cout<<endl;
cout<<"\nboy\n";
cin>>str1; //space has been not consider
gets(str2);// space also consider
cout<<str1;
cout<<str2;
}
