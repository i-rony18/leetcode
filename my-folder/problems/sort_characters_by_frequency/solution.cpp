class Solution {
public:
string frequencySort(string s) {
    string ans = "";
    unordered_map<char, int> charFrequency;
    for (int i = 0; i < s.size(); i++) {
        charFrequency[s[i]]++;
    }
    vector<pair<int, char>> freqPairs;
    for (auto it : charFrequency) {
        freqPairs.push_back(make_pair(it.second, it.first));
    }
    sort(freqPairs.begin(), freqPairs.end(), greater<pair<int, char>>());
    for (auto it : freqPairs) {
        for (int i = 0; i < it.first; i++) {
            ans += it.second;
        }
    }
    return ans;
}
};    