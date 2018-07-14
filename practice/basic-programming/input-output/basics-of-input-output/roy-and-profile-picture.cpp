#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int l, n;
  cin >> l >> n;

  while (n--) {
    int w, h;
    cin >> w >> h;

    if (w < l || h < l)
      cout << "UPLOAD ANOTHER";
    else if (w != h)
      cout << "CROP IT";
    else
      cout << "ACCEPTED";
    cout << endl;
  }

  return 0;
}

