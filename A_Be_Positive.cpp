#include <bits/stdc++.h>
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int zero = 0, neg = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x == 0)        zero++;
      else if (x == -1)  neg++;
    }
    int res = zero;
    if (neg & 1)   res += 2;
    cout << res << "\n";
  }
  return 0;
}