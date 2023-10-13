#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (auto& it : a) cin >> it;
    sort(a.begin(), a.end());
    for (auto& it : a) cout << it << ' ';
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