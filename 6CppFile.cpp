#include <iostream>
#include <fstream>
#include <sstream>
#include <format>
using namespace std;

int main() {
  ifstream inFile("data.txt");
  if(!inFile){
    cerr<<"Error:Could not open data.txt for reading.";
    return 1;
  }    
  string line;
  
  while(getline(inFile,line)){
    stringstream iss(line);
    string name;
    int age;
    iss >>name>>age;
    cout<<format("Hello, {}! You are {} years old.",name,age)<<endl;
  }
  

     
  return 0;
}