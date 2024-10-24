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
int init(vector<int>&a, int n){
    unordered_map<int,int>mp; 
    int ps =0; 
    int cnt=0; 
    int lastS = -1; 
     
     mp[0]=-1;  
      
      for(int i=0; i<n; i++){
        ps += a[i]; 
        if(mp.find(ps) != mp.end()){
            int prevIdx = mp[ps];
            if(prevIdx >= lastS){
                cnt++;
                lastS = i;
            }
        }  
        mp[ps] = i;
      } 
  return cnt;

}
  void solution(){
      ll n; 
      cin>>n; 
      vector<int>a(n); 
      for(ll i=0; i<n; i++)cin>>a[i]; 
       
       ll ans = init(a,n); 
       cout<<ans<<endl;

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