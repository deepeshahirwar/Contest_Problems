/******************** DEEPESH AHIRWAR ***********************/
#include<bits/stdc++.h> 
 #include <fstream> 
 using namespace std; 

 #define fastio() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
 #define MOD 1000000007

 
 #define endl "\n"
 #define pb push_back
 #define ppb pop_back
 #define mp make_pair
 #define ff first
 #define ss second
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
 
#ifdef deepesh7024
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
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



/*************** WELCOME *******************/
  void solution(){
   //     int n; 
   //    cin>>n; 
   //    vector<int>p(n); 
   //    for(int i=0; i<n; i++){
   //      cin>>p[i];
   //    }  
   //    // it's always gives yes
   //    if(n <= 2){
   //      py;
   //      return;
   //    }  
       
   //    for(int i=0; i<n-1; i++){
   //  // when | pi - pi+1 | == 1 and both values is not in right place
   //       if(abs(p[i+1]-p[i])==1 && p[i] != i+1 && p[i+1] != i+2){
   //          swap(p[i],p[i+1]);
   //       }
   //    } 
   //   // checking increasing permutation
   //   for(int i=0; i<n; i++){
   //      if(p[i] != i+1){
   //          pn;
   //          return;
   //      }
   //   }
   //   py; 
   vector<int>v={1,3,4,5,6}; 

     debug(p);
  } 

 int main() {
 #ifndef deepesh7024
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
 #endif  
fastio();    

   ll t; 
   cin>>t;  
   for(int i=0;i<t;i++){ 
    solution(); 
   } 

   return 0;
 } 
