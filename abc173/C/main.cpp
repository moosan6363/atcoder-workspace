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
    int h,w,k,ans=0;
    cin>>h>>w>>k;
    Graph c(h,vector<int>(w));
    rep(i,h)rep(j,w)cin>>c.at(i).at(j);
    for(int row=0;row<pow(2,h);row++){
        for(int column=0;column<pow(2,w);column++){
            int tmp1=row,tmp2=column;
            bool tmp[h+w]={0};
            for(int i=0;i<h;i++,tmp1>>1)tmp[i]=tmp1%2;
            for(int i=0;i<w;i++,tmp2>>1)tmp[i+h]=tmp2%2;
            rep(i,h){
                int cnt=0;
                rep(j,w){
                    if(tmp[i]&&tmp[j+h])if(c.at(i).at(j)=='#')cnt++;
                }
                if(cnt==k)ans++;    
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
