class Solution {
public:
    int climbStairs(int n) {
        int a = 0, b = 1;
        int steps = 0;
        for(int i = 1;i <= n; i++){
            steps = a+b;
            a = b;
            b = steps;
        }
        return steps;
    }
};