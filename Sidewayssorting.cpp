
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
	

int r,c;
//reading testcases
while(cin>>r>>c && (r != 0 && c != 0)){
	char a[r][c];
	//input rows, columns
	for (int i = 0; i < r; ++i)
	{
		for(int j =0 ;j<c;j++){
			cin>>a[i][j];
		}
	}
	std::vector<string> v;
	//add charecter's as columns to a vector
	for(int i = 0;i<c;i++){
		string x = "";
		for(int j =0 ;j<r;j++){
			x += a[j][i];
		}
		v.pb(x);
	}
	string temp;
	// stable bubble sort, convert to lower as says in questions to ignore case
	for(int j = 0;j<v.size()-1;j++){
		for(int i =j+1;i<v.size();i++){
			string t1 = "", t2= "";
			for(int k=0;k<c;k++){
				t1 += tolower(v[j][k]);
				t2 += tolower(v[i][k]);
			}
			if(t1 > t2){
				swap(v[j], v[i]) ;
			}
		}
	}
	//outputing each row, as it's now sorted
	for (int i = 0; i < r; ++i)
	{
		for(int j = 0 ;j<c;j++){
			// need to get the i'th letter of each word and print
			cout<<v[j][i];
		}
		cout<<endl;
	}
	cout<<endl;

}
return 0 ;
}

