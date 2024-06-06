class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        int m=groupSize;
        sort(hand.begin(),hand.end());
        if(n%m!=0){ return false; }
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                vis[i]=1;
                int no=hand[i],cnt=1,j=i+1;
                while( j<n && cnt!=m ){
                    if(hand[j]==no+1 && vis[j]==0){
                        vis[j]=1;   no=hand[j];
                        j++;    cnt++;
                    }
                    else{ j++; }
                    if(j==n && cnt!=m){ return false; }
                }
            }
        }
        return true;
    }
};