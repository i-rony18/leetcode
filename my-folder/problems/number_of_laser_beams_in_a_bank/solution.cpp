class Solution {
public:
    int numberOfBeams(vector<string>&bank) {
        int count;
        vector<int>laser;
        for (int i=0; i<size(bank); i++){
            count=0;
            for (int j=0; j<size(bank[0]); j++){
                if (bank[i][j]=='1'){
                    count+=1;
                }
            }
        if (count>0){
            laser.push_back(count);
        }
        
        }
        if (size(laser)<=1){
            return 0;
        }

        long long sum=0;
        for (int i=0; i<size(laser)-1; i++){
            sum+=laser[i]*laser[i+1];
        }
        return sum;

    }
};