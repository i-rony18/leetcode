class Solution {
public:
    int minOperations(vector<string>& logs) {
        int folderDepth = 0; 
        for (const string& log : logs) {
            if (log == "../") {
                if (folderDepth > 0) folderDepth--;
            } 
            else if (log != "./") {
                folderDepth++;
            }
        }

        return folderDepth; 
    }
};