class Solution {
public:
        bool isOneBitCharacter(vector<int>& bits) {
        int i = 0 , n = bits.size();
        while( i < n ){
            if(i != n-1){
                if(i+1 < n and bits[i] ==1 and(bits[i+1] == 1 or bits[i+1]  == 0))
                    i+=2;
                else if(bits[i] == 0)
                    i+=1;}
            else if(i == n-1)
                return true;
        }
        return false;
        
    }
};