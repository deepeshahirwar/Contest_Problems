#include<bits/stdc++.h>
using namespace std; 
 
void solve(){
 int n; cin>>n; 
 string s; cin>>s;
 bool isSquare = false;  
 if(n < 2){
    cout<<"no"<<endl; 
    return;
 }
 for(int i= 1; i<=n; i++){
    if(i*i == n){
        isSquare = true;
        break;
    }
 } 

 if(isSquare){
    cout<<"yes"<<endl;
 }else{
    cout<<"no"<<endl;
 }
}
int main(){
    int t; 
    cin>>t; 
    while(t--){
    solve(); 
    }
 
return 0;
}