/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists( struct ListNode* list1, struct ListNode* list2 ) {
    if ( list1 == NULL ) {
        return list2;
    }
    if ( list2 == NULL ) {
        return list1;
    }
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = 0;
    dummy->next = NULL;

    struct ListNode* atual = dummy;

    while ( list1 != NULL && list2 != NULL ) {

        if ( list1->val <= list2->val ) {
            atual->next = list1;
            list1 = list1->next;
        } else {
            atual->next = list2;
            list2 = list2->next;
        }
        atual = atual->next;

    }

    if ( list1 != NULL ) {
        atual->next = list1;
    } else {
        atual->next = list2;
    }

    struct ListNode* resultado = dummy->next;
    free(dummy);
    return resultado;
}