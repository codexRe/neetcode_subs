class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> x;
        for(int i = 0; i < nums.size(); ++i){
            int comp = target - nums[i];
            if(x.find(comp) != x.end())    return {x[comp], i};
            x.insert({nums[i], i});
        }
        return {};
    }
};
