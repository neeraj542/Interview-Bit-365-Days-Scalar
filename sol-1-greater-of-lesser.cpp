Problem-Link: https://www.interviewbit.com/problems/greater-of-lesser/
Solved-Date: 01-May-2023


int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    int count1=0;
    for(int i=0; i<A.size(); i++){
        if(A[i]>C){
            count1++;
        }
    }
    int count2=0;
    for(int i=0; i<B.size(); i++){
        if(B[i]<C){
            count2++;
        }
    }
    return max(count1, count2);
}
