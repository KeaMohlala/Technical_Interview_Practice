#ifndef main_h
#define main_h
#include <stddef.h>

/**
 * struct ListNode - singly-linked list
 * @val: integer
 * @next: pointer to the next node
 * 
 * Description: singly linked list node structure
*/
typedef struct ListNode {
    int val;
    struct ListNode *next;
 };

void deleteNode(ListNode* node);
#endif