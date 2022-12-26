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
        ListNode* temp = head ;
        int size = 0 ;  
        while(temp!=NULL){
            size++; 
            temp= temp->next; 
        }
        temp = head ; 
        ListNode* result; 
        for(int i= 0 ;i<=size/2;i++){
            if(i==size/2){
                result = temp; 
            }
            temp = temp->next ;
        }
        return result; 
    }
};