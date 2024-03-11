#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:


//Reccurssive

/*
    int helper(int i, int j, int m, int n) {
        if (i >= m || j >= n) {
            return 0;
        }

        if (i == m - 1 && j == n - 1) {
            return 1;
        }

        int left = helper(i + 1, j, m, n);
        int right = helper(i, j + 1, m, n);

        return right + left;
    }

    int uniquePaths(int m, int n) {
        return helper(0, 0, m, n);
    }
*/
    int helper(int i, int j, int m, int n,vector<vector<int>> &dp) {
        if (i >= m || j >= n) {
            return 0;
        }

        if (i == m - 1 && j == n - 1) {
            return 1;
        }
        if (dp[i][j]!=-1){
                return dp[i][j];
        }

        else return dp[i][j] = helper(i + 1, j, m, n,dp)+ helper(i, j + 1, m, n,dp);

        
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return helper(0,0,m,n,dp);
        if(m==1&&n==1){
            return dp[0][0];
        }
    }

};