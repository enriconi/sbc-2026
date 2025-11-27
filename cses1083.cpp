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

bool cmp(int a, int b) { return a < b; }

int main() { _
  int n, ans; cin >> n;
  vector<int> v(n-1);
  for (int i = 0; i < n-1; i++) cin >> v[i];
  sort(v.begin(), v.end(), cmp);
  for (int i = 1; i <= n; i++) {
    if (v[i-1] != i) {
      ans = i;
      cout << ans << endl;
      return 0;
    }
  }
  return 0;
}