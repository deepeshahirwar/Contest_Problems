/***************************  deepesh7024 *********************************/ 

#include<bits/stdc++.h>
using namespace std; 

#define fastIO() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
 
/*************************** WElCOME **********************************************/
void deepesh7024(){
  ll n,k; 
  cin>>n>>k; 
  vector<ll> a(n), b(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  } 
  for(int i=0;i<n;i++){
    cin>>b[i];
  }  
   
  if(count(all(b), -1)  != n){
    int x; 
    for(int i=0; i<n; i++){
        if(b[i] != -1){
            x = a[i]+b[i];
            break;
        }
    } 
     
    for(int i=0; i<n;i++){
        if(b[i] != -1){
          if(a[i]+b[i] != x){
            cout<<0<<endl; 
            return;
          }
        }else{
            if( 0 > x-a[i] || x-a[i] > k){
                cout<<0<<endl; 
                return;
            }
        }
    } 

    cout<<1<<endl;
    return; 

  } 
  // case , where array a have  -1 for all elements 
  ll l =0, r = LLONG_MAX; 
  for(int i=0; i<n; i++){
    l = max(l, a[i]); 
    r = min(r,  a[i]+k);
  }
cout<<max(0LL, r-l+1)<<endl;
 
}  
 
int main() {
#ifndef ONLINE_JUDGE 
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout); 
   freopen("Error.txt", "w", stderr);
#endif 
    fastIO();  
   ll t; 
   cin>>t;  
   for(int i=0;i<t;i++){ deepesh7024();}  
    
    return 0;
}
