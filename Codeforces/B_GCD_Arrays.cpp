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
      ll l,r,k; 
      cin>>l>>r>>k;  
      // base case
      if(l == r && l == 1){
         pn;
        return;
      } 
      if(l == r && l != 1){
        py;
        return;
      } 
     // counting odds from range  l to r
    if(l%2 == 0)l++;
    if(r%2 == 0)r--;
    ll len = (r-l+1);
    ll odds = (len+1)/2; 
  // main logic : if odds is less than or equal to the k , then yes , else no
     if(odds <= k)
     py;
     else
     pn;

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