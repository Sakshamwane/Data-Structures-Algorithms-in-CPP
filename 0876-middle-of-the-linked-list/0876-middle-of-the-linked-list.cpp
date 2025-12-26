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
    ListNode* middleNode(ListNode* head) {
        //Intialise temp pointer to head
        ListNode* temp = head;

        //Intialise counter
        int count = 0;

        //Traverse the list & count the number of nodes
        while(temp != NULL){
            count++;
            temp = temp -> next;
        }

        //Calculate mid 
        int mid = count/2 +1;
        //Reintialise temp pointer to head
        temp = head;

        //Traverse to the mid position
        while(temp != NULL){
            mid--;
            if(mid == 0) break;
            temp = temp-> next;
        }
        //Return mid
        return temp;
    }
};