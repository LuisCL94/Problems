#include <bits/stdc++.h>
using namespace std;

#define lf(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define lfi(i, v) for (auto(i) : (v))
#define len(a) (int)(a).size()

int main() {
  int N, C, M;

  cin>>N>>C>>M;

  set<int> lc, lm;

  lf(i, 0, C) {
    int n;
    cin>>n;
    lc.insert(n);
  }

  lf(i, 0, M) {
    int n;
    cin>>n;
    lm.insert(n);
  }

  int c=0;
  lfi(i, lm) {
    const bool isIn = lc.find(i) != lc.end();
    if(isIn) c++;
  }

  cout<<len(lc) - c<<endl;

  return 0;
}