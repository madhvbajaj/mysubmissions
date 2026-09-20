class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> dp(rowIndex + 1, 1);

        for(int i=1; i<rowIndex; i++){
            for(int k=i; k>=1; k--){
                dp[k] = dp[k-1] + dp[k];
            }
        }

        return dp;
    }
};