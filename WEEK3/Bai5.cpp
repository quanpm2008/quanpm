#include<bits/stdc++.h>

using namespace std;

int main()
{   //hackerrank


    int tc; cin>>tc;
    while(tc--)
    {
    string s;
    cin>>s;
    string a="hackerrank";
    int cnt=0, j=0;
    for(int i=0;i<(int)a.size();i++)
    {

        for( ;j<(int)s.size();j++)
        {
            if(a[i]==s[j])
            {
                cnt++;
                j++;
                break;
            }
        }
    }

    if(cnt==(int)a.size())
    {
        cout<<"YES"<<endl;

    }
    else cout<<"NO"<<endl;

    }

}
