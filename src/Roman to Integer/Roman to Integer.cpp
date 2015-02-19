class Solution {
	public:
		int romanToInt(string s) {
			int rom[100] = {}; 
			rom['I'] = 1, rom['V'] = 5, rom['X'] = 10, rom['L'] = 50;
			rom['C'] = 100, rom['D'] = 500, rom['M'] = 1000;

			int sum = 0;

			for(int i = 0 ; i < s.length() ; i++)
			{
				char c = s[i], next = s[i+1];
				if(c == 'I' || c == 'X' || c == 'C') 
				{
					/**
					 * actually we don't have to use the outter if-statement
					 * since we don't have to care about the invalid input
					 * we can just use if(rom[next] > rom[c]){...} to calculate the right answer
					 * but then it will run slightly slower than adding the outter if-statement
					 * since the latter case doesn't have to access rom[] all the time
					 * */
					if(rom[next] > rom[c])
					{
						sum += rom[next] - rom[c];
						i++;
					}
					else sum += rom[c];
				}
				else sum += rom[c];
			}
			return sum;
		}
};
