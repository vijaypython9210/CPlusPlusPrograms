#include<iostream>
using namespace std;
int main()
{
	cout<<"SQUARE OF NUMBER DIGITS"<<endl;
	int n,rem,s,t=0;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	while(n>0)
	{
		rem=n%10;
		if(rem==0)
			s=1;
		else
		 s=rem*rem;
	     t=t+s;
		 n=n/10;
    }
	cout<<"Square of given number digits value="<<t;
	return 0;
}




/*int main()
{
   int num, rem, sq, sum=0;
   cout<<"Enter a Number: ";
   cin>>num;
   while(num>0)
   {
      rem = num%10;
      if(rem==0)
         sq = 1;
      else
         sq = rem*rem;
      sum = sum + sq;
      num = num/10;
   }
   cout<<"\nSum of squares of all digits = "<<sum;
   cout<<endl;
   return 0;
}
*/
