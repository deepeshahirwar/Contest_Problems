 
#include <bits/stdc++.h>
 
#define ll long long  
#define py  cout<<"yes"<<'\n'
#define pn  cout<<"no"<<'\n'  
#define line  '\n' 
using namespace std;

void solve(){
  int n ;cin>>n; 
    vector<int>a(n+1),b(n+1); 
    for(int i=0; i<(n+n); i++){
        cin>>( i<n ? a[i] : b[a[i-n]]);  
    }
      

         sort(a.begin(), a.end());
       

        // Output the sorted permutations
        for (auto it : a) {
            if(it != 0){
              cout<<it<<" ";  
            } 
            
        }
        cout << endl;

        for (auto it : b) {
            if(it != 0){
              cout<<it<<" ";  
            } 
        }
        cout << endl;

}
int main() {
    ll t;
    cin >> t;
    while (t--) { solve();}
          
    return 0;
}
