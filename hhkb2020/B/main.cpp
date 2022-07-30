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
    int h,w;
    cin>>h>>w;
    char s[110][110]={0};
    rep(i,h)rep(j,w)cin>>s[i][j];
    int ans=0;
    rep(i,h)rep(j,w){
        if(s[i][j]=='.'){
            rep(k,4){
                int tmp1=i-x_vec[k],tmp2=j-y_vec[k];
                if(0<=tmp1&&tmp1<h&&0<=tmp2&&tmp2<w&&s[tmp1][tmp2]=='.')ans++;
            }
            s[i][j]='#';
        }
    }
    cout<<ans<<endl;
    return 0;
}