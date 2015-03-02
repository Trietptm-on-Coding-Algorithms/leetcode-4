class Solution {
	public:
		vector<int> twoSum(vector<int> &numbers, int target) {
			int size = numbers.size();
			map<int,int>check;
			map<int,int>::iterator it;
			vector<int> ret;
			for(int i = 0 ; i < size ; i++)
			{
				it = check.find(target-numbers[i]);
				if(it != check.end()) //found it
				{
					ret.push_back(it->second);
					ret.push_back(i+1);
					return ret;
				}
				else
				{
					check[numbers[i]] = i+1;
				}
			}
		}
};
