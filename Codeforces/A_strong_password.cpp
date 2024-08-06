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
void solution(){
  string s; 
  cin>>s;   
  
  vector<int>count(26, 0); 

  int n = s.size(); 
  if(n== 1){
    s += s[0]+1; 
    reverse_all(s);
    cout<<s<<endl;
    return;
  } 

  for(int i=0; i<n; i++){
    count[s[i]-'a']++;
  }  
      int idx1 =0, idx2 =0;
  for(int i=n-1; i>0; i--){
    if(s[i] == s[i-1]){  
      idx1 = i;   
      idx2 = i-1;  
      break;    
    } 

  }  

  char ch = s[idx1-1]; 
  for(int i=0; i<26; i++){
      if(count[i] == 0){
          ch = 'a' + i;
          break;
      }
  }

  string ans =""; 
  for(int i=0; i<idx1; i++){
    ans += s[i];
  }  
  ans += ch;

  for(int i=idx1; i<n; i++){
    ans += s[i];   
    } 

     cout<<ans<<endl;



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
