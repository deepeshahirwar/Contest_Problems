#include<bits/stdc++.h>
using namespace std; 
 
void solve(){
 int a,b;
 cin>>a>>b; 
 int avg = (a+b)/2; 
 int ans  = (avg-a)+(b-avg); 
 cout<<ans<<endl;
}
int main(){ 
    int t; 
    cin>>t; 
    while(t--){
  solve();
    }
return 0;
}