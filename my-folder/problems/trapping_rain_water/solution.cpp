class Solution
{
    public:
        int trap(vector<int> &height)
        {
            int n = height.size();
            int left = 0;
            int right = n - 1;
            int res = 0;
            int maxleft = 0;
            int maxright = 0;
            while (left <= right)
            {
                if (height[left] <= height[right])
                {
                    maxleft = max(height[left],maxleft);
                    res = res + maxleft - height[left];
                    left++;
                }
                else
                {
                 maxright =max(maxright, height[right]);
                 res = res + maxright - height[right];
                 right--;
                }
            }
            return res;
        }
};