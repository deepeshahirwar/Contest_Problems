#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

void solution() {
    int n; 
    cin >> n; 

    vector<int> a(n);  
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    int happy_days = 0;
    int total_pieces = 0; 
    int layer = 0;
    int pieces_in_current_layer = 1;

    for (int i = 0; i < n; i++) {
        total_pieces += a[i]; 

        vector<int>pr(n); 
        pr[0] = a[0]; 
        for(int i=1; i<n; i++){
            pr[i] = pr[i-1]+a[i];
        }
        int idx =0; 
        while (total_pieces >= pieces_in_current_layer) {
            if(pr[i] == pieces_in_current_layer)
            happy_days++;
            layer++; 
            pieces_in_current_layer = 1 + (8 * layer); 
        }
    } 
    if(total_pieces == pieces_in_current_layer)happy_days++;
    cout << happy_days << endl;
}

int main() {
    fastio();    

    int t; 
    cin >> t;  
    while (t--) { 
        solution(); 
    } 

    return 0;
}