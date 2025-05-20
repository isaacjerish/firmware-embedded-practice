/*
 * Function: my_atoi
 * -----------------
 * Converts a C-style string to an integer.
 *
 * str: The input string.
 *
 * Behavior:
 * 1. Skip leading whitespace.
 * 2. Check for an optional '+' or '-' sign.
 * 3. Convert subsequent digits into an integer.
 * 4. Stop at the first non-digit character.
 * 5. Return 0 if no valid digits are found.
 * (Overflow handling is not required for this exercise).
 *
 * returns: The converted integer, or 0 on error/no digits.
 */