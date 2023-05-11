//Problem-Link: https://www.interviewbit.com/problems/max-min-05542f2f-69aa-4253-9cc7-84eb7bf739c4/
//Solved-Date: 11-May-2023
//Problem-Level: Easy 

int Solution::solve(vector<int> &A) {
    int ans;
    return *max_element(A.begin(),A.end()) + *min_element(A.begin(),A.end());
} 
