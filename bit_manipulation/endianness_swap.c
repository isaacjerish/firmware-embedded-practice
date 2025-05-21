/*
 * Function: swapEndian32
 * ----------------------
 * Reverses the byte order of a 32-bit unsigned integer (endian swap).
 * Example: Input 0x12345678 should return 0x78563412.
 * (Byte order [12,34,56,78] becomes [78,56,34,12])
 *
 * value: The 32-bit unsigned integer to be byte-swapped.
 *
 * returns: The 32-bit unsigned integer with its byte order reversed.
 *
 * Implement using ONLY bitwise operators (e.g., &, |, ^, ~, <<, >>).
 */