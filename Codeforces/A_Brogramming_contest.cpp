#include<bits/stdc++.h>
using namespace std; 

#define fastIO() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()  

#define sort_all(x) sort(x.begin(),x.end())
#define reverse_all(x) reverse(x.begin(),x.end())
#define py cout<<"YES"<<"\n"
#define pn cout<<"NO"<<"\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld; 

bool check(string s, string t){
    int ones = 0, zeros = 0; 
    for(int i=0; i<sz(s); i++){
        if(s[i] == '0') zeros++;  
    } 
    for(int i=0; i<sz(t); i++){
        if(t[i] == '1') ones++;  
    } 
    return (zeros == sz(s) && ones == sz(t));
}

void deepesh7024(){
    int n; 
    cin >> n; 
    string s; 
    cin >> s; 

    int ones = count(all(s), '1');
    int zeros = n - ones;  

    if(ones == n){
        cout << 1 << endl; 
        return; 
    } 
    if(zeros == n){
        cout << 0 << endl; 
        return;
    } 

    string t = "";  
    int ans = 0;  
    bool flag = true;

    while(flag){
        if(!check(s, t)){
            // Move suffix of '1's from s to t
            int i = s.find('1');
            if (i != string::npos) {
                t += s.substr(i);
                s.erase(i);
                ans++;
            }

            if(check(s, t)){
                flag = false; 
                break;
            } 

            // Move suffix of '0's from t to s
            int j = t.find('0');
            if (j != string::npos) {
                s += t.substr(j);
                t.erase(j);
                ans++;
            }

            if(check(s, t)){
                flag = false; 
                break;
            } 
        }
    } 

    cout << ans << endl;
}  

int main() {
#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    freopen("Error.txt", "w", stderr);
#endif 
    fastIO();  
    int t; 
    cin >> t;  
    while(t--) { 
        deepesh7024();
    }  
    return 0;
}
