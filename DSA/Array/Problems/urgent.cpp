#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,z;
    cin>>n>>z;
    int a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int sum = 0 ,c = 0;
    for (int i = n-1 ; i != 0; i--)
    {
        if (sum != z)
        {
            sum += a[i];
            c++;
        }
    }
    if (c == n-1)
    {
        cout<<"Evacuate"<<endl;
    }
    else if(c == 0)
    {
        cout<<c+1<<endl;
    }
    else
    {
        cout<<c<<endl;
    }
}