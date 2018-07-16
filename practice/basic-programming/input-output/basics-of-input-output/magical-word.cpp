#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  vector<int> primes;
  vector<bool> p (123, true);
  for (int i = 2; i * i <= 122; i++) {
    if (p[i]) {
      for (int j = i * 2; j <= 122; j += i) p[j] = false;
    }
  }

  for (int i = 65; i <= 122; i++) {
    if (p[i]) primes.push_back(i);
  }

  int m = primes.size();
  function<int(int)> magic = [&p, &primes, m](int x) {
    if (x < primes[0])
      return primes[0];
    else if (x > primes[m - 1])
      return primes[m - 1];
    else {
      if (p[x])
        return x;
      else if (89 < x && x < 94)
        return 89;
      else if (93 < x && x < 99)
        return 97;
      else {
        int l = x;
        while (!p[l]) l--;
        int r = x;
        while (!p[r]) r++;

        return (r - x) < (x - l) ? r : l;
      }
    }
  };

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
      s[i] = (char) magic((int) s[i]);

    cout << s << endl;
  }

  return 0;
}

