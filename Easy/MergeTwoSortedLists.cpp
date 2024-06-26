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

 //we want to merge two list togther in order.
 //we can start with commapring the two list and if the head of the fist list is bigger then list two then we can make a new list and put that on the new list.
 //once we have are new list we can deleate the list and then return the new list in ordered 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy, *temp;
        dummy = new ListNode();
        temp = dummy;

        //base cases
        if(list1 == NULL)
        {
            return list2;
        }

        if(list2 == NULL)
        {
            return list1;
        }

        //while the list1 is not empty and list2 is not empty
        while(list1 && list2)
        {
            if(list1->val < list2->val)
            {
                temp->next = list1;
                list1 = list1->next;
            }
            else
            {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp ->
        } 
        if(list1) temp->next = list1;
        if(list2) temp->next = list2;

        return dummy->next;
    }
};