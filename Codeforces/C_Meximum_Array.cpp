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
      vector<ll>a(n),ans; 
      unordered_map<ll,ll>mp;
       for(int i=0; i<n; i++){
        cin>>a[i]; 
        mp[a[i]]++;
       } 
      set<int>st; 
      int mex=0; 
      for(int i=0; i<n; i++){
           mp[a[i]]--;  
           // finding MEX
           st.insert(a[i]);
           while(st.count(mex)){
            mex++;
           }

           if(mp[mex] == 0){ // it mean no more x is present in the array
              st.clear(); 
              ans.pb(mex); 
              mex =0;
           }
      }  
      // print the answer
      cout<<ans.size()<<endl;
    for(auto it: ans){
        cout<<it<<" ";
    } 
    cout<<endl;

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