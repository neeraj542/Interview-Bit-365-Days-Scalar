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
