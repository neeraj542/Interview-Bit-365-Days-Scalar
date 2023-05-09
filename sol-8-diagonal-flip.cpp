//Problem-Link: https://www.interviewbit.com/problems/diagonal-flip/
//Solved-Date: 08-May-2023
//Problem-Level: Very Easy 
 
vector<vector<int> > Solution::solve(vector<vector<int> > &arr) {
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++)
            swap(arr[i][j], arr[j][i]);
    }
    return arr;
}
