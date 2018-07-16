#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    string a, b;
    cin >> a >> b;

    int n = a.size(), m = b.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++)
        if (a[i] == b[j]) {
          count++;
          b[j] = '0';
          break;
        }
    }

    int ans = n + m - (2 * count);
    cout << ans << endl;
  }

  return 0;
}

