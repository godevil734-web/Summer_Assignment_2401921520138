class Solution {
public:
    double findMaxAverage(vector<int>& nums, double k) {
        double sum =0;
        for(int i=0; i<k; i++)
        {
            sum = sum + nums[i];
        }
        double maxsum = sum;
        for(int i=k; i<nums.size();i++)
        {
            sum = (sum + nums[i])-nums[i-k];
            maxsum = max(sum,maxsum);
        }
        double z= maxsum/k;
        return z;
    }
};
// galti ho rhi thi ki mai k ko int man rha th aur z ko double 
