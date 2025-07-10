class Solution {
public:
    int romanToInt(string s) {
        int sum =0;

        map <char, int> romanMap;
        romanMap.insert({'I',1});
        romanMap.insert({'V',5});
        romanMap.insert({'X',10});
        romanMap.insert({'L',50});
        romanMap.insert({'C',100});
        romanMap.insert({'D',500});
        romanMap.insert({'M',1000});

        for(int i=0;i<s.size();i++){
            if(i==s.size()-1) return sum+=romanMap[s[i]];
            else if(romanMap[s[i]] == romanMap[s[i+1]]) sum+=romanMap[s[i]];
            else if(romanMap[s[i]] < romanMap[s[i+1]]) sum-=romanMap[s[i]];
            else if(romanMap[s[i]] > romanMap[s[i+1]]) sum+=romanMap[s[i]];
        }
        return sum;
    }
};