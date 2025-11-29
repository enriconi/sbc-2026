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

int main() { _
  ll n, ans = 0; cin >> n;
  vector<ll> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  for (int i = 1; i < n; i++) {
    if (v[i-1] > v[i]) {
      ans += v[i-1] - v[i];
      v[i] = v[i] + v[i-1] - v[i];
    }
  }
  cout << ans << endl;
  return 0;
}