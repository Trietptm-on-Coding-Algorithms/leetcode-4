class Solution {
	public:
		int lengthOfLastWord(const char *s) {
			int len = strlen(s);
			if(!len) return 0;

			int ret = 0, start = len-1;
			while(s[start] == ' ' && start >= 0 ) start--;

			for (int i = start ; i >= 0; i--) 
			{   
				if(s[i] == ' ') return ret;
				else ret++;
			}   
			return ret;
		}
};
