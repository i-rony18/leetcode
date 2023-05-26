class Solution {
public:
    string capitalizeTitle(string title) {
        int j=0;
        for(int i=0; i<=size(title); i++){
            
            if(i < size(title) && title[i]!=' '){
                    title[i]=tolower(title[i]);
                    continue;
            }
            if(i-j>2){
                title[j]=toupper(title[j]);
                }
            j=i+1;
            }
        return title;
    }
};