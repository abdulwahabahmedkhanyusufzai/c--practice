#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cout<<"Enter elements:";
    cin>>n;

    vector<int> input(n);
    
    for(int val:input){
        cin>>val;
        input[val];
    }

    for(auto it=input.rbegin();it!=input.rend();it++){
        cout << *it;
    }
       
    return 0;
}