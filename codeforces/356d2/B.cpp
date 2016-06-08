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

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, a;
	int t[101];
	int caught=0;

	cin >> n >> a;
	rep(i,n) {
		cin >> t[i];
	}
	
	--a;
	
	if(t[a])
		caught++;

	for(int d=1; d<n; ++d) {
		int cities=0;
		int criminals=0;
		if(a-d >= 0) {
			cities++;
			criminals += t[a-d];
		}
		if( a+d < n) {
			cities++;
			criminals += t[a+d];
		}

		if(cities == criminals) {
			caught += criminals;
		}

	}

	cout << caught << endl;
}

