/* Problema 26: Remove duplicates from sorted away */

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
    public:
    int removeDuplicates(vector<int> &nums)
    {
        int k=1; // Variável que guarda os numeros no vetor
        for(int i = 1; i < nums.size(); ++i)
        {
            if(nums[i]!=nums[i-1]) // Se o atual for diferente do antigo, tem-se um numero novo
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main()
{
    Solution sol;
    vector<int>nums = {1,1,2,2,3,3,4,5}; // Criando o vetor
    int k = sol.removeDuplicates(nums);

    for(int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";

    }

    cout << endl;
    
}
