class Solution {
	public:
		bool isValid(string s) 
		{
			map<char, char> pairing;
			pairing[')'] = '(';
			pairing[']'] = '[';
			pairing['}'] = '{';

			stack<char> mystack;
			for(int i = 0 ; i < s.length() ; i++)
			{
				char c = s[i];
				if(c == '(' || c == '[' || c == '{')
				{
					mystack.push(c);
				}
				else
				{
					if( !mystack.empty() && ( mystack.top() == pairing[c] ) )
					{
						mystack.pop();
					}
					else
					{
						return false;
					}
				}
			}

			if(mystack.empty()) return true; //stack empty
			else return false;

		}
};
