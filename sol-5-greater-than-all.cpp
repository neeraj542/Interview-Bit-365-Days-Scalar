//Problem-Link: https://www.interviewbit.com/problems/greater-than-all/
//Solved-Date: 05-May-2023
//Problem-Level: Very Easy 

int Solution::solve(vector<int> &A) {
    int res = 0, ansWer=0;
    for (int i=0; i<A.size(); i++) {
        if (i>res){
            ansWer++; 
        }
        res = max(res,i);
    }
    return ansWer;
}

