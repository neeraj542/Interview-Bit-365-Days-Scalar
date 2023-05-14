//Problem-Link: https://www.interviewbit.com/problems/majority-element/
//Solved-Date: 14-May-2023 
//Problem-Level: Easy 

int Solution::majorityElement(const vector<int> &A) { 
    vector<int> B = A; //make a Copy as input vector is const
    std::sort(B.begin(), B.end()); //sort 
    return B[B.size()/2]; // If there exist a number is present more than n/2 times, than definitely it will be the middle number.
}
