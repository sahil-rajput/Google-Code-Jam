//C++ program to implement Problem B of google code jam
#include <iostream>
#include <string>
using namespace std;
void fetch_fun(string sl,int &i)
{
   i--;
  while(i>0)
  {
      if(sl[i]!=sl[i-1])
      {
          return;
      }
      else
      {
          i--;
      }
   }
}
//Driver Code
int main()
{
  //Input number
  long long number = 52233344555577889;
  int i;
  //Converting number to string
  string sl = to_string(number);
  //Calling function
  for(i=1;sl[i]!='\0';i++)
  {
      if(sl[i]<sl[i-1])
      {
          fetch_fun(sl, i);
          sl[i] = sl[i]-1;
          break;
       }
   }
   //Making all digits to 9
   i++;
   for(;sl[i]!='\0';i++)
   {
       sl[i] = '9';
    }
    //Converting string to number
    number=stol(sl);
    cout<<number<<"\n";
    return 0;
}
