#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int n ,int x)
{
    int low  = 0 ,high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(a[mid] == x)
        {
            return mid;
        }
        else if(a[mid] < x)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        int a[n];
        for(int i = 0; i<n;i++)
        {
            cin>>a[i];
        }
        int data;
        cin>>data;
        cout<<binary_search(a,n,data);
    }
    return 0;
}