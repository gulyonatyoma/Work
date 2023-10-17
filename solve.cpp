#include <bits/stdc++.h>
using namespace std;
#define ll long long
void slv(){
    queue<ll> q;
    ll n; cin >> n;
    for (ll i = 0; i < n; i++){
        char c; cin >> c;
        if (c == '-'){
            cout << q.front() << '\n';
            q.pop();
        } else if (c == '+'){
            ll x; cin >> x;
            q.push(x);
        } else {
            ll x; cin >> x;
            queue<ll> p;
            for (ll i = 0; i < q.size() / 2; i++) p.push(q.front()), q.pop();
            p.push(x);
            for (ll i = q.size() / 2; i < q.size(); i++) p.push(q.front()), q.pop();
            q = p;
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    while(t--){
        slv();
        cout << '\n';
    }
    return 0;
}