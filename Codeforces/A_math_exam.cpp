#include<bits/stdc++.h>
using namespace std; 
 
void solve(){
   int a, b; 
   cin>>a>>b; 
   if(a%2 == 1 || a == 0 && b%2 == 1){
    cout<<"no"<<endl;
   } 
   else{
    cout<<"yes"<<endl;
   }
}
int main(){ 
    int t; cin>>t; 
    while(t--){
  solve(); 
    }
 
return 0;
}