#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y,A,B;
        cin>>X>>Y>>A>>B;
        if (X!= A && X!= B && Y!= A && Y!= B)
        {
            cout<<"2"<<endl;
        }
        else if ((X==B && Y==A) || (X==A && Y==B))
        
        {
            cout<<"0"<<endl;
        }
        
        else
        {
            cout<<"1"<<endl;
        }
    }
}