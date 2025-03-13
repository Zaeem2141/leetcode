/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next==nullptr) return head;
        else{
            ListNode * first= head , * second=head , * fast ;
            for (int i=1 ; i<k ; i++) {
                first = first -> next;
            }
            fast= first;
            while(fast->next){
                second= second -> next;
                fast = fast -> next;
            }
            int temp = first->val;
            first->val =second->val;
            second -> val = temp;
            return head;
        }
    }
};