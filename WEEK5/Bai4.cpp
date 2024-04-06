    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {
        int n,a; cin>>n;
        vector <int> v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }

        int tc; cin>>tc;
        while(tc--)
        {
            vector <int>::iterator it;
            cin>>a;
            it=lower_bound(v.begin(),v.end(),a);
            if(v[it-v.begin()]==a)
            {
                cout<<"Yes "<<it-v.begin()+1<<endl;
            }

            else
            {
               cout<<"No "<<it-v.begin()+1<<endl;
            }

        }

    }
