#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int MAX = 200007;
const int MOD = 1000000007;

void solve() {
	ll n, d;
	ll c;
	cin >> n >> c >> d;
	ll a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, greater<ll>());
	int l = 0, r = d + 2;
	while (l < r) {
		int m = l + (r - l + 1) / 2;
		ll tot = 0;
		int curr = 0;
		for (int i = 0; i < d; i++) {
			if (i % m < n) {tot += a[i % m];}
		}
		if (tot >= c) {
			l = m;
		}
		else {
			r = m - 1;
		}
	}
	if (l == d + 2) {cout << "Infinity\n"; return;}
	if (l == 0) {cout << "Impossible\n"; return;}
	cout << l - 1 << '\n';
}
int main ()

{
op();
  ll t;
  cin>>t;
  while (t--)
  {
    solve();
  }
  


    return 0;
}