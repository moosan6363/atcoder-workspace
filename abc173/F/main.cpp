#include <bits/stdc++.h>
using namespace std;


void solve(long long N, std::vector<long long> u, std::vector<long long> v){

}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> u(N-1);
    std::vector<long long> v(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&u[i]);
        scanf("%lld",&v[i]);
    }
    solve(N, std::move(u), std::move(v));
    return 0;
}
