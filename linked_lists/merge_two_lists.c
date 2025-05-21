typedef struct ListNode {
    int val;                
    struct ListNode *next;  
} ListNode;

/*
 * Function: mergeTwoSortedLists
 * -----------------------------
 * Merges two already sorted singly-linked lists into a single, new sorted list.
 * The new list should be made by splicing together the nodes of the first two lists.
 * Do not create new nodes; reuse the existing ones.
 *
 * list1: A pointer to the head of the first sorted singly-linked list.
 * list2: A pointer to the head of the second sorted singly-linked list.
 *
 * returns: A pointer to the head of the merged sorted singly-linked list.
 *
 * Example:
 * list1 = 1 -> 2 -> 4 -> NULL
 * list2 = 1 -> 3 -> 4 -> NULL
 * Output: 1 -> 1 -> 2 -> 3 -> 4 -> 4 -> NULL
 *
 * Edge Cases:
 * - If either list is NULL, return the other list.
 * - If both are NULL, return NULL.
 */