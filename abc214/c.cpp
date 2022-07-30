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
    int n;
    cin >>n;
    int s[n+1], t[n+1], a[n+1];
    for(int i=1; i<=n; i++) cin>>s[i];
    for(int i=1; i<=n; i++) cin>>t[i];
    for(int i=2; i<=n; i++){
        a[i]=min(a[i-1]+s[i-1], t[i]);
    }
    a[1]=min(a[n]+s[n], t[1]);
    cout<<a[1]<<endl;
    for(int i=2; i<=n; i++){
        a[i]=min(a[i-1]+s[i-1], t[i]);
        cout<<a[i]<<endl;
    }
}