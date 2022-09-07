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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* result = new ListNode(); 
        ListNode* temp = result ; 
        while(list1 || list2){
            ListNode* node = new ListNode() ; 
            if(list1 == nullptr  || (list2!=nullptr && list2->val  <=  list1->val )){
                node->val = list2->val ;
                list2 = list2->next; 
                 
            }
            else if(list2 ==nullptr || (list1 !=nullptr && list1->val < list2->val)){
                node->val = list1->val ; 
                list1 = list1->next; 
            }
         
            temp->next = node; 
            temp = temp->next;
        }
        
        return result->next; 
    }
};