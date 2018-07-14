#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> sol;

  for (int i = 2; i <= n; i++) {
    int c = 0;
    for (int j = 1; j <= i; j++) if (i % j == 0) c++;

    if (c == 2) sol.push_back(i);
  }

  n = sol.size();
  for (int i = 0; i < n; i++) {
    cout << sol[i];
    if (i < n - 1) cout << ' ';
  } cout << endl;

  return 0;
}
