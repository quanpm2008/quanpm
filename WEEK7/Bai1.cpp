#include<bits/stdc++.h>

using namespace std;

bool Timkiem(int a[], int n, int b)
{

    int left=0, right=n-1, mid;
    while(left<right)
    {
        mid=(right+left)+1;
        if(a[mid]==b)
        {
            return true;
        }
        else if(a[mid]<b)
        {
            right=mid;
        }
        else left=mid+1;
    }

    return false;

}


int main()
{   int n, b; cin>>n>>b;
    int a[n];


    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }

    sort(a, a+n);

    if(Timkiem(a, n, b))
    {
        cout<<"Yesss";
    }
    else cout<<"No";

}
