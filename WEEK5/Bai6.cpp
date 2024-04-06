    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {   int a, c;
        string b;
        map <string, int> mp;
        int tc; cin>>tc;
        while(tc--)
        {
            cin>>a;
            if(a==1)
            {  cin>>b>>c;
               mp[b]+=c;
            }
            else if(a==2)
            {   cin>>b;
                mp[b]=0;
            }
            else if(a==3)
            {   cin>>b;
                cout<<mp[b]<<endl;
            }
        }

    }


