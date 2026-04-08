class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return nullptr;

        ListNode *current = head;
        while(current != nullptr && current->next != nullptr){
            ListNode *temp = current;
            while(temp->next != nullptr && temp->val == temp->next->val){
                temp = temp->next;
            }

            current->next = temp->next;
            current = current->next;
        }

        return head;
    }
};
