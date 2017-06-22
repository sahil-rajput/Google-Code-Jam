#include <iostream>
using namespace std;
#define MAX 2501
int main()
{
	int t;
	long int n,x=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int b[MAX]={0};
		
		cin>>n;
		x=2*n-1;
		long int temp;
		for(int j=0;j<x;j++)
		{
			for(int k=0;k<n;k++)
			{
				cin>>temp;
				++b[temp];
			}
		}
		cout<<"Case #"<<i+1<<": ";
		for(int j=0;j<MAX;j++)
		{
			if(b[j]%2!=0)
			{
				cout<<j<<" ";
			}
		}
		cout<<endl;
	
	}
}