class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
{
        int n=nums.size();
        int maxx=0;
        int temp=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                temp++;
                continue;
            }

            maxx=max(temp,maxx);
            temp=0;
        }
            maxx=max(temp,maxx);

        return maxx;
        
    }
};