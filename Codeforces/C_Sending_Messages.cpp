 #include<bits/stdc++.h>
 using namespace std;

vector<bool> Prime; 
vector<int> spf;
void sieve(int s) {
    Prime.resize(s + 1, 1);
    spf.resize(s + 1, s + 1);
    for(int i = 2 ; i <= s ; i++)   if(Prime[i]) {
        spf[i] = min(spf[i], i);
        for(int j = i ; j * i <= s ; j++)
            Prime[j * i] = 0, spf[j * i] = min(i, spf[j * i]);
    }
}

void solve(){
    int n;cin>>n;
    int t=n-4;
    bool flag=false;
    for(int i=3;i<=1e4;i++){
        if(Prime[i]){
            int p=i;
            int q=sqrt(t-p*p);
            if(q*q==t-p*p and Prime[q]){
                flag=true;
                break;
            }
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main() {
    int n1=1e4;
    sieve(n1);
    solve();
    return 0;
}