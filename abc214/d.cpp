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
using P=pair<int, int>;


struct UnionFind {
  vector<int> d;
  UnionFind(int n=0): d(n,-1) {}
  int find(int x) {
    if (d[x] < 0) return x;
    return d[x] = find(d[x]);
  }
  bool unite(int x, int y) {
    x = find(x); y = find(y);
    if (x == y) return false;
    if (d[x] > d[y]) swap(x,y);
    d[x] += d[y];
    d[y] = x;
    return true;
  }
  bool same(int x, int y) { return find(x) == find(y);}
  int size(int x) { return -d[find(x)];}
};



int main(){
    int n;
    cin >> n;
    vector<pair<int, P>> es;
    rep(i, n-1){
        int u, v, w;
        cin >> u >> v >> w;
        --u; --v;
        es.emplace_back(w, P(u, v));
    }
    sort(es.begin(), es.end());
    UnionFind d(n);
    ll ans=0;
    for(auto[w, e] :es){
        auto[a, b] =e;
        ans+=(long long)(w)*d.size(a)*d.size(b);
        d.unite(a, b);
    }
    cout << ans << endl;
}