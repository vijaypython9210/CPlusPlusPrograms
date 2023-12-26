#include<iostream>
using namespace std;
class open
{
	public:
		int a,b;
		open()
		{											//DEFAULT CONSTRUCTOR
			int a=10;
			int b=18;
		}
};
	int main()
	{
		open o;
		std::cout<<o.a<<" "<<o.b;
		return 0;
	}
	
