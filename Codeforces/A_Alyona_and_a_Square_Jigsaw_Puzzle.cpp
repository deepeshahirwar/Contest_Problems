#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
/*  the problem is says: count the number of odd numbers square , given numbers sum is form 
 1 , 9, 25, 49,  so on ...
*/
void solution() {
    int n; 
    cin >> n; 

    vector<int> a(n);  
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }  
    int sum =0; 
    int happy=0;
    for(int i=0, j=1; i<n; i++){
        sum += a[i]; 
        while(j*j < sum) j+=2;// getting odds nums
        happy += (j*j == sum);
    }
  cout<<happy<<endl;

   
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