#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;

  int i = 0;
  int n = s.size() - 1;
  bool valid = true;

  while (valid && i <= n / 2) {
    int m = n - i;
    if (s[i] != s[m]) valid = false;

    i++;
  }
  
  if (valid)
    cout << "YES";
  else
    cout << "NO";
  cout << endl;

  return 0;
}

