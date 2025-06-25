#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {0, 2, 1, 2, 0, 1};
    
    sort(nums.begin(), nums.end());
    
    cout << "After sorting:" << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
