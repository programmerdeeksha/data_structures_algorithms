class Solution {
public:
    int dp[101][101];
    int solve(int i,int j,int m,int n)
    {  
        if(i>=m||j>=n)
            return dp[i][j]=0;
        if(i==m-1&&j==n-1)
            return 1;
        if(dp[i][j]!=-1)
            return dp[i][j];
            
            
        int ans=0;
        if(i+1<m&&j+1>=n)
            ans= solve(i+1,j,m,n);
        else if(i+1>=m&&j+1<n)
            ans= solve(i,j+1,m,n);
        else
            ans= solve(i,j+1,m,n)+solve(i+1,j,m,n);
        
        return dp[i][j]= ans;
    }
    
    
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
       return solve(0,0,m,n);
        
        
        
    }
};