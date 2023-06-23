class Solution {
public:
    int mySqrt(int x) {
        long long ret = 0;
        while((ret*ret) < x) {
            ret++;
            if (ret*ret > x) {
                ret -= 1;
                break;
            }
        }
        return ret;
    }
};