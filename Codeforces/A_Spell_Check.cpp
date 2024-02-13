 
#include <iostream>
#include <vector>
#include <algorithm> 
#define ll long long  
#define py  cout<<"yes"<<'\n'
#define pn  cout<<"no"<<'\n'  
#define line  '\n' 
using namespace std;

void solve(){
    ll n ;cin>>n; 
    string s; cin>>s;  
    
     sort(s.begin() , s.end());
    if( s == "Timru") 
        {
            cout<<"yes"<<'\n'; 
        } 
        else{
            cout<<"no"<<'\n';
        }
  
}
int main() {
    ll t;
    cin >> t;
    while (t--) { solve();}
          
    return 0;
}
