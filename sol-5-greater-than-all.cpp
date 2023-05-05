//Problem-Link: https://www.interviewbit.com/problems/positive-negative/
//Solved-Date: 04-May-2023
//Problem-Level: Very Easy

int Solution::solve(vector<int> &A) {
    int res = 0, ansWer=0;
    for (auto i:A) {
        if (i>res){
            ansWer++;
        }
        res = max(res,i);
    }
    return ansWer;
}

