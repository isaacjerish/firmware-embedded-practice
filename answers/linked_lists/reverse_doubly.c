#include <stdlib.h> 
typedef struct DoublyListNode {
    int val;                   
    struct DoublyListNode *next;  
    struct DoublyListNode *prev; 
} DoublyListNode;
DoublyListNode* reverseDoublyList(DoublyListNode* head) {  
    DoublyListNode *ptr1 = head;
    DoublyListNode *ptr2 = ptr1->next;
    ptr1->next = NULL;
    ptr1->prev = ptr2;
    while (ptr2 != NULL) {
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
    }
    head = ptr1;
    return head;
}