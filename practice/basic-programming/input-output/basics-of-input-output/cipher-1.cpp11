#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;

  int k;
  cin >> k;

  function<bool(int)> alphaUpper = [](int x) {
    return 64 < x && x < 91;
  };

  function<bool(int)> alphaLower = [](int x) {
    return  96 < x && x < 123;
  };

  function<bool(int)> numeric = [](int x) {
    return 47 < x && x < 58;
  };

  function<bool(int)> special = [&](int x) {
    return !(alphaLower(x) || alphaUpper(x) || numeric(x));
  };

  int n = s.size();
  for (int i = 0; i < n; i++) {
    int x = s[i];
    int c;
    if (alphaUpper(x)) {
      c = x + (k % 26);
      if (c > 90) c = 65 + (c - 91);
    }
    else if (alphaLower(x)) {
      c = x + (k % 26);
      if (c > 122) c = 97 + (c - 123);
    }
    else if (numeric(x)) {
      c = x + (k % 10);
      if (c > 57) c = 48 + (c - 58);
    }
    else if (special(x))
      c = x;

    s[i] = c;
  }

  cout << s << endl;

  return 0;
}

