#include <bits/stdc++.h>
using namespace std;

#define lf(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define lfi(i, v) for (auto(i) : (v))
#define len(a) (int)(a).size()

int main() {
  vector<int> B;
  int num, c=8;

  while(c--) {
    cin>>num;
    B.push_back(num);
  }

  map<int, int> m;
  lfi(i, B)
   ++m[i];

  int mx = 0;

  lf(i, 0, 8)
   if(mx < m[B[i]])
      mx = m[B[i]];

  if (mx > (8 + 1) / 2)
    cout << "N" << endl;
  else
    cout << "S" << endl;

  return 0;
}