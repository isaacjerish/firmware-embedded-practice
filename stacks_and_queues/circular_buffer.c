/*
 * Circular Buffer (Ring Buffer) Implementation for Integers
 * ---------------------------------------------------------
 * Implement a circular buffer using a fixed-size array in C.
 *
 * Required Operations:
 *
 * 1. create_circular_buffer(capacity):
 * - Creates and initializes a new circular buffer with the given integer capacity.
 * - Returns a pointer to the buffer structure, or NULL on failure.
 *
 * 2. cb_enqueue(cb, item):
 * - Adds 'item' to the buffer 'cb'.
 * - Returns 1 (true) on success, 0 (false) if buffer is full.
 *
 * 3. cb_dequeue(cb, item_ptr):
 * - Removes an item from 'cb' and stores it in '*item_ptr'.
 * - Returns 1 (true) on success, 0 (false) if buffer is empty.
 *
 * 4. cb_is_full(cb):
 * - Checks if buffer 'cb' is full. Returns 1 if full, 0 otherwise.
 *
 * 5. cb_is_empty(cb):
 * - Checks if buffer 'cb' is empty. Returns 1 if empty, 0 otherwise.
 *
 * 6. destroy_circular_buffer(cb):
 * - Frees all dynamically allocated memory for 'cb'.
 *
 * Data Structure (Define a C struct for this):
 * - Needs: pointer to integer array (storage), capacity, head index,
 * tail index, and a way to track item count (or infer full/empty state).
 *
 * Key Behavior:
 * - Implement proper wrap-around for head/tail indices.
 * - Ensure clear distinction between full and empty buffer states.
 *
 * Suggested Function Signatures (adapt as needed):
 */