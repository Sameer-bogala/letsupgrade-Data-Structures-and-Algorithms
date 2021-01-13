#include<iostream>
using namespace std;
int main()
{
	int n, count=0; cin>>n;
	long long int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<n; i++)
	{
		while(a[i]%10==0)
		{
			count++;
			a[i]/=10;
		}
	}
	long long int prod=1;
	for(int i=0; i<n; i++)
		prod*=a[i];
	cout<<prod;
	for(int i=1; i<=count; i++)
		cout<<0;
}


