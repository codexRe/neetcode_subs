class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.length(); int n2 = t.length();
        if(n1 != n2) return false;

        int chars1[26] {0}, chars2[26] {0};
        for(int i = 0; i < n1; ++i){
            ++chars1[s[i] - 'a'];
            ++chars2[t[i] - 'a'];
        }
        for(int i = 0; i < 26; ++i)
            if (chars1[i] != chars2[i])
                return false;
        return true;
    }
};
