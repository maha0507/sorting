#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,swaped=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for( int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		if (a[j]>a[j+1])
		{
			swap(a[j],a[j+1]);
			swaped=1;
		}
		if (swaped==0)
		{
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
	
}
