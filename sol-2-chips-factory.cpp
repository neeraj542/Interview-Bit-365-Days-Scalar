//Problem-Link: https://www.interviewbit.com/problems/chips-factory/
//Solved-Date: 02-May-2023
//Problem-Level: Very Easy

vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    int emptyCount = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == 0) {
            emptyCount++;
        } else if (emptyCount > 0) {
            swap(A[i], A[i - emptyCount]);
        }
    }
    return A;
}
