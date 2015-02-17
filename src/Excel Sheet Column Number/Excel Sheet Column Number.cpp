class Solution {
	public:
		int titleToNumber(string s) {
			int cur = 1, sum = 0;
			for(int i = s.length()-1 ; i >= 0 ; i--)
			{   
				sum += cur * (s[i] - 64);
				cur *= 26; 
			}   
			return sum;
		}
};
