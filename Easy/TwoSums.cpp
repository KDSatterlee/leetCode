class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        //we need to build the has table
        for(int i =  0; i < n; i++)
        {
            numMap [nums [i]] = i;
        }

        //find the complement
        for(int i = 0; i < n; i++)
        {
            int comp = target - nums[i];
            if (numMap.count(comp) && numMap[comp] != i)
            {
                
                return{i, numMap[comp]};
            }
        }
        //if we have no soultion then we should return nothing
        return{};
    }
};