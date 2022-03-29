#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum = 0;
        int missing = (n * (n+1))/2;
        for (int i = 0;i<n-1 ;i++)
        {
            sum += array[i]; 
        }
        return missing - sum ;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> array(n-1);
        for (int i = 0 ;i<n-1;++i)
        {
            cin>>array[i];
        }
        Solution ob;
        cout<<ob.MissingNumber(array,n);
    }
    return 0;
}