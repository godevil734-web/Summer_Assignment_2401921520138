class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i =0;
        int j = n-1;
        int maxArea=INT_MIN;
        while(i<j)
        {
            if(height[i] <= height[j])
            {
                int area = height[i]*(j-i);
                i++;
                maxArea = max(area,maxArea);
            }
            else if(height[j] <height[i])
            {
                int area = height[j]*(j-i);
                j--;
                maxArea = max(area,maxArea);
            }

        }

        return maxArea;
    }
};
