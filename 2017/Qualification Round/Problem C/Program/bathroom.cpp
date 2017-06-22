#include<iostream>
#include<vector>
using namespace std;
long long int Min_Number(long long int ,long long int );
long long int Max_Number(long long int ,long long int );

void Even(long long int l_b,long long int u_b,long long int &min,long long int &max,long long int &k)
{
    long long int middle;
    middle=(l_b+u_b)/2;
    k=k/2;
    if(k == 1)
    {
        min = Min_Number(middle-l_b,u_b-middle);
        max = Max_Number(middle-l_b,u_b-middle);
        return;
    }
    else{
        if(k%2 == 0)
        {
            Even(middle+1,u_b,min,max,k);
        }
        else{
            Even(l_b,middle-1,min,max,k);
        }
    }
}
void Odd(long long int l_b,long long int u_b,long long int &min,long long int &max,long long int &k){
    long long int middle;
    middle=(l_b+u_b)/2;
    k/=2;
    if(k == 1){
        min = Min_Number(middle-l_b,u_b-middle);
        max = Max_Number(middle-l_b,u_b-middle);
        return;
    }
    else
    {
        if(k%2==0)
        {
            Odd(middle+1,u_b,min,max,k);
        }
        else
        {
            Odd(l_b,middle-1,min,max,k);
        }
    }
}

int main(void)
{
    long long int num,x,y,z,c;
    long long int k,l_b,u_b,min,max;
    int test,i;
    cin>>test;
    for(i=1;i<=test;i++)
    {
        cin>>num>>k;
        l_b=1;
        u_b=num;
        min=0;
        max=0;
        if(num%2==1)
        {
            if(k==1)
            {
                 min=num/2;
                 max=num/2;
            }
            else if(k%2==0)
            {
                x=num/2;
                 Odd(1,x,min,max,k);
            }
            else
            {
                 y=((num+1)/2)+1;
                 Odd(y,num,min,max,k);
            }
        }
        else
        {
            if(k == 1)
            {
                min = num/2-1;
                max = num/2;
            }
            else if(k%2 == 0)
            {
                z=num/2+1;
                Even(z,num,min,max,k);
            }
            else
            {
                c=num/2-1;
                Even(1,c,min,max,k);
            }
        }
    cout<<"Case #"<<i<<": "<<max<<" "<<min<<endl;

    }
}
long long int Min_Number(long long int a,long long int b)
{
    if(a<b)
        return a;
    else
        return b;
}
long long int Max_Number(long long int a,long long int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
