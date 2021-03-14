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
//  kattis <Closest Sums> question
void solve(){
}
int main () {  
  ios_base::sync_with_stdio(0);cin.tie(0);
 int count = 1, n;
 while(cin>>n && n != 0){
	int a[n];
	for(int i = 0;i<n;++i){
		cin>>a[i];
	}
	int m ;cin>>m;
	// from each query find the two numbers which summed,
	// give the closest to q,get min abs(a[i] + a[j]) - query)
	int ans;
	cout<<"Case "<<count<<':'<<endl;
	for(int i =0 ;i<m;++i){
		int x;cin>>x;
	ans = INT_MAX;
		for(int j = 0 ;j<n;j++){
			for(int k = j+ 1;k<n;k++){
				if(abs((a[j] + a[k]) - x) < abs(x - ans)){
					ans = (a[j] + a[k]);
				}
			}
		}
		cout<<"Closest sum to "<<x<<" is "<<ans<<'.'<<endl;
	}
	count++;
}	

return 0;
}




