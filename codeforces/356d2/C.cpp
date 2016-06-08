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

constexpr int primes50[] = { 11,13,17,19,23,29,31,37,41,43,47 };
constexpr int primes10[] = { 2,3,5,7 };

bool solve() {
	char resp[5];
	int pf=0;

	rep(i,4) {
		cout << primes10[i] << endl;
		cin >> resp;
		if(resp[0] == 'y') {
			if(pf != 0)
				return false;
			pf = primes10[i];
		}
	}
	if( pf == 0 ) {
		return true;
	}

	cout << pf*pf << endl;
	cin >> resp;

	if(resp[0] == 'y')
		return false;
	rep(i, 11) {
		
		cout << primes50[i] << endl;
		cin >> resp;

		if(resp[0] == 'y')
			return false;
	}

	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	bool isPrime;
	isPrime = solve();

	if(isPrime)
		cout << "prime" << endl;
	else
		cout << "composite" << endl;
}

