#include<bits/stdc++.h>
using namespace std;
int linear_search(int a[],int n, int x)
{
    for(int i =0;i<n;i++)
    {
        if(a[i] == x)
        {
            return i;
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
        int n;
        cin>>n;
        int a[n],data;
        for(int i = 0; i<n;i++)
        {
            cin>>a[i];
        }
        cin>>data;
        cout<<linear_search(a,n,data);
    }
    return 0;
}