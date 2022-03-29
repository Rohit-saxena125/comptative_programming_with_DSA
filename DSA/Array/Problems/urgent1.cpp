#include<bits/stdc++.h>
using namespace std;
void gx(int N,vector<int> &q)
{
    for(int i=0;i<N;i++)
    {
        long long freq = (long)(i+1) * (N-i) -1;
        if(freq % 2== 1) q[i]=1;
    }
}
vector<int> calcXOR (int N, vector<int> A, int Q, vector<vector<int> > queries) {
   // your code here
   vector<int> q(N,0);
   gx(N,q);
   long long xr =0;
   for(int i=0;i<N;i++){
       if(q[i] )xr=xr^A[i];
   }
   vector<int> ans;
   vector<int> B;
   B=A;
   for(auto x :queries){

        int in =x[0];
        in--;
        if(q[in]){
            int an=xr^B[in]^x[1];
            ans.push_back(an);
            B[in]=x[1];
            xr = an;
        }
        else{
            ans.push_back(xr);
            }
    }
return  ans;
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i_A = 0; i_A < N; i_A++)
        {
        	cin >> A[i_A];
        }
        int Q;
        cin >> Q;
        vector<vector<int> > queries(Q, vector<int>(2));
        for (int i_queries = 0; i_queries < Q; i_queries++)
        {
        	for(int j_queries = 0; j_queries < 2; j_queries++)
        	{
        		cin >> queries[i_queries][j_queries];
        	}
        }

        vector<int> out_;
        out_ = calcXOR(N, A, Q, queries);
        cout << out_[0];
        for(int i_out_ = 1; i_out_ < out_.size(); i_out_++)
        {
        	cout << " " << out_[i_out_];
        }
        cout << "\n";
    }
}