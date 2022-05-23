class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> m ;
        vector<vector<string>> v ; 
        for(int i = 0; i<strs.size();i++){
            string s = strs[i]; 
            sort(s.begin(),s.end());
            m[s].push_back(strs[i]); 
        }   
        for (auto it = m.begin(); it != m.end(); it++) {
          v.push_back(it->second); 
     }
        return v ; 
    }
};