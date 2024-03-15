#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n, a, max=0;
     map <int , int> mp;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a;
         mp[a]++;

         if(mp[a]>max)
         {
             max=mp[a];
         }
     }

     for(auto it : mp)
     {
         if(it.second==max)
         {
             max=it.first;
             break;
         }
     }

     int cnt=0;

     for(auto it : mp)
     {
         if(it.first != max )
         {
             cnt+=it.second;
         }



     }

     cout<<cnt;







}
