#include<bits/stdc++.h>
using namespace std;
void Selection_sort(int a[],int n)
{
    int temp;
    for(int i =0 ;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for(int i = 0 ;i <n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i<n;i++)
        {
            cin>>a[i];
        }
        Selection_sort(a,n);
    }
    return 0;
}