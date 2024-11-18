// find the total minutes of exercise done and it's average for a week
/*input :
day 1 excercise duration : 25
day 2                    : 26
day 3                    : 23
day 4                    : 15
day 5                    : 14 
day 6                    : 38 
day 7                    : 44 

Result: sum average 
      : 185 26.4
*/ 
// find the total minutes of exercise done and it's average for a week
/*input :
day 1 excercise duration : 25
day 2                    : 26
day 3                    : 23
day 4                    : 15
day 5                    : 14 
day 6                    : 38 
day 7                    : 44 

Result: sum average 
      : 185 26.4
*/ 

// code 
#include<bits/stdc++.h>
using namespace std; 
 
int main(){ 
int duration; 
double sum =0;
for(int i=1; i<=7; i++){
   cin>>duration; 
   sum += duration;
}
double avg = (sum)/7;  
cout<<sum<<" ";  

cout<<fixed<<setprecision(1);// for 1 digit after dot(.)
cout<<avg;


return 0; 
}
// code 
#include<bits/stdc++.h>
using namespace std; 
 
int main(){ 
int duration; 
double sum =0;
for(int i=1; i<=7; i++){
   cin>>duration; 
   sum += duration;
}
double avg = (sum)/7;  
cout<<sum<<" ";  

cout<<fixed<<setprecision(1);// for 1 digit after dot(.)
cout<<avg;


return 0; 
}
