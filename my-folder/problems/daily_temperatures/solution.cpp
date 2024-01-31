class Solution {
public:
    std::vector<int> dailyTemperatures(std::vector<int>& temperatures) {
        int s = temperatures.size();
        std::stack<int> a;
        std::vector<int> answer(s, 0);
        
        for(int i = 0; i < s; i++){
            while (!a.empty() && temperatures[a.top()] < temperatures[i]){
                answer[a.top()] = i - a.top();
                a.pop();
            }
            a.push(i);
        }
        
        return answer;
    }
};