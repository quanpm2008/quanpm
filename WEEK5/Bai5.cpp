    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {   int a, b;
        set <int> s;
        int tc; cin>>tc;
        while(tc--)
        {
            cin>>a>>b;
            if(a==1)
            {
                s.insert(b);
            }
            if(a==2)
            {
                s.erase(b);
            }
            if(a==3)
            {
                if(s.find(b)!=s.end())
                {
                    cout<<"Yes"<<endl;
                }
                else cout<<"No"<<endl;
            }
        }

    }



