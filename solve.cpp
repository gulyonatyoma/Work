#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn = 1e5 + 20;
ll dp[maxn];
void solve(){
    for (ll i = 0; i < maxn; i++) dp[i] = 0;
    ll n; cin >> n;
    vector<pair<ll, ll>> a(n);
    for (auto& it : a){
        cin >> it.first >> it.second;
    }
    dp[0] = 1;
    a.push_back({1e10, 1e10});
    ll last = a[0].first;
    for (ll i = 1; i < n; i++){
        if (a[i].first - a[i].second > last){
            last = a[i].first;
            dp[i] = 1;
        } else if (a[i].first + a[i].second < a[i + 1].first){
            last = a[i].first + a[i].second;
            dp[i] = 1;
        } else {
            last = a[i].first;
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++){
        ans += dp[i];
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