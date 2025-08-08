#include <iostream>
#include <iomanip>


int main() {
   int sum=0;
   int count = 0;
   int numbers;
   
   while(std::cin>>numbers){
     sum += numbers;
     count++;
   }
   double average = 0.0;
   if(count>0){
    average = static_cast<double>(sum)/count;
   }
  std::cout<<"Sum: "<<sum<<std::endl;
  std::cout<<std::fixed<<std::setprecision(2) << "Average: "<<average<<std::endl;

   
   
  return 0;
}