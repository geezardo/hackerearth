#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define mp(x, y) make_pair(x, y)
typedef pair<int, char> pic;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  map<int, pic> seats;
  seats[1] = mp(11, 'W'); seats[12] = mp(-11, 'W');
  seats[6] = mp(1, 'W'); seats[7] = mp(-1, 'W');
  seats[3] = mp(7, 'A'); seats[10] = mp(-7, 'A');
  seats[4] = mp(5, 'A'); seats[9] = mp(-5, 'A');
  seats[2] = mp(9, 'M'); seats[11] = mp(-9, 'M');
  seats[5] = mp(3, 'M'); seats[8] = mp(-3, 'M');

  while (t--) {
    int n;
    cin >> n;

    int m = n % 12;
    m = m == 0 ? 12 : m;

    pic x = seats[m];
    printf("%d %cS\n", (n + x.first), x.second);
  }

  return 0;
}

