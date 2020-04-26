/*
 * https://github.com/luciocf/Problems/blob/master/CEOI/CEOI%202010/tower.cpp
*/
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#include <bits/stdc++.h>
using namespace std;
#define sqr 547
#define mp make_pair
#define mid (l+r)/2
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define era erase
#define C continue
#define mem(dp,i) memset(dp,i,sizeof(dp))
#define mset multiset
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef short int si;
typedef long double ld;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;
typedef vector<pll> vpll;
const ll inf=1e18;
const ll mod=1e9+9;
const ld pai=acos(-1);
ll n , d ;
ll a[1000009] ;
int main () {
	scanf("%lld%lld",&n,&d);
	for ( int i = 1 ; i <= n ; i ++ ) scanf("%lld",&a[i]) ;
	sort ( a+1 , a + n+1 ) ;
	ll ans = 1 , it =1 ;
	for ( int i = 1 ; i <= n ; i ++ ) {
		while ( it < i  && a[i] > a[it] + d ) it ++ ;
		ans = ( ans * ( ( i - it + 1 ) % mod ) ) % mod ;
	}
	printf("%lld\n",ans);
}
