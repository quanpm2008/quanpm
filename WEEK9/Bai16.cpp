#include<bits/stdc++.h>
using namespace std;


void BubbleSort(int a[], int n, int &sum)
{
    for(int i = 0 ; i < n; i++)
    {
        int numberOfSort = 0;
        for(int j = 0 ; j < n - i - 1; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                numberOfSort++;
                sum++;
            }
        }

        if(numberOfSort == 0)
        {
            break;
        }
    }
}


int main()
{
    int n, sum =0;
    int *a = new int[10];

    cin>>n;
    for(int i = 0; i < n ;i++)
    {
        cin>>a[i];
    }

    BubbleSort(a,n,sum);
    cout<<"Array is sorted in "<<sum<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;




}
