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
    int size(ListNode *head) {
        ListNode *temp = head;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }


    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp1 = head;
        for (int i = 0; i < k - 1; i++) {
            temp1 = temp1->next;
        }
        
        int a = size(head) - k;
        ListNode *temp2 = head;
        for (int i = 0; i < a; i++) {
            temp2 = temp2->next;
        }

        swap(temp1->val, temp2->val);
        return head;
    }
};


// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/
