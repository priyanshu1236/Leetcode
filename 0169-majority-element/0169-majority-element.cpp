class Solution {
public:
    int majorityElement(vector<int>& nums) {

unordered_map<int,int>feq;
int i=0;

for(i=0;i<nums.size();i++)
{
    feq[nums[i]]++;

if(feq[nums[i]]>nums.size()/2)
{
   return nums[i];

}}


return -1;







    }
};