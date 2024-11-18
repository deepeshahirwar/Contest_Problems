#include<bits/stdc++.h> 
using namespace std;
void solve(){
 int n,a,b; 
 cin>>n>>a>>b;
 string s; 
 cin>>s;  
 int x=0,y=0; 
 bool ok = false; 
 for(int j = 1; j<=100; j++){
 for(int i=0; i<n; i++){
   if(a == x && b == y){
    ok = true; 
    break;
   }
   if(s[i] == 'N')y++;
   else if(s[i] == 'E')x++; 
   else if(s[i] == 'S')y--; 
    else if(s[i] == 'W')x--;
}
}
 if(ok)
 cout<<"YES"<<endl; 
 else
 cout<<"NO"<<endl;
 
 
}
int main(){
int t; 
cin>>t; 
while(t--){solve();};
return 0;
}
