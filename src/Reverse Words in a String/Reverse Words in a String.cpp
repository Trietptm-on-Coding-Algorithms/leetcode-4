class Solution {
	public:
		void reverseWords(string &s)
		{
			stack<string>mystack;
			string cur = "";
			int len = s.length();

			for (int i = 0; i < len; i++) 
			{
				char c = s[i];

				if(c == ' ')
				{
					if(cur.length() > 0) 
					{
						mystack.push(cur);
						cur = "";
					}
				}
				else
				{
					cur += c;
					if(i == len-1) mystack.push(cur);
				}
			}

			s = "";
			while(!mystack.empty())
			{
				if(!s.length()) s += mystack.top();
				else s += " "+mystack.top();
				mystack.pop();
			}
		}
};
