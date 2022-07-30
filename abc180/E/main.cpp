#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define pb push_back
#define ALL(c) (c).begin,(c).end()
using namespace std;
using ll=long long;
using ld=long double;
using Graph=vector<vector<int>>;
const int MOD=1e9+7;
const int mod=998244353;
const int mxN=2e6+3;
vector<int> x_vec={-1,1,0,0};
vector<int> y_vec={0,0,-1,1};

int main(void){
    int n;
    vector<vector<int>> cdn(n, vector<int>(3));
    cin>>n;
    rep(i, n)rep(j, 3)cin>>cdn[i][j];
    vector<vector<int>> dp(n-1, vector<int>(pow(2, n-1)));
}