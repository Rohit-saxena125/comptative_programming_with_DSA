#include<bits/stdc++.h>
using namespace std;
bool type(string I, string p)
{
    for (int i = 0 ;i<I.length();i++)
    {
            if (I[i] != p[i])
            {
                return false ;
            }
    }
    return true;
} 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string I,p;
        cin>>I>>p;
        if (type(I,p))
        {
            cout<<p.length()-I.length()<<endl;
        }
        else 
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
        
    }
}