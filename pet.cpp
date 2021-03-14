#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FOR(i,a,b) for(int i = a;i<b;i++)
#define INF (unsigned)!((int)0)
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define endl "\n"
const int NIL = -1; typedef pair<int, int> pii; typedef pair<ll, ll> pl;
typedef vector<int> vi; typedef vector<ll> vl; typedef vector<pii> vpii;
typedef vector<pl> vpl; typedef vector<vi> vvi; typedef vector<vl> vvl;
//  kattis <pet> question
void solve(){

}
int main () {  
  ios_base::sync_with_stdio(0);cin.tie(0);
  int ans = INT_MIN;
  int ind = 1 ;
  for(int i =0 ;i<5;i++){
	  int sum =0 ;
	  for(int j= 0 ;j<4;j++){
		  int x; cin>>x;
		  sum+=x;
	  }
	if(sum > ans){
		ans = sum;
		ind = i + 1;
	}
  }
  cout<<ind<<' '<<ans;

return 0;
}




