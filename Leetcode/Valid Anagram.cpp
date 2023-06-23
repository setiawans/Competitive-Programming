class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        } else {
            string arrS[s.size()];
            string arrT[t.size()];
            for (int i = 0; i < s.size(); i++) {
                arrS[i] = s[i];
                arrT[i] = t[i];
            }

            sort(arrS, arrS + s.size());
            sort(arrT, arrT + t.size());
            for (int i = 0; i < s.size(); i++) {
                if (arrS[i] != arrT[i]) {
                    return false;
                }
            }
            return true;
        }
    }
};