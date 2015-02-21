/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
	public:
		ListNode *removeNthFromEnd(ListNode *head, int n) {
			ListNode *cur = head, *pre;
			vector<ListNode*>record;

			while(cur)
			{
				record.push_back(cur);
				cur = cur->next;
			}

			int index = record.size() - n;
			if(!index) return head->next;
			else
			{
				cur = record[index];
				pre = record[index-1];
				pre->next = cur->next;
				return head;
			}
		}
};
