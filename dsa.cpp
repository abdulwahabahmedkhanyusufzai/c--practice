#include <iostream>
#include <vector>
#include <string>
#include <chrono> // For measuring time

using namespace std;
using namespace chrono;

int main() {
    const int n = 1000000;

    // Version 1: Using push_back()
    vector<pair<int, string>> v1;
    auto start1 = high_resolution_clock::now();

    for (int i = 0; i < n; ++i) {
        v1.push_back(make_pair(i, "Student"));
    }

    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<milliseconds>(end1 - start1);
    cout << "push_back time: " << duration1.count() << " ms" << endl;

    // Version 2: Using emplace_back()
    vector<pair<int, string>> v2;
    auto start2 = high_resolution_clock::now();

    for (int i = 0; i < n; ++i) {
        v2.emplace_back(i, "Student");
    }

    auto end2 = high_resolution_clock::now();
    auto duration2 = duration_cast<milliseconds>(end2 - start2);
    cout << "emplace_back time: " << duration2.count() << " ms" << endl;

    return 0;
}
