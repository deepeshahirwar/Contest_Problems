 
#include <bits/stdc++.h>
 
#define ll long long  
#define py  cout<<"yes"<<'\n'
#define pn  cout<<"no"<<'\n'  
#define line  '\n' 
using namespace std;

void solve(){
    ll n ,k;cin>>n>>k; 
    vector<int>a(n); 

    for(int i=1; i<=k; i++){
        cout<<i<<" ";
    }   

    if((k)%2==0){
        for(int i=k+1 ; i<=n; i++){//even first
            if(i%2 == 0){
                cout<<i<<" ";
            }
        } 

        for(int i=k+1 ; i<=n; i++){
            if(i%2 == 1){
                cout<<i<<" ";
            }
        }
    } 
    else{
       for(int i=k+1 ; i<=n; i++){//odd first
            if(i%2 == 1){
                cout<<i<<" ";
            }
        } 

         for(int i=k+1 ; i<=n; i++){
            if(i%2 == 0){
                cout<<i<<" ";
            }
        }   
   cout<<endl;

    }


  
}
int main() {
    ll t;
    cin >> t;
    while (t--) { solve();}
          
    return 0;
}
