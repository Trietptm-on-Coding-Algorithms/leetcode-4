class Solution {
	public:
		string convert(string s, int nRows) {

			if(nRows == 1 || nRows > s.length()) return s;

			string arr[nRows];

			int cur_row = 0, step;
			for(int i = 0 ; i < s.length() ; i++)
			{
				if(!cur_row) step = 1;
				else if(cur_row == nRows-1) step = -1;

				arr[cur_row] += s[i];
				cur_row += step;
			}

			string ret = "";
			for(int i = 0 ; i < nRows ; i++)
			{
				ret += arr[i];
			}

			return ret;
		}
};
