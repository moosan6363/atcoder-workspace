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

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n)cin >>a[i];
    vector<int> ans;
    
    rep(i, n){
        const auto &res = prime_factorize(a[i]);
        for(auto p : res){
            int tmp=0;
            for(int x: ans){
                if(x!=p.first)continue;
                else {
                    tmp=1;
                    break;
                }
                if(tmp==1)continue;
                else {
                    ans.push_back(p.first);
                }
            }
        }
    }
    int value=1;
    vector<int> ans_list;
    ans_list.push_back(1);
    for(int i=0; i<m; ++i){
        for(int x: ans){
            if(m%x!=0){
                value++;
                ans_list.push_back(m);
            }    
        }
    }
    cout << value <<endl;
    for(int x: ans_list){
        cout << x <<endl;
    }
}