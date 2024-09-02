 #include <bits/stdc++.h> 
 #include<string> 

 using namespace std;
 
 
 int differenceInConsecutive(int n, int k, string s) {
  string s2 = "";  
  string temp ="#"; 
  vector<string>arr;
  int cost =0;
  for(int i=0; i<n; i += k){
   s2 = s.substr(i,k);  
   arr.push_back(s2);
  
   map<char, int>freq; 
     for(auto it : s2)freq[it]++; 
      int m1 = -1; 
      char ch1;
      for(auto it : freq){ // first max freq
           if(it.second > m1){
               m1 = it.second; 
               ch1 = (char)it.first;
           }
      }  
    // second max  freq 
    int m2 = -1; 
    char ch2;
     for(auto it : freq){ // first max
           if(it.second > m2 && (it.second != m1 && ch1 !=  it.first)){
               m2 = it.second; 
               ch2 = (char)it.first;
           }
      }  
 
     int idx=0;
     if(temp[idx++] != ch1){
         cost += k-m1; 
         temp.push_back(ch1); 
        
     } 
     if(temp[idx++] == ch1){
         cost += k-m2; 
          temp.push_back(ch2); 
        
     } 

     cout<<ch1<<endl;
    
  }  

  return cost;

} 
 
int main(){ 
    int n,k; 
    cin>>n>>k; 
    string s; 
    cin>>s; 
 int ans = differenceInConsecutive(n,k,s); 

 cout<<ans<<endl;

}