#include <bits/stdc++.h>
using namespace std;
#define ll long long 
istream& operator>>(istream &is, vector<ll> &a){
    for(auto& it : a){
        is >> it;
    }
    return is;
}
//
ostream& operator<<(ostream &os, vector<ll> &a){
    for (auto& it : a){
        os << it << ' ';
    }
    return os;
}
void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    cin >> a;
    sort(a.rbegin(), a.rend());
    cout << a;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}