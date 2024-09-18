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

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        int pos = size(head) - n;
        if (pos == 0) {
            ListNode *deleteNode = head;
            head = head->next;
            delete deleteNode;
        }
        else {
            for (int i = 0; i < pos - 1; i++) {
                temp = temp->next;
            }
            ListNode *deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
        }
        return head;
    }
};


// https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
