#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    map<ll, ll> f;
    
    
    for (ll i = 0; i < n; ++i) {
        ll x;
        cin >> x;
        f[x]++;
    }
    
    ll s = 0, d = 0;
    
    
    for (auto it = f.begin(); it != f.end(); it++) {
        if (it->second == 1) {
            s++;
        } else {
            d++;
        }
    }
    

    ll ans = d + (s + 1) / 2;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
