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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return head;
        while (head->val == val && head->next != NULL) {
            head = head->next;
        }
        if (head->val == val) return NULL;
        ListNode *temp = head;
        while (temp->next != NULL && temp != NULL) {
            if (temp->next->val == val) {
                ListNode *deleteNode = temp->next;
                temp->next = temp->next->next;
                delete deleteNode;
            }
            else temp = temp->next;
        }  
        return head;
    }
};


// https://leetcode.com/problems/remove-linked-list-elements/description/
