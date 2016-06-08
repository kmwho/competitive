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

void solve() {
	int a[5];
	int sum=0,ans;
	map<int,int> mp;

	rep(i,5) {
		cin >> a[i];
		sum += a[i];
		mp[ a[i] ] = mp[ a[i] ] + 1;
	}
	
	ans = sum;
	for( auto it=mp.begin(); it != mp.end(); ++it ) {
		if( it->second > 2 ) {
			ans = std::min(ans, sum - 3*(it->first) );
		} else if( it->second > 1 ) {
			ans = std::min(ans, sum - 2*(it->first) );
		}
	}

	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	solve();
}

