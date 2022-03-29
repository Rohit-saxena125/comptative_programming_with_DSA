#include<bits/stdc++.h>
using namespace std;
int max_min(int a[],int n)
{
    // using recursion
    int max,min;
    if (n == 0)
    {
        return a[0];
    }
    else if (max <a[n-1])
    {
        return max = a[n-1];
    }
    else if (min > a[n-1])
    {
        return min = a[n-1];
    }
    return max_min(a,n-1) ;

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
       /* int max = a[0];
        int min = a[0];
        for(int i = 0;i<n;i++)
        {
            if(a[i]>max)
            {
                max = a[i];
            }
            if(a[i]<min)
            {
                min = a[i];
            }
        }*/
        cout<<max_min(a,n)<<endl;
        //cout<<max<<" "<<min<<endl;
    }
    return 0;
}