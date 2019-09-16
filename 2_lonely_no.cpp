#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the size of array:";
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter elements in array:";
	int z=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		z=z^arr[i];
	}
	int chk=0,k=1;
	while((z&k)==0)
	{
	k=k<<1;
	}
	cout<<k<<endl;
	int ans1=0,ans2=0;
	for(int i=0;i<n;i++)
	{
		if((arr[i]&k)==0)
		ans1=ans1^arr[i];
		else
		ans2=ans2^arr[i];
	}
	cout<<"Two lonely no.s are "<<ans1<<" and "<<ans2<<endl;
	return 0;
}
