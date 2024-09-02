 



#include <iostream>
#include <vector>
#include <algorithm> 
#define ll long long 
using namespace std; 
bool isVowel(char ch) {
    ch = tolower(ch); 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int main() {
    ll t;
    cin >> t;

    while (t--) { 
        ll n ; cin>>n; 
        string s; 
        cin>>s;   

        string ans ="";  
        ll i =0;
       while(i<n){
            if(!isVowel(s[i]) && isVowel(s[i+1])){
                ans += s[i]; 
                ans += s[i+1]; 
                ans += '.'; 
                 i +=2;
            } 
             if(!isVowel(s[i]) && isVowel(s[i+1]) && !isVowel(s[i+2])){
                ans += s[i]; 
                ans += s[i+1];
                ans += s[i+2]; 
                ans += '.'; 

                 i +=3;
            } 
           i++;
        }
  

  cout<<ans<<endl;


       
    }

    return 0;
}
