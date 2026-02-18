/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mesclar( struct ListNode* l1,  struct ListNode* l2 ) {

    struct ListNode dummy;
    dummy.next = NULL;

    struct ListNode* atual = &dummy;

    while ( l1 != NULL && l2 != NULL ) {

        if ( l1->val < l2->val ) {
            atual->next = l1;
            l1 = l1->next;
        } else {
            atual->next = l2;
            l2 = l2->next;
        }
        atual = atual->next;
    }

    if ( l1 != NULL ) {
        atual->next = l1;
    } else {
        atual->next = l2;
    }
    return dummy.next;
}

struct ListNode* sortList(struct ListNode* head) {
    if ( head == NULL || head->next == NULL ) {
        return head;
    }

    struct ListNode* anterior = NULL;
    struct ListNode* lento = head;
    struct ListNode* rapido = head;

    while ( rapido != NULL && rapido->next != NULL ) {
        anterior = lento;
        lento = lento->next;
        rapido = rapido->next->next;
    }

    anterior->next = NULL;

    struct ListNode* lista1 = sortList(head);
    struct ListNode* lista2 = sortList(lento);

    return mesclar(lista1, lista2);
}