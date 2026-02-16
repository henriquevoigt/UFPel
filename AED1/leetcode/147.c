/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* insertionSortList( struct ListNode* head ) {
    if ( head == NULL || head->next == NULL ) {
        return head;
    }

    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));

    dummy->val = 0;
    dummy->next = NULL;

    struct ListNode* atual = head;

    while ( atual != NULL ) {
        
        struct ListNode* proximo = atual->next;
        struct ListNode* temp = dummy;

        while ( temp->next != NULL && temp->next->val < atual->val ) {
            temp = temp->next;
        }

        atual->next = temp->next;
        temp->next = atual;

        atual = proximo;
    }

    struct ListNode* resultado = dummy->next;

    free(dummy);

    return resultado;

}