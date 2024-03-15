#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    string s;
    cin>>n;
    cin.ignore();
    getline(cin, s);
    cin>>k;
    if(k>=26)
    {
        k=k-26*(k/26);
    }


    for(int i=0;i<n;i++)
    {
        if((s[i]>='a' && s[i] <='z' ) || (s[i]>='A' && s[i] <='Z' ))
        {
            if((s[i]<='Z' && s[i]+k>'Z') || (int)s[i]+k>122 )
        {
            s[i]=s[i]-26;
        }

           s[i]+=k;

        }


    }




    cout<<s;



}
