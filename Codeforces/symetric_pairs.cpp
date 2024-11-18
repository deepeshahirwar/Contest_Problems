 // print all symetric pairs 
 #include<bits/stdc++.h>
using namespace std; 
int main(){ 

vector<vector<int>> arr = {{1,2}, {2,1}, {3,2}, {1,5}, {5,1}}; 
unordered_map<int, int>m; 
int n = arr.size(); 
for(int i=0; i<n; i++){
  int first = arr[i][0];
  int second = arr[i][1]; 
   
   if(m.find(second) != m.end() && m[second] == first){
    cout<<"("<<first<<","<<second<<")"<<" ";
   }else{
     m[first] = second;
}
 
 return 0;
 }
