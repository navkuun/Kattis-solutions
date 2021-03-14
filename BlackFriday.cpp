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
//  kattis <blackfriday> question
void solve(){
}
int main () {  
  ios_base::sync_with_stdio(0);cin.tie(0);
	int n; cin>>n;
	int ans = -1 ;
	int ind = -1;
	int a[n];
	for(int i =0; i<n;++i){
		cin>>a[i];
	}
	bool sol; int temp;
	for(int i =0 ;i<n;i++){
		sol = true;
		temp = a[i];
		a[i] = 103;
		for(int j = 0;j<n;++j){
			if(temp == a[j]){
				sol = false;
				continue;
			}
		}
		a[i] = temp;
		if(sol){
			if(a[i] > ans){
				ans = a[i];
				ind = i+1;
			}
		}
	}

	if(ans != -1)cout<<ind;
	else cout<<"none";
return 0;
}




