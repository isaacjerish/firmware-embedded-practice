/*
 * Function: bitwiseAbsoluteValue
 * ------------------------------
 * Calculates the absolute value of a signed 32-bit integer `n`.
 * If `n` is negative, its negation (-n) must be computed as `~n + 1`,
 * where the `+1` operation uses only bitwise logic (e.g., iterative adder).
 * Conditional statements for sign checking are allowed.
 *
 * n: A signed 32-bit integer.
 *
 * returns: The absolute value of `n`.
 *
 * Note on INT_MIN: `bitwiseAbsoluteValue(INT_MIN)` is expected to return
 * INT_MIN due to standard two's complement behavior.
 *
 * Examples:
 * bitwiseAbsoluteValue(5)  -> 5
 * bitwiseAbsoluteValue(-5) -> 5 (computed as ~(-5) + 1 bitwise)
 * bitwiseAbsoluteValue(0)  -> 0
 */