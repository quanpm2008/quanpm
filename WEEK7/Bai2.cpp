#include<bits/stdc++.h>

using namespace std;

char b[3], a[4]={'a','b','c','d'};

void inkq()
{
    for(int i=1;i<=3;i++)
    {
        cout<<b[i];
    }
    cout<<endl;
}


void Try(int i)
{
    for(int j=0;j<4;j++)
    {
        b[i]=a[j];
        if(i==3)
        {
            inkq();
        }
        else Try(i+1);

    }

}



int main()
{
   Try(1);

   }










