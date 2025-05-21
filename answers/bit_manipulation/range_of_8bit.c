int checkSigned8BitAddStatus(signed char val, signed char offset) {
    int a = val + offset;
    if ((a>= -128) && (a <= 127)) {
        return 0;
    } else if (a > 127) {
        return 1;
    }
    return -1;
}