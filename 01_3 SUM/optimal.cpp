#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
    public:
    vector<vector<int>> threeSum(vector<int> nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i = 0; i < nums.size()-2; i++) {
            
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int j = i + 1, k = nums.size();
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
    
                if (sum < 0) {
                    j++;
                }
                else if (sum > 0) {
                    k--;
                }
                else {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    result.push_back(temp);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j-1]) j++;
                    while (j < k && nums[k] == nums[k+1]) k--;
                }
            }
        }
        return result;
    }
};

int main() {
    vector<int> arr = {-1,0,1,2,-1,-4};
    Solution s;
    vector<vector<int>> result = s.threeSum(arr);
    for (auto x: result) {
        for (auto y: x) {
            cout << y << ' ';
        }
        cout << endl;
    }
    return 0;
}