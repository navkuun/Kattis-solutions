
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
const int NIL = -1;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int main () { 
  ios_base::sync_with_stdio(0);cin.tie(0);
 
  int n , t; cin>>n>>t;
  if(t == 1){
  	std::vector<int> v;
  	for (int i = 0; i < n; ++i)
  	{
  		int x; cin>>x;
  		v.pb(x);
  	}
  	v.erase( unique( v.begin(), v.end() ), v.end() );
  	int l = 0 , r = v.size() - 1;
  	sort(v.begin(), v.end());

  	for(int i =0 ;i<v.size();i++){
  		if(v[l] + v[r] < 7777){
  			l++;
  		}else if(v[l] + v[r] > 7777){
  			r--;
  		}else{
  			cout<<"Yes";
  			return 0 ;
  		}
  	}
  	cout<<"No";
  }else if(t == 2){
  	set<int> se;
  	for (int i = 0; i < n; ++i)
  	{
  		int x; cin>>x;
  		se.insert(x);
  	}
  	if(se.size() == n){
  		cout<<"Unique";
  	}else{
  		cout<<"Contains duplicate";
  	}
  }else if( t == 3){
  	int r = n / 2;
  	int a[n];
  	for (int i = 0; i < n; ++i)
  	{
  		cin>>a[i];
  	}
  	sort(a, a +n);
  	int ans = 1; 
  	for (int i = 0; i < n-1; ++i)
  	{
  		if(a[i] == a[i+1]){
  			ans++;
  			if(ans > r){
  				cout<<a[i];
  				return 0 ;
  			}
  		}else{
  			ans = 1;
  		}
  	}
  	cout<<-1;
  }else if( t== 4){
  	int a[n];
  	for (int i = 0; i < n; ++i)
  	{
  		cin>>a[i];
  	}
  	sort(a, a + n);

  	if(n % 2 == 0){
  		cout<<a[n/2 - 1]<<" "<<a[n/2];
  		return 0 ;
  	}else{
  		cout<<a[n/2];
  		return 0 ;
  	}

  }else if(t == 5){
  	vector<int> v; 
  	for (int i = 0; i < n; ++i)
  	{
  		int x; cin>>x;
  		if( x >= 100 && x <= 999){
  			v.pb(x);
  		}
  	}
  	sort(v.begin(), v.end());
  	for(int x : v){
  		cout<<x<<" ";
  	}
  }


return 0 ;
}

