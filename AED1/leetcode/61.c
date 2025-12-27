/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* rotateRight(struct ListNode* head, int k) {

    if ( head == NULL || head->next == NULL || k == 0 ) {
        return head;
    }

    struct ListNode* no_atual = head;
    struct ListNode* cauda = NULL; 
    int tamanho = 0;
    int k_atual = k;

    while ( no_atual != NULL ) {
        cauda = no_atual;
        no_atual = no_atual->next;
        tamanho++;
    }

    while (k_atual >= tamanho) {
        k_atual = k_atual - tamanho;
    }
    
    if (k_atual == 0) {
        return head;
    }

    cauda->next = head;

    int passos_ncauda = tamanho - k_atual;
    
    struct ListNode* nova_cauda = head;

    for (int i = 0; i < passos_ncauda - 1; i++) {
        nova_cauda = nova_cauda->next;
    }

    head = nova_cauda->next;
    nova_cauda->next = NULL; 

    return head;
}