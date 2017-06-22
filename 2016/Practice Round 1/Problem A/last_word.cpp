#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s,st;
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>s;
		int j=1;
		st=s[0];
		while(s[j]!='\0')
		{
			if(s[j]>=st[0])
			{
				st=s[j]+st;
			}
			else
			{
				st=st+s[j];
			}
			j++;
		}
		cout<<"Case #"<<i+1<<": "<<st<<"\n";
	}
}