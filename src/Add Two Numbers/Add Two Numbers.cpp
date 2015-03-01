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
		ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
			if(!l1) return l2;
			if(!l2) return l1;

			ListNode *cur1 = l1, *cur2 = l2, *pre1 = l1;
			while(1)
			{
				if(!cur1)
				{
					if(cur2) pre1->next = cur2;
					break;
				}
				if(cur2) cur1->val += cur2->val;
				else break;

				pre1 = cur1;
				cur1 = cur1->next;
				cur2 = cur2->next;
			}

			cur1 = l1;
			while(cur1) //carry
			{
				if(cur1->next)
				{
					cur1->next->val += cur1->val/10;
					cur1->val %= 10;
					cur1 = cur1->next;
				}
				else
				{
					if(cur1->val >= 10)
					{
						cur1->val -= 10;
						cur1->next = new ListNode(1);
					}
					break;
				}
			}
			return l1;
		}
};
