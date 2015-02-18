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
		/**
		 * 1. get list1 & list2's length
		 * 2. the longer one will start at index abs(len1-len2)
		 * 3. traverse the list simultaneously
		 * 4. if both reach the same node ( = same value ), return node
		 * 5. or else return NULL
		 * */

		ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
			if(!headA || !headB) return NULL;

			int len1 = 0, len2 = 0;
			ListNode *cur = headA, *cur2;

			while(cur != NULL)
			{
				len1++;
				cur = cur->next;
			}

			cur = headB;
			while(cur != NULL)
			{
				len2++;
				cur = cur->next;
			}

			if(len1 > len2) //headA is longer, move forward
			{
				cur = headA;
				cur2 = headB;
				for(int i = 0 ; i < (len1-len2) ; i++)
				{
					cur = cur->next;
				}
			}
			else
			{
				cur = headB;
				cur2 = headA;
				for(int i = 0 ; i < (len2-len1) ; i++)
				{
					cur = cur->next;
				}

			}

			while(cur && cur2)
			{
				if(cur->val == cur2->val) return cur;
				cur = cur->next;
				cur2 = cur2->next;
			}

			return NULL;
		}
};
