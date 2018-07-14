#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;

  int n = s.size();
  for (int i = 0; i < n; i++) {
    int c = s[i];
    if (64 < c && c < 91)
      c += 32;
    else
      c -= 32;
    s[i] = c;
  }

  cout << s << endl;

  return 0;
}

