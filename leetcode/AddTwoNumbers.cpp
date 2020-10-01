class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head2 = l2;
        int add=0, carri=0;
        while(l1->next != NULL && l2->next != NULL){
            add = l1->val + l2->val +carri;
            l2->val = add%10;
            carri = add/10;
            l1 = l1->next; l2=l2->next;
        }
        if(l1->next == NULL && l2->next == NULL){
            add = l1->val + l2->val + carri;
            if(add > 9){
                l2->val = add%10;
                carri = add/10;
                ListNode* temp = new ListNode(carri);
                l2->next = temp;
            }
            else{
                l2->val = add%10;
                carri = add/10;
            }
        }
        else if(l1->next == NULL){
            while(l2->next != NULL){
                add = l1->val + l2->val + carri;
                l1->val=0;
                l2->val = add%10;
                carri = add/10;
                l2=l2->next;
            }
            add = l2->val + carri;
            if(add > 9){
                l2->val = add%10;
                carri = add/10;
                ListNode* temp = new ListNode(carri);
                l2->next = temp;
            }
            else{
                l2->val = add%10;
                carri = add/10;
            }
        }
        else if(l2->next == NULL){
            l2->next = l1->next;
            while(l2->next != NULL){
                add = l1->val + l2->val + carri;
                l1->val=0;
                l2->val = add%10;
                carri = add/10;
                l2=l2->next;
            }
            add = l2->val + carri;
            if(add > 9){
                l2->val = add%10;
                carri = add/10;
                ListNode* temp = new ListNode(carri);
                l2->next = temp;
            }
            else{
                l2->val = add%10;
                carri = add/10;
            }
        }
        return head2;
    }
};
