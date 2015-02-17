class Solution {
	public:
		string convertToTitle(int n) {
			string ret = "";
			while(n != 0)
			{
				ret = (char)( ( (n - 1) % 26 ) + 65 ) + ret;
				n = (n - 1) / 26;
			}
			return ret;
		}
};
