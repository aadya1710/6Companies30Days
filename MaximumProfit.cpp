class Solution {
  public:
    int maxProfit(int k, int n, int prices[]) {
        if(n<=1 || k==0){
            return 0;//agr ek hi element hai ya transaction nhi hai to profit is zero
        }
        int dp[k+1][n];
        //transaction day zero hai to profit is zero
        for(int i=0;i<=k;i++){
            dp[i][0]=0;
        }
        //agr day zero hai to kuch sell nhi hoga to profit is zero
        for(int i=0;i<n;i++){
            dp[0][i]=0;
        }
        
        for(int i=1;i<=k;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i][j-1];//agr skip kr rha hai transactiion
                int s=j-1;
                while(s>=0){
                    dp[i][j]=max(dp[i][j], prices[j]-prices[s]+dp[i-1][s]);
                    s--;
                }
            }
        }
        return dp[k][n-1];
    }  
