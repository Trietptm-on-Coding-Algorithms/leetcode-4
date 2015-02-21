class Solution {
	public:
		vector<vector<int> > generate(int numRows) {
			vector< vector<int> > ret ( numRows, vector<int>(1,1) );
			if(numRows == 1) return ret;

			for (int i = 1; i < ret.size(); i++) 
			{
				for(int j = 1 ; j <= i ; j++ )
				{
					if(j == i) ret[i].push_back(1);
					else ret[i].push_back( ret[i-1][j-1] + ret[i-1][j] );
				}
			}
			return ret;   
		}
};	
