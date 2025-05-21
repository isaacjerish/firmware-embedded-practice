/*
 * Function: checkInclusion
 * ------------------------
 * Given two C-style strings s1 and s2, return 1 (true) if s2 contains
 * a permutation of s1 as a substring, or 0 (false) otherwise.
 * In other words, return 1 if one of s1's permutations is a substring of s2.
 *
 * s1: The pattern string (null-terminated).
 * s2: The text string to search within (null-terminated).
 *
 * returns: 1 if s2 contains a permutation of s1, 0 otherwise.
 *
 * Constraints:
 * - s1 and s2 consist of lowercase English letters.
 * - 1 <= length of s1, length of s2 <= 10^4.
 * (Note: if s1 can be empty, clarify behavior. Assume non-empty based on typical constraints).
 * For this problem, let's assume s1 will not be empty based on 1 <= len(s1).
 *
 * Example 1:
 * s1 = "ab"
 * s2 = "eidbaooo"
 * Output: 1
 * Explanation: s2 contains "ba" which is a permutation of "ab".
 */