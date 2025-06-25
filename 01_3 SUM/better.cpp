#include<vector>
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

class Solution {
    public:
    vector<vector<int>> threeSum(vector<int> nums) {
        set<vector<int>> uniqueTriplets;
        
        for (int i = 0; i < nums.size(); i ++) {
            set<int> hashSet;
            for (int j = i+1; j < nums.size(); j++) {  
                int target = - (nums[i] + nums[j]);
                if (hashSet.find(target) != hashSet.end()) {
                    vector<int> temp = {nums[i], nums[j], target};
                    sort(temp.begin(), temp.end());
                    uniqueTriplets.insert(temp);
                }
                hashSet.insert(nums[j]);
            }
        }
        vector<vector<int>> result(uniqueTriplets.begin(), uniqueTriplets.end());
        return result;
    }
};

int main() {
    vector<int> arr = {2, -2, 0, 3, -3, 5, -2, 0};
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