

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
