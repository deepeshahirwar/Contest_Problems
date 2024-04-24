#include<bits/stdc++.h>
using namespace std; 
 

void solve(){
  string s; 
   int ans =0;
   for(int i=0; i<21; i++){
    cin>>s; 
     int ones =0, zeros =0; 

     for(int j=0; j<21; j++){
        if(s[j] == '1')ones++; 
        else zeros++;
     } 

     if(ones >= 11)
     ans++;
   }
   cout<<ans;
} 

int main(){
  solve();
 
return 0;
}