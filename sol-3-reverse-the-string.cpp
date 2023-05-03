//Problem-Link: https://www.interviewbit.com/problems/chips-factory/
//Solved-Date: 03-May-2023
//Problem-Level: Very Easy

string Solution::solve(string A) {
    stringstream ss(A);
    string word;
    A = "";
    while (ss >> word) {
        if (A != "") {
            A = " " + A;
        }
        A = word + A;
    }
    return A;
}
