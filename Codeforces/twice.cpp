// codeforces round 988 div. 3 
// A. Twice 
#include<bits/stdc++.h>
using namespace std; 
void  deepesh7024(){
int n; 
cin>>n; 
vector<int>a(n);  
unordered_map<int,int>m;
for(int i=0; i<n; i++){
 cin>>a[i]; 
 m[a[i]]++;
}   
int score =0;
for(auto it : m){
    score += (it.second/2);
}

cout<<score<<endl;
}
int main(){
  int t; 
  cin>>t; 
  while(t--){
  deepesh7024();
  }
 return 0;
 }
