//Problem-Link: https://www.interviewbit.com/problems/number-of-1-bits/
//Solved-Date: 09-May-2023
//Problem-Level: Easy 

int Solution::numSetBits(unsigned int A) { 
    int cnt = 0;
    while(A != 0){
        if( A & 1){
            cnt++;
        }
        A = A>>1;
    }
    return cnt;
}
