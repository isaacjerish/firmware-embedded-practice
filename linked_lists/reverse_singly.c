typedef struct ListNode {
    int val;                
    struct ListNode *next;  
} ListNode;

/*
 * Function: reverseList
 * ---------------------
 * Reverses a given singly-linked list in-place.
 *
 * head: A pointer to the first node of the list to be reversed.
 *
 * returns: A pointer to the new head of the reversed list.
 *
 * Examples:
 * Input:  1 -> 2 -> 3 -> NULL
 * Output: 3 -> 2 -> 1 -> NULL
 *
 * Input:  1 -> NULL
 * Output: 1 -> NULL
 *
 * Input:  NULL
 * Output: NULL
 */
ListNode* reverseList(ListNode* head);