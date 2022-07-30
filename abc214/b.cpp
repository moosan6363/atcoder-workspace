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
    int s, t;
    cin >>s >>t;
    int ans=0;
    for(int a=0; a<=s; a++){
        for(int b=0; b<=s-a; b++){
            for(int c=0; c<=s-a-b; c++){
                if(a*b*c<=t) ans++;
            }
        }
    }
    cout << ans;
}