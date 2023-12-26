#include<bits/stdc++.h>
using namespace std;
int main()
{
	array<int,8> ar={1,2,3,4,5,9};
	array<int,8> ar1={5,6,7,8,9};
	array<int,0> ar2;
	array<int,3> ar3;
	for(auto i:ar)
	{
		cout<<i<<'\n';
	}
	cout<<ar.max_size();
	ar1.swap(ar);
	for(auto i:ar)
	{
		cout<<i<<'\n';
	}
	
	(ar2.empty())?cout<<"Empty":cout<<"valid";
	
	ar3.fill(4);
	for(auto i:ar3)
	{
		cout<<i<<'\n';
	}
	
//	int arr[4]={5,7,8,9};
//	for(auto a:arr)
//	{
//		cout<<a;
//	}
	return 0;
	
	//array.at(index)	element find
	//array.front()		first index element find
	//array.back()		last index element find
	//array.size() or array.max_size()		array full size
	//array2.swap(array1);	swapping of two array
	//array.empty() 	check array is empty
	//array.fill(number)	filling the number to array
}
