/*
 *
 * Given the head of a linked list, remove the nth node from the end of the list and return its head.

Follow up: Could you do this in one pass?

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]


*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
 Beats 85.77% of cpp submissions.
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int counter = 0;
        ListNode *temp, *temp2;
        temp = head;
        temp2 = NULL;
        while(temp){
            temp = temp->next;
            counter++;
            
        }
        if(counter==1){
            return temp2;
        }
        if(counter==n){
            head=head->next;
            return head;
        }
        temp2 = head;
        for(int i=0;i<counter-n-1;i++){
            head = head->next;
        }
        head->next = head->next->next;
        return temp2;
    }
};
