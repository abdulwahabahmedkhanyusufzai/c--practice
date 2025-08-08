#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main(){
  vector<int> nums={2,7,11,15};
  unordered_map<int, int> myMap;

  int target = 9;
  for(int i=0;i<nums.size();i++){
    int compliment = target - nums[i];
    auto it = myMap.find(compliment);
    if(it != myMap.end()){
      return {it ->second,i};
    }
    myMap[nums[i]] = i;
  }
}