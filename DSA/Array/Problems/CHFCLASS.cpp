#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int ans = n /7;
        long long int rem = n % 7;
        if(rem == 6)
        {
            cout<<ans+1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
}