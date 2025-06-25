#include<vector>
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

class Solution {
    public:
    vector<vector<int>> threeSum(vector<int> nums) {
        set<vector<int>> uniqueTriplets;
        
        for (int i = 0; i < nums.size()-2; i ++) {
            for (int j = i+1; j < nums.size()-1; j++) {
                for (int k = j+1; k < nums.size(); k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        // to get only unique triplets
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());
                        uniqueTriplets.insert(temp);
                    }
                }
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