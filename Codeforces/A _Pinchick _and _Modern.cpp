//A. Pinchick and Modern Mounument -> codeforces round 987  
// link -> https://codeforces.com/contest/2031/problem/A
#include<bits/stdc++.h>
using namespace std;
void deepesh7024(){
int n; 
cin>>n; 
vector<int>a(n);
map<int, int>m;
for(int i=0; i<n; i++){
 cin>>a[i]; 
 m[a[i]]++;
} 
int mxf = -1; 
for(auto it : m){
  if(mxf < it.second)
   mxf = it.second;
} 
int ans = n-mxf; 
cout<<ans<<"\n";
}
int main(){
 int t; 
 cin>>t; 
 while(t--){
 deepesh7024();
 }
 return 0; 
} 
// Accepted
