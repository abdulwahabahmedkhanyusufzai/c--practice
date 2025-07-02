#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    int spaces = n-i-1;
    int spaces2 = 2*i-1;
    for(char j=0;j<spaces;j++){
      cout<<" ";
    }
    cout<<"*";
    for(int j=0;j<spaces2;j++){
      cout<<" ";
    }
    if(i==0){
      cout<<endl; 
      continue;
    } 
    cout<<"*";
    cout<<endl;
   }

   for(int i=n-1;i>0;i--){
    int spaces = n-i;
    int spaces2 = 2*i-3;
    for(char j=0;j<spaces;j++){
      cout<<" ";
    }
    cout<<"*";
    for(int j=0;j<spaces2;j++){
      cout<<" ";
    }
    if(i!=1) cout<<"*"; 
  
    cout<<endl;
   }
   
  return 0;
}