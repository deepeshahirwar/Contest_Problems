// codeforces round 988 div. 3 
// B.intercepted input
#include<bits/stdc++.h>
using namespace std; 
void  deepesh7024(){
int n; 
cin>>n; 
vector<int>a(n);  
unordered_map<int, int>m; 
int val = n-2; 
for(int i=0; i<n; i++){
 cin>>a[i]; 
} 

for(int i=0; i<n; i++){
    if(val%a[i] == 0 and m[val/a[i]]){
        cout<<a[i]<<" "<<val/a[i]<<endl;
        return;
    }
    m[a[i]]++;
}

}
int main(){
  int t; 
  cin>>t; 
  while(t--){
  deepesh7024();
  }
 return 0;
 }
