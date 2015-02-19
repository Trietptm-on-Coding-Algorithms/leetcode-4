class Solution {
	public:
		string longestCommonPrefix(vector<string> &strs) {
			if(!strs.size()) return "";
			if(strs.size() == 1) return strs[0];

			int pos = 0, len = strs[0].length();
			while(pos < len)
			{
				for(int i = 1 ; i < strs.size() ; i++)
				{
					if(strs[i][pos] != strs[0][pos]) return strs[0].substr(0, pos); 
				}
				pos++;
			}
			return strs[0];
		}
};
