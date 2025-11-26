#include <bits/stdc++.h>

using namespace std;

#define dbg(x) cout << #x << " = " << x << endl
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define x first
#define y second
#define mp make_pair
#define pb push_back

typedef long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool cmp(int a, int b) { return a > b; }

int main() { _
  int n; cin >> n;
  while (n--) {
    int a; cin >> a;
    vector<int> v(a);
    int aux = 2;
    for (int i = 0; i < a; i++) v.pb(aux), aux *= 2;
    int sumVA = 0, sumVB = 0;
    sort(v.begin(), v.end(), cmp);
    int cB = 0;
    for (int i = 0; i < v.size()/2; i++) {
      if (sumVA > sumVB && cB < a/2) {
        sumVB += v[i];
        cB++;
      } else sumVA += v[i];
    }
    cout << (sumVA > sumVB ? sumVA - sumVB : sumVB - sumVA) << endl;
    aux = 2;
  }
  return 0;
}