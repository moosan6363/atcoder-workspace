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

int main(){
    int n,p[200010]={0};
    cin>>n;
    rep(i,n)cin>>p[i];
    bool b[200010]={0};
    int ans=0;
    rep(i,n){
        if(b[p[i]]==0){
            b[p[i]]=1;
            if(ans==p[i])while(b[ans]==1)ans++;
        }
        cout<<ans<<endl;
    }
    return 0;

}
