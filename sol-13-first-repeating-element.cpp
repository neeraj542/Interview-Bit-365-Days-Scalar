//Problem-Link: https://www.interviewbit.com/problems/first-repeating-element/
//Solved-Date: 13-May-2023 
//Problem-Level: Easy 

int Solution::solve(vector<int> &A) {
    unordered_map<int,int>map; 
    
    for(int i=0;i<A.size();i++) map[A[i]]++;  
    for(int i=0;i<A.size();i++)  
        if(map[A[i]] > 1) 
            return A[i]; 
    return -1;

}
