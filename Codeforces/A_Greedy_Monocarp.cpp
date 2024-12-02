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
      ll n,k; 
      cin>>n>>k; 
      vector<ll>a(n); 
      
      for(int i=0; i<n; i++){
        cin>>a[i];
      } 
      sort(a.rbegin(), a.rend()); 
     vector<int>pr(n); 
     pr[0] = a[0]; 
     for(int i=1; i<n; i++){
            pr[i] = pr[i-1]+a[i];
     }  
     ll sum =0;
      for(int i=0; i<n; i++){
            if(pr[i] <= k){
              sum = pr[i];
            }else{
              break;
            }
     } 
   cout<<k-sum<<endl;
     
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