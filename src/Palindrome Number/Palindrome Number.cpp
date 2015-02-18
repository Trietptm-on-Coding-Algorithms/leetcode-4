class Solution {
	public:
		bool isPalindrome(int x) {
			if(x < 0) return false;

			int ret = 0, temp = x;
			while(temp != 0)
			{
				ret = ret *10 + (temp - temp/10*10);                            
				temp /= 10;
			}
			return x==ret;
		}
};	
