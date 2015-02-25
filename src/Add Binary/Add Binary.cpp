class Solution {
	public:

		string addBinary(string a, string b) 
		{
			if(a.length() < b.length()) swap(a, b);

			int len1 = a.length(), len2 = b.length(); //a is always longer
			int index1 = len1-1, index2 = len2 - 1, now = len1;
			vector<int>num(len1 + 1);

			while(index2 > -1) num[now--] = (a[index1--] - '0') + (b[index2--] - '0');
			while(index1 > -1) num[now--] = a[index1--]-'0';
			for (int i = len1; i >= 1; i--) //carry
			{   
				num[i-1] += num[i]/2;
				num[i] %= 2;
			}   

			int start = 0;
			while(!num[start] && start <= len1) start++;
			if(start == len1 + 1) return "0"; //all 0

			string ret = ""; 
			for (int i = start; i <= len1; i++) 
			{   
				ret += num[i]+'0';  
			}   
			return ret;
		}
};
