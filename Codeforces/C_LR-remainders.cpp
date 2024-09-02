/***************************  DEEPESH AHIRWAR *********************************/ 

#include<bits/stdc++.h>

using namespace std; 

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()  

#define sort(x) sort(x.begin(),x.end())
#define reverse(x) reverse(x.begin(),x.end())
#define py cout<<"YES"<<"\n"
#define pn cout<<"NO"<<"\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
/*************************** MY CP TAMPLATE END HERE *************************/
void solution(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    ll product = 1;
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        product *= a[i];
    } 
    string s; cin>>s; 

    if(n==1 && m==1){
        cout<<a[0]<<endl;
    }else{
    vector<ll> ans(n);

    ll i = 0;
    ll l=0, r=n-1;
    while (i < n) {
        ans[i] = (product % m);
        if (s[i]== 'L' ) {
            ll left = a[l++];
             product = product / left;
           
        } if (s[i] == 'R') {
            ll right = a[r--];
            product = product / right;
        }
        i++;
    }

    for (auto it : ans) {
        cout << it << " ";
    } 
    }
    cout << endl; 
    
}

int main() {
#ifndef ONLINE_JUDGE 
    freopen("Error1.txt", "w", stderr); 
#endif 
fastio();  

/********** YOUR CODE START HERE  ***********/
  
  ll t; cin>>t; 
  while(t--){ solution();} 

//  solution();

 return 0;
}
