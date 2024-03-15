#include<bits/stdc++.h>
using namespace std;

int m,n, x[10000];
char a[10000][10000];


bool check[10000][10000]={false};

bool flat=0;
void Try(int i)
{
    for(int j=x[i]-1;j<=x[i]+1;j++)
    {   if(i==n)
            {
                flat=true;
                return;
            }
        if(a[i+1][j]=='E' && (a[i][j]=='E' || a[i][j]=='Y') && check[i+1][j]==false)
        {
            x[i+1]=j;
            check[i+1][j]=true;
            if(i==n-1)
            {
                flat=true;
                return;
            }
            else Try(i+1);
        }
    }
}



int main()
{
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='Y')
            {
                x[1]=j;
            }
        }
    }


    Try(1);

    if(flat) cout<<"YES";
    else cout<<"NO";

}
