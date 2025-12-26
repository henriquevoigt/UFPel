struct ListNode {
    int val;
    struct ListNode *next;
  };

struct ListNode* middleNode(struct ListNode* head) {
    
    struct ListNode *middle = head;
    int tamanho = 0;

    while ( 1 ) {
        if ( middle->val >= 1 && middle->val <= 100 ) {
            tamanho++;
            middle = middle->next;
        } else {
            break;
        }
    }

    if ( tamanho % 2 == 0 ) {
        for ( int i = (tamanho / 2) + 1; i <= tamanho; i++ ) {
            printf("%d ", )
        }
    }

    
}