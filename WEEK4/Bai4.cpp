#include<bits/stdc++.h>

using namespace std;




int main()
{    int a, b, m; cin>>a>>b;
     map <int , vector <int>> mp;
     for(int i=0;i<a;i++)
     {
        int n; cin>>n;
        for(int j=0;j<n;j++)
          {   cin>>m;
              mp[i].push_back(m);
     }
}
  int x, y;
  for(int i=0;i<b;i++)
  {
      cin>>x>>y;
      cout<< mp[x][y]<<endl;
  }
}
