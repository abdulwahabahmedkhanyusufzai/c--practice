#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n;
   cin>>n;

  
for(int i=0;i<n;i++){
     int num =1;
     int num2= i;
    int space=n-i-1;
    for(int j=0;j<space;j++){
      cout<<" ";
    }
    for(int j=0;j<i+1;j++){
      cout<<num;
      num++;
    }
    for(int j=0;j<i;j++){
      if(num2==0) continue;
      cout<<num2;
      num2--;
      
      
    }
    cout<<endl;
   }
   
  return 0;
}