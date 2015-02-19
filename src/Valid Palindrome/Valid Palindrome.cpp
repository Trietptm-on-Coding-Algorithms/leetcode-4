class Solution {
	public:
		bool isPalindrome(string s) {
			string real = "";
			for (int i = 0 ; i < s.length() ; i++)
			{
				char c = s[i];
				if(isdigit(c) || isalpha(c) )
				{
					if(isalpha(c)) c = tolower(c);
					real += c;
				}
			}

			int len = real.length();
			if(!len) return true;

			int pos1 = 0, pos2 = len-1, end = len>>1;
			while(true)
			{
				if( pos1 == end ) return true;
				if(real[pos1] == real[pos2])
				{
					pos1++;
					pos2--;
				}
				else return false;
			}
		}
};
