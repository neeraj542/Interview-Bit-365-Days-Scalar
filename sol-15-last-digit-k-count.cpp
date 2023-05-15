//Problem-Link: https://www.interviewbit.com/problems/last-digit-k-count/
//Solved-Date: 15-May-2023
//Problem-Level: Very Easy


int Solution::solve(int A, int B, int C) {
    int a = A;
    int b = B;
    for(int i=0; i<10; i++){
        if((a+i)%10 == C) a=a+i;
    }
    for(int i=0; i<10; i++){
        if((b-i)%10 == C) b=b-i;
    }
    if(a>b) return 0;
    
    return (b-a)/10+1;
}
