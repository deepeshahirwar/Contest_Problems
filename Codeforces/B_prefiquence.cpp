#include<bits/stdc++.h>
using namespace std; 
 
void solve(){
int n,m; 
  cin>>n>>m; 
 string a,b; 
 cin>>a>>b; 


  int i =0, j=0;
 while(i<n && j <m){
    if(a[i] == b[j]){
        i++; 
        j++;
       
    }else{
        j++;
       
    }      
     
 } 

 cout<<i<<endl;
}
int main(){ 
    int t; 
    cin>>t; 
    while(t--){
      solve(); 
    }
 
return 0;
}