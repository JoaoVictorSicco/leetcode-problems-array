/* Problema 27: Remove Element */


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
    public:
    int removeElement(vector<int> &nums, int val)
    {
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == val)
            {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};

int main()
{
    Solution sol;
    // Declarando um vetor
    vector<int> nums = {3,2,2,3};
    int val = 3;
    int k = sol.removeElement(nums,val);

    for(int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";

    }
    cout << endl;

}