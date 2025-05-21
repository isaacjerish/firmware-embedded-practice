/*
 * Function: checkSigned8BitAddStatus
 * ---------------------------------
 * Determines if adding two signed 8-bit numbers (`val` and `offset`)
 * would result in a sum within the valid signed 8-bit range, or if it
 * would overflow or underflow.
 * A signed 8-bit integer ranges from -128 (SCHAR_MIN) to 127 (SCHAR_MAX).
 *
 * val:    The initial signed 8-bit value.
 * offset: The signed 8-bit value to add to `val`.
 *
 * returns:
 * 0 if (val + offset) is within the signed 8-bit range.
 * 1 if (val + offset) would overflow (i.e., be > SCHAR_MAX).
 * -1 if (val + offset) would underflow (i.e., be < SCHAR_MIN).
 *
 * Note: Implement the check by analyzing `val` and `offset` directly,
 * without performing an intermediate addition that itself might overflow
 * if stored in a wider integer type before comparison.
 */