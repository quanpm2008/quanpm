#include<bits/stdc++.h>

using namespace std;




int main()
{
   int a[100], b[100];
   int m, n; cin>>m>>n;
   int cnt=0;
   for(int i=0;i<m;i++)
   {
       cin>>a[i];
   }
   for(int i=0;i<n;i++)
   {
       cin>>b[i];
   }

   sort(b, b+n);
   for(int i=1;i<=b[0];i++)
   {   bool flat=false;
       for(int j=0;j<n;j++)
       {
           if(b[j]%i==0)
           {
               if(j==n-1)
               flat=true;
               continue;
           }
           else break;
       }
    if(flat)
    {
        for(int j=0;j<m;j++)
        {
            if(i%a[j]!=0)
            {
                flat=false;
                break;
            }
        }
    }

    if(flat)
    {
        cnt++;
    }

   }


   cout<<cnt;


   }










