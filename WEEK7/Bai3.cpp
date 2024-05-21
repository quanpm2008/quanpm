#include<bits/stdc++.h>
using namespace std;

bool check[1000];
int n, a, cnt=0, num[100], ji[100];

void inkq(int n)
{
    for(int i=1;i<=n;i++)
    {
         cout<<num[i]<<" ";
    }

    cout<<endl;

}

int Try(int i)
{
    for(int j=1;j<=sqrt(n);j++)
    {
        if(check[j]==0 && j>ji[i-1])
        {
            ji[i]=j;
            num[i]=pow(j,a)+num[i-1];
            check[j]=1;
            if(num[i]==n)
            {
                cnt++;

            }
            else if(num[i]>n)
            {

                check[j]=0;
                break;

            }
            else Try(i+1);
            check[j]=0;
        }
    }
}



int main()
{   for(int i=0;i<100;i++)
{
    check[i]=0;
    num[i]=0;
}
    cin>>n>>a;
    Try(1);
    cout<<cnt;

}
