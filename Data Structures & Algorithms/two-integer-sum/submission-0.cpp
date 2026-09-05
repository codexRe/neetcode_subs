class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> x;
        for(int i = 0; i < nums.size(); ++i){
            int comp = target - nums[i];
            if(x.find(comp) != x.end()){
                if (x[comp] < i) 
                    return {x[comp], i};
                else
                    return {i, x[comp]};
            }   
                
            x.insert({nums[i], i});
        }
        return {};
    }
};
