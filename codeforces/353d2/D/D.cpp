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
	
	constexpr int maxa=1000100100;
	set<pi> S;
	set<pi>::iterator lb,ub,pele;
	int n,ai;
	
	cin >> n;

	cin >> ai;
	S.insert( mp(ai,0) );
	S.insert( mp(maxa+10, -1) ); // Add left and right bounds
	S.insert( mp(     -1, -1) ); // Add left and right bounds

	pi ele;

	for(int i=1; i<n; ++i) {
		cin >> ai;
		ele = mp( ai, i );
		lb = --S.lower_bound( ele );
		ub = S.upper_bound( ele );
		
		pele = ( lb->second > ub->second ) ? lb : ub;
		cout << pele->first << " ";
		S.insert( mp( ai, 1 + pele->second) );
	}

}

