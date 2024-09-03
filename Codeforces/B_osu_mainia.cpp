#include<bits/stdc++.h>
using namespace std; 
 
void solve(){ 
    int n; cin>>n; 
    vector<int>ans;
   for(int i=0; i<n; i++){
     string s; 
     cin>>s; 
     for(int j =0; j<4; j++){
      if(s[j] == '#'){
        ans.push_back(j+1);
      }
     }
   } 
    // last to first
    reverse(ans.begin(), ans.end());
    for(auto it : ans){
        cout<<it << " ";
    }
    cout<<endl;
}
int main(){ 
    int t; cin>>t; 
    while(t--){
  solve();
    }
return 0;
}