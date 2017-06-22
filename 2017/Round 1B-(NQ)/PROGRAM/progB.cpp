#include <iostream>
#include <cstdio>
using namespace std;
void abc(void)
{
    return;
}
void cbd(void)
{
    double w,e;
    return;
}
int main()
{
  int test;
  long long n,d, S__i,d__i;
  int i;
  double total=0;
  cin>>test;
  for(int q=1;q<=test;q++)
  {
    double m=0,x;
    cin>>d>>n;
    for(i =0;i<n;i++)
    {
      cin>>d__i>>S__i;
      m=(double)(d-d__i)/(double)S__i;
      if(i==0)
      {
          total=m;
      }
      if(m>total)
      {
        total=m;
      }
    }
     x=(double)d/(double)total;
    cout<<"Case #"<<q<<": ";
    printf("%.6f\n",x);

  }
}
