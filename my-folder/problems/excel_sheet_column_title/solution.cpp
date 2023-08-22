class Solution {
public:
    string convertToTitle(int cN) {
        unordered_map<int,char>umap;
        for(int i=0;i<26;i++)
        {
            umap[i]=65+i;     
        }
        string hr="";
        while(cN>0)
        {
            cN=cN-1;
            hr=hr+umap[cN%26];
            cN=cN/26;
        }
        reverse(hr.begin(), hr.end());
        return hr;
       
    }
};
