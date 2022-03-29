#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a = 0,b = 0,c = 0;
        if(x %3 == 0)
        {
            a += x/3;
        }
        else if (x %3 == 1)
        {
            a += x/3 + 1;
            b += 2;
        }
        else if (x % 3 == 2)
        {
            a += x/3  +  1;
            b += 1;
        }
        if (a + b <= n)
        {
            cout<<"Yes"<<endl;
            cout<<a<<" "<<b<<" "<<n-a-b<<endl;
        }
        else 
        {
            cout<<"No"<<endl;
        }
    }
}
