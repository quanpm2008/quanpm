#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
    bool flag=false;
    vector <int> arr;
     int n; cin>>n;
     int a;
     for(int i=0;i<n;i++)
     {
         cin>>a;
         arr.push_back(a);
     }
            int cnt1=0, cnt2=0;

            for(int j=0;j<(int)arr.size();j++)
            {
                cnt2+=arr[j];
            }
            cnt2=cnt2-arr[0];
            for(int i=1;i<(int)arr.size();i++)
            {

            if(cnt1==cnt2)
            {
                flag=true;
                break;
            }
            cnt1+=arr[i-1];
            cnt2-=arr[i];
            }
            if((int)arr.size()==1)
            {
                cout<<"YES"<<endl;
                continue;
            }
   if(flag)
   {
       cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;
    }

}
