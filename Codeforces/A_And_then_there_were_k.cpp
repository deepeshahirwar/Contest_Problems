
#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void solution()
{
    ll n;
    cin >> n;

    for (int i = 31; i >= 0; i--)
    {

        if (n & (1 << i))
        {
            cout << ((1 << i) - 1) << endl;
            return;
        }
    }
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