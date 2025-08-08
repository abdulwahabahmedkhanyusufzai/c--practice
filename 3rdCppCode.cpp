#include <iostream>
#include <iomanip>

int main() {
   std::string full_name;
   float score;
   getline(std::cin,full_name);
   std::cin>>score;
   
    std::cout<<full_name<<std::endl;
    std::cout<<std::fixed<<std::setprecision(1)<<score<<std::endl;
   
    return 0;
}