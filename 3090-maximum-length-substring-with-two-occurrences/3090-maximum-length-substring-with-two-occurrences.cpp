class Solution {
public:
    int maximumLengthSubstring(string s) {
        
        unordered_map<char,int>mp;

        int left=0;
        int right=0;
        int maxi=0;

        for(left=0;left<s.size();left++)
        {  if(!mp.empty())
        {
            mp[s[left-1]]--;
        }
            while(right<s.size())
            {
                mp[s[right]]++;
                if(mp[s[right]]>2)
                {  
                    mp[s[right]]--;
                    break;
                }
               right++;
            }
           
             maxi=max(maxi,right-left);
           
            
             
        }
return maxi;

    }
};