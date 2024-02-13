#include <bits/stdc++.h> 

using namespace std;

void solve(){ 
    int n; cin>>n; 
    vector<int>a(n); 
    for(int i=0; i<n; i++){
        cin>>a[i];
    } 

    string result = "";
    vector<int> count(26, 0);
     
     for(int i=0; i<n; i++){
        int x = a[i]; 
        for(char ch = 'a'; ch <= 'z'; ch++){
            int idx = ch - 'a'; 
            if(count[idx] == x){
                result += ch;  
                count[idx]++;
                break;
            }
        }
     }
   
  cout<<result<<endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
