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
int main(){
	solve();
}
