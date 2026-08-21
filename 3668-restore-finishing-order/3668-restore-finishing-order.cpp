class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
vector<int>ans;
        unordered_set<int>s(friends.begin(),friends.end());
        for(int i=0;i<order.size();i++)
        {
            if(s.find(order[i])!=s.end())
            {
                ans.push_back(order[i]);
            }
        }
        return ans;
    }
};