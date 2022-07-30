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
const int mxN=2e6+3; \
vector<int> x_vec={-1,1,0,0};
vector<int> y_vec={0,0,-1,1};

int main(){
    int n;
    cin>>n;
    vector<int> x(n);
    rep(i,n)cin>>x[i];

    cout<<fixed<<setprecision(15);

    long long ans1=0;
    rep(i,n)ans1+=abs(x[i]);
    cout<<ans1<<endl;

    long long ans2=0;
    rep(i,n)ans2+=(long long)x[i]*x[i];
    cout<<sqrt(ans2)<<endl;

    int ans3=0;
    rep(i,n)ans3=std::max(ans3,abs(x[i]));
    cout<<ans3<<endl;
}