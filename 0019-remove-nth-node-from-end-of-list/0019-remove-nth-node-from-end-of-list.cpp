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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head ;
        else if(!head->next) return nullptr;
        else{
            ListNode * p =new ListNode(0, head) , * q = p ;
            while(n!=0){
                head = head -> next;
                n--;
            }
            while(head!=nullptr){
                head = head -> next;
                q = q -> next;
            }
            q->next = q->next->next;
            return p->next; 
        }

    }
};