/**
 * 
 * 
 * You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

 * You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 * Example:

 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807. 
 * 
 * 
 * 
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result = new ListNode(0), *firstlist=l1, *secondlist=l2;
        ListNode *head=result;
        int total=0;
       
        while(firstlist!=NULL||secondlist!=NULL){
        if(firstlist!=NULL){
            total+= firstlist->val;
            firstlist = firstlist->next;
        }
        if(secondlist!=NULL){
            total+= secondlist->val;
            secondlist = secondlist->next;
        }
        result->val = total%10;
        total/=10;
        if(firstlist!=NULL||secondlist!=NULL||total!=NULL){
            result->next = new ListNode(total);
            result = result->next;
        }
    }
    return head;
}};
