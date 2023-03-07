// Author - Vedant Valsangkar
// 2023 CP GOALS - Expert at CF and Guardian at Leetcode
// I WILL MAKE IT HAPPEN
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<class T> using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

typedef long long    ll;
typedef long double  ld;
#define int          long long
#define rep(i,s,e)   for(int i=s;i<e;i++)
#define repr(i,s,e)  for(int i=s;i>=e;i--)
#define in(a)        for(auto &i:a) cin>>i
#define out(a)       for(auto &i:a) cout<<i<<" "; cout<<endl
#define uniq(a)      a.erase(unique(all(a)),a.end())
#define all(a)       a.begin(),a.end()
#define allr(a)      a.rbegin(),a.rend()
#define endl         '\n'

bool per_square(ld x){if(x<0) return 0; ll sr=sqrt(x); return (sr*sr==x);}
bool is_prime(ll x){for(int i=2;i*i<=x;i++) if(x%i==0) return 0; return 1;}

void solve()
{   
    int n; cin>>n;
    if(n%2 == 0) {
        cout<<n/2<<" "<<n/2<<endl;
        return;
    }
    string a, b;
    int c = 0, d = 0;
    string ns = to_string(n);
    int sz = ns.size();
    rep(i,0,sz) {
        int cur = ns[i]-'0';
        if(cur&1) {
            if(c>d) {
                a += to_string(cur/2);
                b += to_string((cur+1)/2);
                d++;
            } else {
                a += to_string((cur+1)/2);
                b += to_string(cur/2);
                c++;
            }
        } else {
            a += to_string(cur/2);
            b += to_string(cur/2);
        }
    }
    cout<<stoi(a)<<" "<<stoi(b)<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // sieve();
    int tc = 1;
    cin>>tc;
    for(int t=1;t<=tc;t++) {
        // cout<<"Case #"<<t<<": ";
        solve();
    }
    return 0;
}
