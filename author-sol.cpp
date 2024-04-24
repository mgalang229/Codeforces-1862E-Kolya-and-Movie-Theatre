#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void test_case(int& tc) {
	int n, m, d;
	cin >> n >> m >> d;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll ans = 0, sum = 0;
	set<pair<int, int>> s;
	for (int i = 0; i < n; i++) {
		ll cur = sum + a[i] - d * 1LL * (i + 1);
		ans = max(ans, cur);
		if (a[i] > 0) {
			s.insert({a[i], i});
			sum += a[i];
			if (s.size() >= m) {
				sum -= (s.begin()->first);
				s.erase(s.begin());
			}
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
