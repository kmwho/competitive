#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <map>
#include <cassert>
#include <cstring>

#define rep(i,n) for(int i=0; i< (n); ++i)
#define fori(i,st,en) for(int i=(st); i<(en); ++i)
#define ford(i,st,en) for(int i=(st); i>(en); --i)
#define mp(x,y) make_pair((x), (y))
#define all(v) v.begin(), v.end()
#define sfi(n) scanf("%d", &n)
#define pb(x) push_back(x)
#define Fi first
#define Se second

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector< pi > vpi;

// kmwho
// Codeforces 356 D2

constexpr ll maxm=1e15 + 10;

// Map [m] -> pair(cubes,X)
map<ll, pair<int,ll> > dp;

ll cube(ll x) {
	return x*x*x;
}

ll cubeRoot(ll x) {
	ll low  = 1;
	ll high = 100100;
	ll mid;
	
	while( (high-low)>1 ) {
		mid = (low+high)/2;
		if ( cube(mid) <= x ) {
			low = mid;
		} else {
			high = mid;
		}
	}

	return low;
}

pair<int,ll> step(ll m) {
	if (m <=7)
		return std::make_pair(m,m);
	if ( dp.find(m) != dp.end() )
		return dp[m];

	int crm = cubeRoot(m);
	ll    C = cube(crm);

	pair<int,ll> res1 = step( m - C );
	pair<int,ll> res2 = step( C - 1 );

	dp[m]    = std::max( mp(res1.Fi+1, res1.Se+C), res2 );
	return dp[m];
}

void solve() {
	ll m;
	cin >> m;
	pair<int,ll> res = step(m);

	cout << res.first << " " << res.second;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	solve();
}

