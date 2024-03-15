#include<bits/stdc++.h>

using namespace std;




int main()
{
    int n, a; cin>>n;
    map <int, int> mp1, mp2;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mp1[a]++;
    }

    for(int i=0;i<=n;i++)
    {
        cin>>a;
        mp2[a]++;
    }

    for(auto it : mp2)
    {
        if( it.second != mp1[it.first])
        {
            cout<<it.first<<endl;
            break;
        }
    }


}
