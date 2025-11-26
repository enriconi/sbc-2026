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
  int n; cin >> n;
  vector<string> v(n), ans;
  unordered_set<string> st;
  for (int i = 0; i < n; i++) cin >> v[i];
  for (int i = n-1; i >= 0; i--) {
    if (st.find(v[i]) == st.end()) {
      st.insert(v[i]), ans.pb(v[i]);
    } 
  }
  for (string name : ans) cout << name << endl;
  return 0;
}