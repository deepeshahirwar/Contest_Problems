#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    if (sum %n != 0){
      cout<<"NO"<<endl;  
      return;
    } 
     
     int avg = sum/n; 

     for(int i=0;i<n-2;i++){
        if(a[i] > avg){
            int diff = a[i]-avg;
            a[i] -= diff; 
            a[i+2] +=diff;
        } 
       else if(a[i] < avg){ 
            int diff = avg-a[i];
            a[i] += diff; 
            a[i+2] -=diff;
        } 

     } 

     unordered_set<int>st;  
     for(auto it : a)st.insert(it); 

     if(st.size() == 1){
        cout<<"YES"<<endl;
     } 
     else{
        cout<<"NO"<<endl;
     }

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}