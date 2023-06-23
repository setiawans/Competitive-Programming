class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastIndex;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                lastIndex = i;
                break;
            }
        }

        int ret = 0;
        for (int i = lastIndex; i >= 0; i--) {
            if (s[i] == ' ') {
                break;
            }
            ret++;
        }
        return ret;
    }
};