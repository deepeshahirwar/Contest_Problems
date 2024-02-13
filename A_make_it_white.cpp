
#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void solution()
{
    ll n;
    cin >> n;
   string s ; cin>>s; 
    
    int l=0; 
    int r = n-1; 
    for(int i=0; i<n; i++){
        if(s[i] == 'B'){
            l = i; 
            break;
        }
    } 

     for(int i=n-1; i>=0; i--){
        if(s[i] == 'B'){
            r = i; 
            break;
        }
    } 

    cout<<(r-l + 1)<<endl;
    
}

int main()
{
    

    ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}