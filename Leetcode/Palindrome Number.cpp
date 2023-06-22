class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else {
            long long temp = x;
            long long ret = 0;
            while(temp > 0) {
                ret = ret * 10 + temp % 10;
                temp /= 10;
            }
            if (ret == x) {
                return true;
            } else {
                return false;
            }
        }
    }
};