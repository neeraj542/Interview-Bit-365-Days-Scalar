//Problem-Link: https://www.interviewbit.com/problems/frequency-of-characters/
//Solved-Date: 07-May-2023
//Problem-Level: Very Easy 

vector<int> Solution::solve(string A) {
    vector<int>v(26);
    unordered_map<char,int>mp;
     
    for(int i=0;i<A.length();i++)  
        mp[A[i]]++;
        
    for(char i='a'; i<='z'; i++)
    {
        if(mp.find(i) != mp.end())
        v[i-'a'] = mp[i];
    }
    return v;
}

