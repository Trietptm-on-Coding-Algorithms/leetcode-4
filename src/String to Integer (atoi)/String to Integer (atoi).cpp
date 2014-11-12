class Solution {
	public:
		int atoi(const char *str) {

			bool inDigit = false;
			bool isNeg = false;
			bool hasPlus = false;
			long long int num = 0;

			for (int i = 0; i < strlen(str); i++) 
			{
				char c = *(str+i);

				if(isdigit(c))
				{
					inDigit = true;
					num = (long long int)((long long int)(num*10) + c - '0');

					if(isNeg)
					{
						if(num > (long long int)2147483648) return -2147483648;
					}
					else
					{
						if(num > 2147483647) return 2147483647;
					}
				}
				else if(c == '-' || c == '+')
				{
					if(inDigit) break;
					else
					{
						if(hasPlus || isNeg) return 0;
						else
						{
							if(c == '-') isNeg = true;
							else hasPlus = true;
						}
					}
				}
				else if(c == ' ')
				{
					if(inDigit) break;
					else
					{
						if(isNeg || hasPlus) return 0; 
						else continue;
					}
				}
				else
				{
					if(inDigit) break;
					else return 0;
				}
			}

			if(isNeg) return (int)-num;
			else return (int)num;
		}
};
