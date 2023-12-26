#include<iostream>
using namespace std;
class name
{
	public:
		int n;
		int click1();
		int click2();
};
name::click1()
{
 cin>>n;
 cout<<"1st answer is added by 1:"<<n+1<<endl;
 return 0;
}
name::click2()
{
	cout<<"2nd answer is added by a 2:"<<n+2<<endl;
	return 0;
}
int main()
{
	name a;
	a.click1();
	a.click2();
	return 0;
}
