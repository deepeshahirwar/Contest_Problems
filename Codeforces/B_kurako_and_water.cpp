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

/*************** WELCOME *******************/
  void solution(){
      ll n; 
      cin>>n; 

      vector<vector<ll>>a(n,vector<ll>(n));

      for(ll i=0; i<n; ++i){
        for(ll j=0; j<n; ++j){
          cin>>a[i][j];
        }
      } 

   // main logic here 
   vector<ll>d(n*2-1,0); 
   for(ll i=0; i<n; ++i){
    for(ll j=0; j<n; ++j){
        d[i-j+n-1] = min(d[i-j+n-1], a[i][j]);
    }
  }  
 
 ll cnt =0; 
 for(ll i=0; i<d.size(); ++i){  
    if(d[i] < 0)
    cnt -= d[i];
  } 

   cout<<cnt<<endl;
  }
 int main() {
 #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 #endif  
fastio();    

   ll t; 
    cin>>t;  
   for(int i=0;i<t;i++){ 
    solution(); 
   } 

   return 0;
 }