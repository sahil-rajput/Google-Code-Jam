#include <iostream>
#include <string>
using namespace std;
#define MAX 25

int main()
{

  char a[MAX][MAX];
  int t, r, c, f1 =0, j;
  char b;
  cin>>t;
  for(int x= 1; x<=t;x++)
  {
    cin>>r>>c;
    for(int i = 0;i <r;i++)
    {
      for(int j = 0; j<c;j++)
      {
        cin>>a[i][j];
      }
    }
    for(int i = 0; i<r;i++)
    {
      f1 = 0;
      for(int j = 0; j< c;j++)
      {
        if(a[i][j]!='?')
        {
          f1 = 1;
          b = a[i][j];
          int k = j+1;
          while(a[i][k] =='?')
          {
            if(k<c){
            a[i][k] = b;
            k++;}
          }
          int x1 = j-1;
          while(a[i][x1] =='?')
          {
            if(x1>=0){
            a[i][x1] = b;
            x1--;}
          }
        }
      }
      if(f1 == 0)
      {
        int f =0;
        if(i == 0)
        {
          for(int x2 = i+1; x2<r;x2++)
          {
            for(int x3 = 0; x3<c;x3++)
            {
              if(a[x2][x3]!='?')
              {
                f = 1;
                for(int j = 0;j<c;j++)
                {
                  a[i][j] = a[x2][j];
                }
                i--;
                break;

              }
              if(f!=0)
               break;
            }
            if(f!=0)
              break;
          }
        }
        else
        {
          for(int j = 0;j<c;j++)
          {
            a[i][j] = a[i-1][j];
          }
        }
      }
    }

    cout<<"Case #"<<x<<":\n";
    for(int i = 0; i<r;i++)
    {
      for(int j = 0; j< c;j++)
      {
        cout<<a[i][j];
      }
      cout<<endl;
    }

  }
}

