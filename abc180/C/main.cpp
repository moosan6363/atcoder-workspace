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

void ans(ll n, ll value){
    if(value==sqrt(n)){
        cout<<value<<endl;
        return;
    }else if(value>sqrt(n))return;
    else {
        if(n%value==0){
            cout<<value<<endl;
            ans(n, value+1);
            cout<<n/value<<endl;
        }else ans(n, value+1);
    }
}

int main(){
    ll n;
    cin>>n;
    cout<<1<<endl;
    ans(n,2);
    if(n!=1)cout<<n<<endl;
    return 0;
}
