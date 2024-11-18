/***************************  DEEPESH AHIRWAR *********************************/ 

#include<bits/stdc++.h>
#include <fstream>

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

#define sort_all(x) sort(x.begin(),x.end())
#define reverse_all(x) reverse(x.begin(),x.end())
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
bool cheak(vector<int> &a){
    set<int>st;
    st.insert(a[0]);
    for(int i=1; i<a.size(); i++){
        int c = a[i];
        // if not found current element adjecent to it
        if(st.count(c-1)==0 && st.count(c+1)==0){
            return false;
        }
        st.insert(c);
    }  
    return true;
}
void solution(){
  int n;
  cin>>n; 
  vector<int>a(n);
  for(int i=0; i<n; i++){
    cin>>a[i];
  } 

  if(cheak(a)){
    py;
  }else{
    pn;
  }
  

} 

int main() {
#ifndef ONLINE_JUDGE 
    freopen("Error1.txt", "w", stderr); 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 
    fastio();  

    /********** YOUR CODE START HERE  ***********/
    
    ll t; 
    cin >> t; 
    while(t--) { 
        solution(); 
    } 
    //solution();

    return 0;
}