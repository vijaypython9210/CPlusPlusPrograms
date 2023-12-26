#include<iostream>
using namespace std;
int main()
{
	cout<<"MULTIPLICATION TABLE"<<endl<<endl;
	int i,res,j,k;
	cout<<"Enter the multiplier number:";
	cin>>j;
	cout<<j<<"tables:"<<endl;							//MULTIPLICATION METHOD
	for(i=1;i<=10;i++)
	{
		k=i*j;
		cout<<i<<"*"<<j<<"= "<<k<<endl;
	}
	return 0;
}



/*int main()
{
	int n,i,j,res,k,p;
	cout<<"Range of tables value:"<<endl;
	cin>>n;
	cout<<"Tables count value:"<<endl;
	cin>>p;
	for(i=1;i<=n;i++)
	{															//INPUT VALUE GET BY USER MULTIPLICATION METHOD
		k=i;
		cout<<"\n"<<i<<"Tables:"<<" ";
		for(j=1;j<=p;j++)
		{
			res=i*j;
			cout<<res<<" ";
		}
		cout<<endl;
		cout<<endl;
	}
	return 0;
}*/
