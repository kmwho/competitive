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
	int n, tmp;
	ll partial;
	map<ll,int> psums;
	vi a;

	cin >> n;
	a.reserve(n);
	rep(i,n) {
		cin >> tmp;
		a.pb(tmp);
	}

	partial = 0;
	rep(i,n) {
		partial += a[i];
		
		if( psums.count(partial) == 0 ) {
			psums[ partial ] = 0;
		}
		psums[ partial ] += 1;
		
	}

	int ans  = n-1;
	int ansi;
	for( auto it : psums ) {
		partial = it.first;
		ansi    = n - (it.second);
		ans = ans < ansi ? ans : ansi;
	}

	cout << ans;
}

