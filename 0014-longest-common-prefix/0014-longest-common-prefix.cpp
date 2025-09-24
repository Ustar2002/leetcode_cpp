class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if( strs.empty()) return "";

        int i = 0;
        sort(strs.begin(), strs.end());
        string a = strs.front();
        string b = strs.back();
        while( i< min(a.size(), b.size()) && a[i] == b[i]) ++i;
        return a.substr(0,i);
        
    }
};