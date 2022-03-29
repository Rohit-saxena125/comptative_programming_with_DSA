#include<bits/stdc++.h>
using namespace std;
int concat (int a,int b)
{
    string s1 = to_string(a);
    string s2 = to_string(b);
    string s3 = s1+s2;
    int c = stoi(s3);
    return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for (int i = 0 ; i <= 9 ; i++)
        {
            int c = concat(n,i);
            if (c%9 == 0)
            {
                cout<<"Case #"<<t<<": "<<c<<endl;
                break;
            }
        }
    }
}
/*
9
18
27
36
45
54
63
72
81
90

*/