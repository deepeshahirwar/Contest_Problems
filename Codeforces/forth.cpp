#include <bits/stdc++.h> 

using namespace std; 
 
int main() { 
    
    int tc; 
    cin >> tc; 
 
    while (tc--) { 
         
        int n; 
        cin >> n; 
 
        vector<int> arr(n), ntt(n); 
 
        for (int &i : arr) { 
            cin >> i; 
        } 
 
         
        ntt[n - 1] = n; 
 
        for(int i = n - 2; i >= 0; i--) { 
            ntt[i] = (arr[i] == arr[i + 1] ? ntt[i + 1] : i + 1); 
        } 
       
        int q; 
        cin >> q; 
 
        while (q--) { 
            int l, r; 
            cin >> l >> r; 
 
            if (ntt[l] > r) { 
                cout << -1 << ' ' << -1 << '\n'; 
            } else { 
                cout << l + 1 << ' ' << 1 + ntt[l] << "\n"; 
            } 
        } 
    } 
 
    return 0; 
}
