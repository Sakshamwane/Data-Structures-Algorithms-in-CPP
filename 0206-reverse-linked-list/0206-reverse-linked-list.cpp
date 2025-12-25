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
    ListNode* reverseList(ListNode* head) {
       //Stack to store values of nodes
       stack<int> st;

       //Temporary pointer to traverse the list
       ListNode* temp = head;

       //Traverse and push all node values to stack
       while(temp != NULL){
        st.push(temp->val);
        temp = temp->next;
       } 

       //Reset temp to head
       temp=head;

       //Reassign values from stack in reverse order
       while(temp != NULL){
        temp -> val = st.top();
       st.pop();
       temp = temp -> next;
       }
    return head;
    }
};