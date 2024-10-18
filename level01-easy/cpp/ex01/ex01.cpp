/* Problema 01: Two Sum */

#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
    public:
    vector<int> twoSum(vector<int> & nums, int target)
    {
        for(int i = 0; i < nums.size(); ++i)
        {
            for(int j = i + 1; j< nums.size(); ++j)
            {
                if(nums[i] + nums[j] == target)
                {
                    // cout << vec[i] << " " << vec[j] << endl;
                    // cout << "[" << i << "," << j << "]" << endl;
                    return {i,j};
                }
            }
        }
        return {};

    }
};

int main()
{
    Solution sol;
    vector<int> nums = {2,7,11,15};
    int target = 9;

    // Chama a função
    vector<int> resultado = sol.twoSum(nums, target);
    cout << "[" << resultado[0] << "," << resultado[1] << "]" << endl;

}