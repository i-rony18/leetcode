class Solution {
public:
    long long maximumPoints(vector<int>& enemyPowers, int initialHealth) {
        long long totalScore = 0;
        int num = enemyPowers.size();
        sort(enemyPowers.begin(), enemyPowers.end());
        int left = 0;
        int right = num - 1;

        while (left <= right) {
            if (enemyPowers[left] > initialHealth) {
                if (totalScore == 0) {
                    return 0;
                }
                while (initialHealth < enemyPowers[left]) {
                    initialHealth += enemyPowers[right];
                    right--;
                }
            } else {
                int pointsGained =(initialHealth / enemyPowers[left]);
                totalScore += pointsGained;
                initialHealth %= enemyPowers[left];
                
            }
        }
        return totalScore;
    }
};