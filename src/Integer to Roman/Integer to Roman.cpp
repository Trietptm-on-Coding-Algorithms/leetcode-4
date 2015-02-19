class Solution {
	public:
		string one[9] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
		string ten[9] = {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
		string hundred[9] = {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
		string thousand[3] = {"M", "MM", "MMM"};

		string intToRoman(int num) {
			string ret = "";
			int cnt = 0;
			while(num)
			{
				int cur = num % 10;
				if(cur) 
				{
					if(!cnt) ret = one[cur-1] + ret;
					else if(cnt == 1) ret = ten[cur-1] + ret;
					else if(cnt == 2) ret = hundred[cur-1] + ret;
					else if(cnt == 3) ret = thousand[cur-1] + ret;
				}
				cnt++;
				num /= 10;
			}
			return ret;
		}
};
