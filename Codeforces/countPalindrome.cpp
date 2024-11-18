// tcs2025 : count palindrome number for given range from m to n;  
// 0<= m,n<= 1000, 
// eg-> m=0, n= 12, palindrome nums  are : 0, 1,2,3,4,5,6,7,8,9,11
//output : 11 

#include<bits/stdc++.h>
using namespace std; 
// brute force appraoch
bool isPalindrome(string s){
    int l =0, r =s.size()-1; 
    while(l<=r){
        if(s[l++] != s[r--])return false;
    }
    return true;
} 
// opimize approach 
bool optimize(int n){
  // if n is 1 digit number 
  if(0<=n && n<=9){// always palindrome
    return true;
  } 
   if(n>9 && n<= 99){ // for 2 digit number
       return (n%10 == n/10);
   }
   if(n>99 && n<= 999){ // for 3 digit number
       return (n%10 == n/100);
   } 
   return false;
}
int main(){
 int m,n; 
 cin>>m>>n; 
  int ans =0;
  for(int i=m; i<=n; i++){
      //string s = to_string(i); 
      if(optimize(i))
      ans++;
      } 
      cout<<ans;
 return 0; 
 }
