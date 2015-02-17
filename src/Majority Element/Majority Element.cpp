class Solution {
	public:
		int majorityElement(vector<int> &num) {
			map<int, int> cnt;
			int num_size = num.size();
			for(int i = 0 ; i < num_size ; i++)
			{   
				cnt[num[i]]++;
				if(cnt[num[i]] > (num_size>>1) ) return num[i];           
			}   
		}
};
