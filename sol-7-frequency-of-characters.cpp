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

