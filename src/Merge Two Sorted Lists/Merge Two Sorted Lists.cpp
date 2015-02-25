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
		ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
			if(!l1 && !l2) return NULL;
			if(!l1) return l2;
			if(!l2) return l1;

			ListNode *ret = NULL, *cur1 = l1, *cur2 = l2;

			if(cur1->val < cur2->val)
			{
				ret = cur1;
				cur1 = cur1->next;
			}
			else
			{
				ret = cur2;
				cur2 = cur2->next;
			}
			ListNode *now = ret;

			while(cur1 && cur2)
			{
				if(cur1->val < cur2->val)
				{
					now->next = cur1;
					cur1 = cur1->next;
				}
				else
				{
					now->next = cur2;
					cur2 = cur2->next;
				}
				now = now->next;
			}
			while(cur1)
			{
				now->next = cur1;
				cur1 = cur1->next;
				now = now->next;
			}
			while(cur2)
			{
				now->next = cur2;
				cur2 = cur2->next;
				now = now->next;
			}
			return ret;
		}
};
