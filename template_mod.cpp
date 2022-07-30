#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define pb push_back
#define ALL(c) (c).begin,(c).end()
using namespace std;
using ll=long long;
using ld=long double;
using Graph=vector<vector<int>>;
const int mod=1e9+7;
const int MOD=998244353;
const int mxN=2e6+3;
vector<int> x_vec={-1,1,0,0};
vector<int> y_vec={0,0,-1,1};

template<int mod>
struct ModInt {
    long long x;
 
    ModInt() : x(0) {}
    ModInt(long long y) : x(y >= 0 ? y % mod : (mod - (-y) % mod) % mod) {}
 
    explicit operator int() const {return x;}
 
    ModInt &operator+=(const ModInt &p) {
        if((x += p.x) >= mod) x -= mod;
        return *this;
    }
    ModInt &operator-=(const ModInt &p) {
        if((x += mod - p.x) >= mod) x -= mod;
        return *this;
    }
    ModInt &operator*=(const ModInt &p) {
        x = (int)(1LL * x * p.x % mod);
        return *this;
    }
    ModInt &operator/=(const ModInt &p) {
        *this *= p.inverse();
        return *this;
    }
 
    ModInt operator-() const { return ModInt(-x); }
    ModInt operator+(const ModInt &p) const { return ModInt(*this) += p; }
    ModInt operator-(const ModInt &p) const { return ModInt(*this) -= p; }
    ModInt operator*(const ModInt &p) const { return ModInt(*this) *= p; }
    ModInt operator/(const ModInt &p) const { return ModInt(*this) /= p; }
 
    bool operator==(const ModInt &p) const { return x == p.x; }
    bool operator!=(const ModInt &p) const { return x != p.x; }
 
    ModInt inverse() const{
        int a = x, b = mod, u = 1, v = 0, t;
        while(b > 0) {
            t = a / b;
            a -= t * b;
            swap(a, b);
            u -= t * v;
            swap(u, v);
        }
        return ModInt(u);
    }
 
    ModInt power(long long p) const{
        int a = x;
        if (p==0) return 1;
        if (p==1) return ModInt(a);
        if (p%2==1) return (ModInt(a)*ModInt(a)).power(p/2)*ModInt(a);
        else return (ModInt(a)*ModInt(a)).power(p/2);
    }
 
    ModInt power(const ModInt p) const{
        return ((ModInt)x).power(p.x);
    }
 
    friend ostream &operator<<(ostream &os, const ModInt<mod> &p) {
        return os << p.x;
    }
    friend istream &operator>>(istream &is, ModInt<mod> &a) {
        long long x;
        is >> x;
        a = ModInt<mod>(x);
        return (is);
    }
};
 
using modint = ModInt<mod>;