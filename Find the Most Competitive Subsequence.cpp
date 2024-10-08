class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(ans.size() == 0){
                ans.push_back(nums[i]);
                continue;
            }
            while(ans.size() && ans.back() > nums[i] && ans.size() + nums.size() - i - 1 >= k){
                ans.pop_back();
            }
            if(ans.size() < k) ans.push_back(nums[i]);
        }
        return ans;
    }
};
