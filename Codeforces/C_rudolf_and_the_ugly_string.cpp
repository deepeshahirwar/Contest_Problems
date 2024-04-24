#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minDeletionsToMakeBeautiful(string s) {
    int n = s.length(); 
    int cnt =0;
    for (int i = 0; i < n-2; ++i) {
       
    if ( (s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e' )
         || (s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p') ) {
           cnt++;
            i += 2;  // Skip 'map'
        }
    }

    return cnt;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int result = minDeletionsToMakeBeautiful(s);
        cout << result << endl;
    }

    return 0;
}
