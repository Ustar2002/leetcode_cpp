class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b){
         if (a[1] != b[1]) return a[1] < b[1];  // 끝점 기준
         return a[0] < b[0];                    // (동점일 때 시작점 보조 정렬)
     });
        int kept = 0;
        int last_end =INT_MIN;

        for(auto& iv: intervals){
            int s = iv[0], e = iv[1];
            if (s >= last_end){
                ++kept;
                last_end =e;
            } else {}
        }
        return intervals.size() - kept;
    }
};