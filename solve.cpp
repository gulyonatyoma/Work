#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s; getline(cin, s);
    string ss = "";
    for (auto& it : s){
        if (it != ' ') ss += it;
    }
    ll ans = 0;
    stack<ll> q;
    for (auto& it : ss) {
        if (it != '+' && it != '-' && it != '*') {
            q.push(int(it - '0'));
        } else {
            if (it == '+'){
                ll cur = 0;
                while(!q.empty()){
                    cur += q.top();
                    q.pop();
                }
                q.push(cur);
            } else if (it == '-'){
                ll cur = q.top();
                q.pop();
                while(!q.empty()){
                    cur -= q.top();
                    q.pop();
                }
                cur = -cur;
                q.push(cur);
            } else {
                ll cur = q.top();
                q.pop();
                while(!q.empty()){
                    cur *= q.top();
                    q.pop();
                }
                q.push(cur);
            }
        }
    }
    cout << q.top();
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