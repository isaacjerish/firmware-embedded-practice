#include <stdlib.h>
typedef struct ListNode {
    int val;                
    struct ListNode *next;  
} ListNode;
ListNode* mergeTwoSortedLists(ListNode* list1, ListNode* list2) {
    if (!list1 && !list2) {
        return NULL;
    }
    if (!list1) {
        return list2;
    }
    if (!list2) {
        return list1;
    }
}
