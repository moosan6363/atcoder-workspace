#include <bits/stdc++.h>
using namespace std;


void solve(long long H, long long W, long long M, std::vector<long long> h, std::vector<long long> w){

}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long H;
    scanf("%lld",&H);
    long long W;
    scanf("%lld",&W);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> h(M);
    std::vector<long long> w(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&h[i]);
        scanf("%lld",&w[i]);
    }
    solve(H, W, M, std::move(h), std::move(w));
    return 0;
}
