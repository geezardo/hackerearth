#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  ll ans = 1;
  while (n--) {
    int x;
    cin >> x;

    ans = (ans * x) % 1000000007;
  }

  cout << ans << endl;

  return 0;
}

