#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n;
   cin>>n;
   
   int pow=1;
   int ans=0;
   while(n>0){
    int remainder = n % 2;
    n /= 2;
    ans+= remainder*pow;
    pow *= 10;

   }
   cout<<ans;
  return 0;
}