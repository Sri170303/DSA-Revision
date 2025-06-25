#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        
        int low = 0, mid = 0, high = nums.size() - 1; 
        while (mid <= high) {
            if (nums[mid] == 0) {
                
                swap(nums[low], nums[mid]);
                low++;
                mid++;
                
            }
            else if (nums[mid] == 1) {
                
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    vector<int> nums = {0, 2, 1, 2, 0, 1};
    
    Solution sol;

    sol.sortZeroOneTwo(nums);
    
    cout << "After sorting:" << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
