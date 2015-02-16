class Solution {
	public:
		string countAndSay(int n) 
		{
			if(n == 1) return "1";

			string pre = "1", cur = "";

			for(int i = 1 ; i < n  ; i++)
			{
				char pre_char = pre[0];
				int cnt = 0;
				
				/*iterate to pre[len] for handling the last char*/
				for(int j = 0 ; j <= pre.length() ; j++)
				{
					char c = pre[j];

					if( c == pre_char ) cnt++;
					else
					{
						char temp[5] = {};
						sprintf(temp, "%d", cnt);
						string num(temp);

						cur += (num + pre_char);
						pre_char = c;
						cnt = 1;
					}
				}
				pre = cur;
				cur = "";
			}
			return pre;
		}
};
