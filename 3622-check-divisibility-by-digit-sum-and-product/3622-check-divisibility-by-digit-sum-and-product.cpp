class Solution {
public:
    bool checkDivisibility(int n) {
        string s=to_string(n);
        int sum=0;
        int product=1;
        bool div=false;
       for(int i=0;i<s.size();i++)
       {
            sum+=s[i]-'0';
            product*=s[i]-'0';
       }
       int total=sum+product;
       if(n%total==0)
       {
        div=true;
       }
       return div;
    }
};