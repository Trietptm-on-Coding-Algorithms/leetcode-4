class Solution {
	public:
		vector<int> plusOne(vector<int> &digits) 
		{
			vector<int> ret ( digits.begin(), digits.end() );
			int len = ret.size();
			ret[len-1]++;

			for(int i = len-1 ; i > 0 ; i--)
			{   
				ret[i-1] += ret[i] / 10; 
				ret[i] %= 10; 
			}   

			if(ret[0] == 10) 
			{   
				ret[0] = 1;
				ret.push_back(0);
			}   

			return ret;
		}
};
