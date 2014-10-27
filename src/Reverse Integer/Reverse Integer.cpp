class Solution {
	public:
		int reverse(int x) {

			int ret = 0;
			int temp = abs(x);

			while(temp != 0)
			{
				ret = ret *10 + (temp - temp/10*10);                            
				temp /= 10;
			}
			if (x < 0) return -ret;
			else return ret;
		}
};
