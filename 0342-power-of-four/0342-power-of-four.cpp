class Solution {
public:

    // bool double_is_int(double d){
    //     return floor(d) == ceil(d);
    // }
    bool double_is_int(double d){
        return (d - trunc(d) == 0);
    }
    bool isPowerOfFour(int n) {

        if(n == 0) return false;

        return double_is_int((log10(n) / log10(4)));
    }
};