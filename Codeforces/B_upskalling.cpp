#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
	string shach="##";
	string sdot="..";
	string sthach="";
	string stdot="";
	for(int i=1;i<=n;i++){
	    if(i%2!=0){
	        sthach+=shach;
	        stdot+=sdot;
	    }else{
	        sthach+=sdot;
	        stdot+=shach;
	    }
	}
	for(int i=1;i<=n;i++){
	    if(i%2!=0){
	        cout<<sthach<<endl;
	        cout<<sthach<<endl;
	    }else{
	        cout<<stdot<<endl;
	        cout<<stdot<<endl;
	    }
	}
    }
	return 0;
}