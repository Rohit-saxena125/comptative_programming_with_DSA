#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S,B;
        cin>>S>>B;
        for (int i = 0; i < 5;i++)
        {
            if(S[i]==B[i])
            {
                cout<<"G";
            }
            else
            {
                cout<<"B";
            }
        }
        cout<<endl;
    }
}