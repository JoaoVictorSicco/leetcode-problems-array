/* Problema 35: Search Insertion Position */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
    public:
    int searchInsert(vector<int>& nums, int target) {

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] >= target)
            {
                return i;
            }

        }
        return nums.size();
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 4};
    int target = 3;
    
    int result = sol.searchInsert(nums, target);
    cout << "Posição para inserir o target: " << result << endl;

    return 0;

}