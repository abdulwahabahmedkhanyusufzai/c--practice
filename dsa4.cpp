#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n;
   cin>>n;

   char num = 'A';
   for(int i=0;i<n;i++){
       

    for(char j=0;j<i+1;j++){
      cout<<num;
      num++;
    }
    cout<<endl;
   }
   
  return 0;
}