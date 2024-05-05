#include "main.h"
#include <stdlib.h>

void deleteNode(struct ListNode* node) 
{
    struct ListNode *ptr;

    if (node == NULL)
    return;
    else 
    {
        if (node->next == NULL)
        return;
        
        ptr = node->next;
        node->val = ptr->val;
        node->next = ptr->next;
        free(ptr);
    }
}