class Solution {
public:
    int smallestNumber(int n, int t) {
        
        for(int i=n;i<1000000;i++)
        {
            string p=to_string(i);
            int product=1;
            for(int j=0;j<p.size();j++)
            {
                product*=(p[j]-'0');
            }
            if(product%t==0)
            {
                return i;
            }
        }
        return n;
    
       
    }
};