vector<int> Solution::solve(vector<int> &A) {
    int positive = 0, negative = 0;
    for (int i = 0; i < A.size(); i++) {
        if (A[i] > 0) {
            positive++;
        } else if (A[i] < 0) {
            negative++;
        }
    }
    return {positive, negative};
}
