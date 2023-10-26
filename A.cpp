#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, t; cin >> n >> t;
    vector<ll> a(n);
    for (auto& it : a) cin >> it;
    vector<ll> p(n);
    p[0] = a[0];
    for (ll i = 1; i < n; i++) p[i] = p[i - 1] + a[i];
    ll ans = (p[0] < t ? 1 : 0);
    for (ll i = 0; i < n; i++){
        ll l = 0, r = i; 
        while(r - l > 1){
            ll m = (r + l) >> 1;
            if (m == 0){
                if (p[i] < t) r = m;
                else l = m;
            } else {
                if (p[i] - p[m - 1] < t) r = m;
                else l = m;
            }
        }
        if (r == i) {
            if (r == 0){
                if (p[0] > t) continue;
            } else {
                if (p[i] - p[i - 1] > t) continue;
                else ans = max(ans, 1ll);
            }
        }
        else ans = max(ans, i - r + 1);
    }
    cout << ans;
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