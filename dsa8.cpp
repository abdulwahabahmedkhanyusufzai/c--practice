#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
      int spaces = 2*(n-i-1);
      for(int j=0;j<=i;j++){
        cout<<"*";
      }
    for(char j=0;j<spaces;j++){
      cout<<" ";
    }
    for(int j=0;j<=i;j++){
       cout<<"*";
    }
    cout<<endl;
   }
   for(int i=n-1;i>=0;i--){
      int spaces = 2*(n-i-1);
      for(int j=0;j<=i;j++){
        cout<<"*";
      }
    for(char j=0;j<spaces;j++){
      cout<<" ";
    }
    for(int j=0;j<=i;j++){
       cout<<"*";
    }
    cout<<endl;
   }
   
  return 0;
}