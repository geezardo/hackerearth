#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, q;
  cin >> n >> q;

  ll sum[n + 1];
  sum[0] = 0;

  for (int i = 1; i <= n; i++) {
    ll x;
    cin >> x;

    sum[i] = x + sum[i - 1];
  }

  while (q--) {
    int l, r;
    cin >> l >> r;

    ll ans = sum[r] - sum[l - 1];
    cout << (ans / (r - l + 1)) << endl;
  }

  return 0;
}

