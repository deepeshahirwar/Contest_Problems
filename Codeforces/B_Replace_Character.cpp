/******************** DEEPESH AHIRWAR ***********************/
#include<bits/stdc++.h> 
 #include <fstream> 
 using namespace std; 

 #define fastio() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
 #define MOD 1000000007

 
 #define endl "\n"
 #define pb push_back
 #define ppb pop_back
 #define mp make_pair
 #define ff first
 #define ss second
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

/*************** WELCOME *******************/
  void solution(){
     int n;
    cin >> n;
    string s; 
    cin >> s;

    vector<int> freq(26, 0);

    // logic : updating minfreq of char to maxfreq of char , this will give you minimun permutations
    for (char c : s) {
        freq[c - 'a']++;
    }

    int mxf = 0, mnf = INT_MAX;
    char chmx = 'a', chmn = 'a'; 

    // Find the characters with max and min frequencies
    for (int i = 0; i < 26; i++) {
        if (freq[i] > mxf) {
            mxf = freq[i];
            chmx = 'a' + i;
        }
        if (freq[i] > 0 && freq[i] < mnf) { 
            mnf = freq[i];
            chmn = 'a' + i;
        }
    }
    // if mnf == mxf 
    if(mnf == mxf){
     for (int i = 0; i < n-1; i++) {
        if (s[i] != s[i+1]) {
            s[i] = s[i+1];
            break; 
        }
    }  
    }else{ 
        // if mnf != mxf
    for (int i = 0; i < n; i++) {
        if (s[i] == chmn && freq[s[i]-'a'] == mnf) {
            s[i] = chmx;
            break;
        }
    } 
    }

    cout << s << endl;
  } 

 int main() {
 #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 #endif  
fastio();    

   ll t; 
    cin>>t;  
   for(int i=0;i<t;i++){ 
    solution(); 
   } 

   return 0;
 }