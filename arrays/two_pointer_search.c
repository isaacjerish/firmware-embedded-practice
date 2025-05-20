/*
 * Function: findOptimalPowerPair
 * ------------------------------
 * Given a **sorted** array of integers `power_levels` representing power outputs
 * of different cells, and an integer `max_allowable_draw`.
 *
 * Your task is to find two **distinct** cells from the `power_levels` array
 * such that their combined power output is as large as possible,
 * but **does not exceed** `max_allowable_draw`.
 *
 * `power_levels`: A pointer to a sorted array of non-negative integers.
 * `num_levels`: The number of elements in the `power_levels` array.
 * `max_allowable_draw`: The maximum combined power output allowed for a pair.
 *
 * returns: The maximum possible combined power output from two distinct cells
 * that is less than or equal to `max_allowable_draw`.
 * If no such pair of distinct cells exists (e.g., array has fewer than
 * 2 elements, or all pairs exceed `max_allowable_draw`), return -1.
 *
 * Constraints:
 * - `power_levels` will contain non-negative integers.
 * - `power_levels` is sorted in non-decreasing order.
 * - `num_levels` will be between 0 and 10^5.
 * - `max_allowable_draw` will be a non-negative integer.
 * - Values in `power_levels` will be between 0 and 10^9.
 *
 * Example:
 * power_levels = [10, 25, 30, 45, 60, 70], num_levels = 6, max_allowable_draw = 80
 * Expected output: 75 (from pair 10 + 65, no 65, pair 25 + 45 = 70, 30 + 45 = 75. 10+70=80. 25+60=85(too high))
 * Let's re-check example:
 * (10, 70) -> sum = 80. Valid. Current max_sum = 80.
 * (10, 60) -> sum = 70.
 * (25, 45) -> sum = 70.
 * (30, 45) -> sum = 75.
 */