class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

unordered_map<int,int>mp;
int ps=0;
int count=0;
mp[0]=1;
for(int i=0;i<nums.size();i++)
{
    ps+=nums[i];

    if(mp.find(ps-k)!=mp.end())
    {
        count+=mp[ps-k];
    }
  mp[ps]++;
}

return count;

  } };









   
        
        
//         int count=0;
//     for(int i=0;i<nums.size();i++)
//     { int sum=0;
//         for(int j=i;j<nums.size();j++)
//         {
//             sum+=nums[j];
//             if(sum==k)
//             {
//                 count++;
//             }
            
            
//         }
           
//     }
//     return count;
   // } };