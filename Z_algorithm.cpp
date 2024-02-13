#include <bits/stdc++.h>
 
#define ll long long  
#define py  cout<<"yes"<<'\n'
#define pn  cout<<"no"<<'\n'  
#define endl  "\n" 
using namespace std; 

 vector<int> z_function(string s) {
    int n = s.size();
    vector<int> z(n);
    int l = 0, r = 0;
    for(int i = 1; i < n; i++) {
        if(i < r) {
            z[i] = min(r - i, z[i - l]);
        }
        while(i + z[i] < n && s[z[i]] == s[i + z[i]]) {
            z[i]++;
        }
        if(i + z[i] > r) {
            l = i;
            r = i + z[i];
        }
    }
    return z;
} 

int main()
{
    string s;  cin>>s; 
    vector<int> ans =    z_function(s); 

  for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }

}