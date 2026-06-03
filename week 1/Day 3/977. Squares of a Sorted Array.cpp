class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>ans(n);
        int i=0;
        int j=n-1;
        
        
        while(i<=j)
        {
            if( (nums[i]*nums[i]) >= (nums[j]*nums[j]) )
            {
                ans[n-1]=(nums[i]*nums[i]);
                i++;
                n--;
            }
            else if((nums[i]*nums[i]) < (nums[j]*nums[j]))
            {
                ans[n-1]=(nums[j]*nums[j]);
                j--;
                n--;
            }

        }
        
        return ans;
    }
};
