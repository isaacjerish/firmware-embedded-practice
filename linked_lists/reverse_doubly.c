#include <stdlib.h> 
typedef struct DoublyListNode {
    int val;                   
    struct DoublyListNode *next;  
    struct DoublyListNode *prev; 
} DoublyListNode;

/*
 * Function: reverseDoublyList
 * ---------------------------
 * Reverses a given doubly-linked list in-place.
 *
 * head: A pointer to the first node of the list to be reversed.
 *
 * returns: A pointer to the new head of the reversed list.
 * (This will be the original tail of the list).
 *
 * Examples:
 * Input:  NULL <-> 1 <-> 2 <-> 3 <-> NULL
 * Output: NULL <-> 3 <-> 2 <-> 1 <-> NULL
 * (Arrows show next/prev: head_prev is NULL, tail_next is NULL)
 *
 * Input:  NULL <-> 1 <-> NULL
 * Output: NULL <-> 1 <-> NULL
 *
 * Input:  NULL
 * Output: NULL
 */
