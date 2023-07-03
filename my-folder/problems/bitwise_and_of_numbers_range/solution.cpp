class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left==0 || right==0) {
            return 0;
            }
        if(left==right){
             return left;}
        int x = log10(left)/log10(2);
        int y = log10(right)/log10(2);
        if(y-x>=1)
        {
            return 0;
        }
        long long ans = left;
        for(long long i=left;i<=right;i++) ans&=i; 
        return ans;
    }
};