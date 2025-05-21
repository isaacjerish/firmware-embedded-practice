#include <stdlib.h>
typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;
ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;  
    ListNode* current = head;
    ListNode* next_temp = NULL;
    while (current != NULL) {
        next_temp = current->next; 
        current->next = prev;
        prev = current;
        current = next_temp;
    }
    return prev;
}