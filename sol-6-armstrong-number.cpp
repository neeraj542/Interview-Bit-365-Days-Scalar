int Solution::solve(int A) {
    int x=0;
    int a= A;
    int n= floor(log10(A) + 1);
    while(a>0){
        int temp = a%10;
        x = x+ pow(temp, n);
        a/=10;
    }

    if(x==A){
        return 1;
    }
return 0;
}
