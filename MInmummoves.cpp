#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c = 0;
	    cin>>a>>b;
	    while(a != b)
	    {
	        if (a < b)
	        {
	            int x = b - a ;
	            if ((a|x) - 1 == b)
	            {
	                a = + 1 ;
	                c++;
	            }
	            else 
	            {
	                a = a|x;
	                c++;
	            }
	        }
	        else if (a > b)
	        {
	            b = b + 1;
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}