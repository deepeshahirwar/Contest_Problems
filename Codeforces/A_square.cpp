 
#include <bits/stdc++.h>

#define ll long long  
#define py  cout<<"yes"<<'\n'
#define pn  cout<<"no"<<'\n'  
#define pb  push_back 
#define line  '\n' 
using namespace std;

void solve(){
   int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        int side = max (abs(x2 - x1), abs(y2 - y1));
        cout << side * side <<line;
       
}
int main() {
    ll t;
    cin >> t;
    while (t--) { solve();}
          
    return 0;
}
