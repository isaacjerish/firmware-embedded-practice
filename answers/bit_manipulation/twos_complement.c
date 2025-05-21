int bitwiseAbsoluteValue(int n) {
    if(n < 0) {
        int a = ~n;
        int b = 1;
        while (b) {
            int carry = (a&b) << 1;
            a = a ^ b;
            b = carry;
        }
        return a;
    }
    return n;
}