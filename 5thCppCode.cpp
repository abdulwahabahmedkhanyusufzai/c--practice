#include <iostream>
#include <sstream>
#include <format>
#include <fstream>
using namespace std;

int main() {
  
   string information;
  getline(cin,information);

  stringstream iss(information);
    string item;
    double price;
    int quantity;
    iss>>item>>price>>quantity;
   
    double total = price * quantity;

    string output = std::format("Receipt:{} x {} @ $ {} each. Total: $ {}",quantity,item,price,total); 
    cout << output<<endl;
    
   
   
  return 0;
}