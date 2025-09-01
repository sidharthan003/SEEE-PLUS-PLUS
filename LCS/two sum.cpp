#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == target - nums[i]) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> ans1 = sol.twoSum(nums1, target1);
    cout << "Example 1 Output: [" << ans1[0] << ", " << ans1[1] << "]\n";

    // Example 2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> ans2 = sol.twoSum(nums2, target2);
    cout << "Example 2 Output: [" << ans2[0] << ", " << ans2[1] << "]\n";

    // Example 3
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> ans3 = sol.twoSum(nums3, target3);
    cout << "Example 3 Output: [" << ans3[0] << ", " << ans3[1] << "]\n";
    
    //example 4
    vector<int> nums4 = {1,2,3,4,4,6,7,8,9};
    int target4 = 8;
    vector<int> ans4 = sol.twoSum(nums4, target4);
    cout << "example 4 output:[" << ans4[0] << "," << ans4[1] << "]\n";
    

    return 0;
}