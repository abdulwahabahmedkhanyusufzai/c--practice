#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     vector<int> merged_array;
     int i = 0,j=0;
     
     while(i<nums1.size() && j<nums2.size()){
       if(nums1[i]<=nums2[j]){   
        merged_array.push_back(nums1[i]);
           i++;
           }else if(nums1[i]>nums2[j]){
           merged_array.push_back(nums2[j]);
           j++;
       }
     
    }
    while(i<nums1.size()){
      merged_array.push_back(nums1[i]);
      i++;
    }

    while (j<nums2.size()){
      merged_array.push_back(nums2[j]);
      j++;
    }
    
    int Length_array = merged_array.size();
    double median = 0;
    int mid = (Length_array-1)/2;
    if(Length_array % 2 == 0){
     median = (merged_array[mid] + merged_array[mid+1]) / 2.0;
    }else{
      median = merged_array[mid];
    }

    return median;
}
};

int main() {
    Solution s;

    // Test Case 1: Odd-length merged array
    vector<int> nums1_1 = {1, 3};
    vector<int> nums2_1 = {2};
    cout << "Test 1: Merged array is [1,2,3]. Expected median: 2.0" << endl;
    cout << "Result: " << fixed << setprecision(5) << s.findMedianSortedArrays(nums1_1, nums2_1) << endl;

    // Test Case 2: Even-length merged array
    vector<int> nums1_2 = {1, 2};
    vector<int> nums2_2 = {3, 4};
    cout << "\nTest 2: Merged array is [1,2,3,4]. Expected median: 2.5" << endl;
    cout << "Result: " << fixed << setprecision(5) << s.findMedianSortedArrays(nums1_2, nums2_2) << endl;

    // Test Case 3: Empty nums1
    vector<int> nums1_3 = {};
    vector<int> nums2_3 = {1, 2, 3, 4, 5};
    cout << "\nTest 3: Merged array is [1,2,3,4,5]. Expected median: 3.0" << endl;
    cout << "Result: " << fixed << setprecision(5) << s.findMedianSortedArrays(nums1_3, nums2_3) << endl;

    // Test Case 4: Empty nums2
    vector<int> nums1_4 = {5};
    vector<int> nums2_4 = {};
    cout << "\nTest 4: Merged array is [5]. Expected median: 5.0" << endl;
    cout << "Result: " << fixed << setprecision(5) << s.findMedianSortedArrays(nums1_4, nums2_4) << endl;

    // Test Case 5: Merged array with duplicate numbers
    vector<int> nums1_5 = {1, 2, 2};
    vector<int> nums2_5 = {2, 3, 4};
    cout << "\nTest 5: Merged array is [1,2,2,2,3,4]. Expected median: 2.0" << endl;
    cout << "Result: " << fixed << setprecision(5) << s.findMedianSortedArrays(nums1_5, nums2_5) << endl;

    return 0;
}