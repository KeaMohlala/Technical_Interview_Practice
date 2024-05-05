#include "main.h"
#include <stdlib.h>

/**
 * deleteNode - function that deletes a node in a singly linked list without
 * access to the head of the list
 * @node: pointer to node to delete
*/

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