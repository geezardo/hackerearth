#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int l, r, k;
  cin >> l >> r >> k;

  int ans = 0;
  for (int i = l; i <= r; i++) if (i % k == 0) ans++;

  cout << ans << endl;

  return 0;
}

