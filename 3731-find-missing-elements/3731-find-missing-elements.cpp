class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        int low=*min_element(nums.begin(),nums.end());
        int high=*max_element(nums.begin(),nums.end());
        unordered_set<int>s(nums.begin(),nums.end());
        vector<int>ans;
    
        for (int i = low; i <= high; i++) {
            if (!s.count(i)) {
                ans.push_back(i);
            }
        }
        return ans;


    }
};