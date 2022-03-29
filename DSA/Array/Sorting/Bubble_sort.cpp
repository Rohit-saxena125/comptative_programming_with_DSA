#include<bits/stdc++.h>
using namespace std;
void Bubble_sort(int a[],int n)
{
    int counter = 1;
    while(counter<n)
    {
        for(int i = 0;i<n-counter;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        counter++;
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
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        Bubble_sort(a,n);
    }
    return 0;
}