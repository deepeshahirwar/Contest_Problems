#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define EL cout<<endl;
#define IF(i, a, b) for(int i= a; i < b; i++)
#define DF(i, a, b) for(int i = b; i >= a; i--)
#define pb push_back
#define pp pop_back
#define MP make_pair
#define YS cout<<"YES"
#define NO cout<<"NO"
#define Vi vector<int> 
#define VV vector<vector<int>> 
#define ff first
#define ss second
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);


int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;  cin>>n;

        ll A[n] = {0};
        IF(i, 0, n)
            cin>>A[i];
        set<ll> s;
        ll as = 0;
        IF(i, 0, n)
        {
            ll x = 1;
            ll v = A[i];
            while (true)
            {
                if(A[i] > as && s.find(A[i]) == s.end())
                    break;
                A[i] = x*v;
                x++;
            }
            s.insert(A[i]);
            as = A[i];
        }
            cout<<A[n-1]<<"\n";
    }

}