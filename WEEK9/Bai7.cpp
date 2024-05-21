#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc; cin>>tc;
    string s;
    while(tc--)
    {
        cin>>s;
        string a="", b="";
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)
            {
                a+=s[i];
            }
            else b+=s[i];
        }

        cout<<a<<" "<<b<<endl;
    }
}
