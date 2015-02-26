class Solution {
	public:
		bool isValidSudoku(vector<vector<char> > &board) 
		{
			// horizontal
			for (int row = 0; row < 9; row++) 
			{
				bool check[10] = {};
				for (int col = 0; col < 9; col++) 
				{
					char c = board[row][col];
					if(c != '.')
					{
						if(check[c-'0']) return false;
						else check[c-'0'] = true;
					}
				}
			}

			//vertical
			for (int col = 0; col < 9; col++) 
			{
				bool check[10] = {};
				for (int row = 0; row < 9; row++) 
				{
					char c = board[row][col];
					if(c != '.')
					{
						if(check[c-'0']) return false;
						else check[c-'0'] = true;
					}
				}
			}

			//block
			for (int row = 0; row < 3; row++) 
			{
				for (int col = 0; col < 3; col++) 
				{
					bool check[10] = {};
					for(int i = 0 ; i < 3 ; i++)
					{
						for (int j = 0; j < 3; j++) 
						{
							char c = board[ row*3 + i ][ col*3 + j ];
							if(c != '.')
							{
								if(check[c-'0']) return false;
								else check[c-'0'] = true;
							}
						}
					}
				}
			}
			return true;
		}
};
