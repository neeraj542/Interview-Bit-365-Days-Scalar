//Problem-Link: https://www.interviewbit.com/problems/odd-even-rule/
//Solved-Date: 10-May-2023
//Problem-Level: Very Easy 

int Solution::solve(vector<int> &A, int B, int C) 

{
    int ret = 0;
    const int temp = B % 2;
    for(const auto var : A)
    {
        ret += (var %2 == temp ? 0: 1);
    }  
    return ret*C;

}
