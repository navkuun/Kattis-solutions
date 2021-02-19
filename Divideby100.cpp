
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define FOR(i,a,b) for(int i = a;i<b;i++)
#define INF (unsigned)!((int)0)
#define mp make_pair
#define pb push_back
#define f first
#define s second
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
	
	// Big 1D char array processing 
  	string n , m; cin>>n>>m;
  	// jsut count the number of zero's from
  	// then place the deicmal point d + 1 ,  in first
  	// then check if 
  	int z = m.length()  - 1; 
  	int d = n.length() -  z;  // dec point
  	// if same length then add one dec point at front
  	if(m == "1")	{
  		cout<<n;
  	}else if( z >= n.length() ) {
  	 // org len - z leng =   0.023353	
  	// 5676 / 100000 == 0.056756
  		int len  = m.length() -  n.length()	;
  		for(int i = 0 ;i<len;i++)
  		{
  			n.insert(n.begin() , '0');
  		}
  		n.insert(n.begin() + 1, '.');
  		cout<<n;

  	}else{
  		n.insert(n.begin() + d , '.')	;
  		for(int i = n.length() -1 ;i>=0;i--){
  			if(n[i] == '0'){
  				n.erase(n.begin() + n.length() - 1 );
  			}else{
  				break;
  			}
  		}
  		int r = n.length() - 1;
  		if(n[r] == '.'){
  			n.erase(n.begin()  + n.length() - 1);
  		}else if(n[0] == '.'){
  			n.insert(n.begin(),'0');
  		}
  		cout<<n;
  	}

return 0 ;
}

