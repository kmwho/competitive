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
// Codeforces 353 D2

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a,b,c,d,n;
	int cnt[4];
	int maxcnt, mincnt;
	ll ans=0;

	cin >> n >> a >> b >> c >> d;
	
	for(int x3=1; x3 <=n; ++x3) {
		cnt[0] = a + b + x3;
		cnt[1] = b + d + x3;
		cnt[2] = d + c + x3;
		cnt[3] = c + a + x3;
		maxcnt = *std::max_element(cnt, cnt+4);
		mincnt = *std::min_element(cnt, cnt+4);
		if( maxcnt-mincnt < n ) {
			ans += n - (maxcnt - mincnt);
		}
	}

	cout << ans;

}

