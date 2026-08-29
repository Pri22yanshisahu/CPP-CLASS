#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 1;

        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] != nums[i + 1]) {
                count++;
            }

            if (count == 3) {
                return nums[i];
            }
        }

        return nums[nums.size() - 1];
    }
};

int main() {
    vector<int> nums = {2, 2, 3, 1};

    Solution obj;

    int result = obj.thirdMax(nums);

    cout << "Third Maximum = " << result << endl;

    return 0;
}