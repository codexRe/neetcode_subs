class Solution {
    string makehash(string &s){
        vector <int> count(26);
        for (char i: s)
            ++count [i-'a'];
        string hash = "";
        for (int i: count){
            hash.append(to_string(i));
            hash.append("@");
        }
        
        return hash;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map <string, int> groups;
        for (string i: strs){
            string hash = makehash(i);
            if(groups.find(hash) == groups.end()){
                groups[hash] = ans.size();
                ans.push_back({});
            }
            ans[groups[hash]].push_back(i);
        }
        return ans;
    }
};
