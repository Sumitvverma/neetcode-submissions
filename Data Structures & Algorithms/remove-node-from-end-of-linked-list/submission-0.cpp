class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> nodes;
        ListNode* cur = head;
        while (cur != nullptr) {
            nodes.push_back(cur);
            cur = cur->next;
        }

        int removeIndex = nodes.size() - n;
        if (removeIndex == 0) {
            return head->next;
        }

        nodes[removeIndex - 1]->next = nodes[removeIndex]->next;
        return head;
    }
};