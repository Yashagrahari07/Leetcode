class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        if(head == NULL) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* temp = dummy;
        while(temp->next != NULL){
            int sum = 0;
            ListNode* current = temp->next;
            while(current != NULL){
                sum += current->val;
                if(sum == 0){
                    temp->next = current->next;
                    break;
                }
                current = current->next;
            }
            if(sum != 0){
                temp = temp->next;
            }
        }
        return dummy->next;
    }
};