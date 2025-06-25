#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        
        int zero = 0, one = 0, two = 0;

        int i = 0;
        while (i < nums.size()) {
            if (nums[i] == 0) {
                zero++;
            }
            else if (nums[i] == 1) {
                one++;
            }
            else {
                two++;
            }
            i++;
        }

        i = 0;
        while (zero) {nums[i] = 0; zero--; i++;};
        while (one) {nums[i] = 1; one--; i++;};
        while (two) {nums[i] = 2; two--; i++;};
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
