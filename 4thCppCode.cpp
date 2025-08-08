#include <iostream>
#include <fstream>

#include<sstream>

#include<iomanip>



using namespace std;



int main() {

 ifstream inFile("records.txt");

double totalPrices=0.0;

string line;

while(getline(inFile,line)){

 stringstream iss(line);

 string item;

double price;

iss>>item>>price;

totalPrices += price;

}



cout << fixed << setprecision(2);

cout << "Total Price: " << totalPrices << endl;

return 0;

}