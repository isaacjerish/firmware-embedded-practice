/*
 * Function: bitwiseArithmetic
 * ---------------------------
 * Performs bitwise addition (a + b) or subtraction (a - b) on two signed
 * 32-bit integers 'a' and 'b' using ONLY bitwise operators
 * (&, |, ^, ~, <<, >>). Direct arithmetic operators (+, - for summing/differencing)
 * are disallowed. Loops and conditionals for algorithm control are allowed.
 * Assumes two's complement representation for signed integers.
 *
 * operation_type: 0 for addition (a + b), 1 for subtraction (a - b).
 * a, b: Signed 32-bit integer operands.
 *
 * returns: Signed 32-bit integer result. Overflow wraps around (standard
 * two's complement behavior).
 *
 * Examples:
 * bitwiseArithmetic(5, 3, 0)  -> 8   (5 + 3)
 */