#include<bits/stdc++.h>

using namespace std;

int main()
{
     int num, pages;
     cin>>num>>pages;
     int a=num/2+1;
     int b=pages/2+1;

     if(a-b<b)
     {
         cout<<a-b;

     }
     else cout<<b-1;



}
