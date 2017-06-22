//C++ implementation of Problem A
#include <iostream>
#include <string>
using namespace std;

//Function to flip the and pancakes
int inverse(string s, long int k, int count)
{
	//Declaring index
	int z = 0,x=0;
		//Running till the end of the string
		while(s[z] != '\0')
		{
			//When it found '-',else skip
			if(s[x]== '-')
			{
				//increment count
				count ++;
				//Return -1 when we can not flip the pancakes
				if(s.length()- x < k)
				{
					return -1;
				}
				//Making all '-' to '+' and vice versa
				for(int j = x; j < x+k ; j++)
				{
					if(s[j] == '-')
						s[j] = '+';
					else
						s[j] = '-';
				}
			}
			//Incrementing indexes
			x++;
			z++;
		}
	//returning count
	return count;
}
//Driver code
int main()
{
	string s = "-++++++++-";
	long int k = 2;
	long int count=0;
	//Calling function
	count=inverse(s,k,count);
	if(count == -1)
	{
		//cout<<"Case #"<<i+1<<": "<<"IMPOSSIBLE"<<"\n";
		cout<<"IMPOSSIBLE"<<"\n";
	}
	else
	//	cout<<"Case #"<<i+1<<": "<<count<<"\n";
		cout<<count<<"\n";
	return 0;
}
