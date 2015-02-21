class Solution {
	public:
		vector<int> getRow(int rowIndex) {
			vector<int> ret(rowIndex+1, 1);
			if(rowIndex+1 <= 2) return ret;

			int row = 3, pre = 1;
			while(row <= rowIndex+1)
			{
				for (int i = 1; i < row; i++) 
				{
					int temp = ret[i];
					if(i == row-1) ret[i] = 1;
					else ret[i] = pre + ret[i];
					pre = temp;
				}
				row++;
			}
			return ret;
		}
};
