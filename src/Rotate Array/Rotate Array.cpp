class Solution {
	public:
		void rotate(int nums[], int n, int k) {
			if(!k || !(k%n) ) return;
			k = k%n;
			vector<int> temp(nums, nums+n);
			int start = n-k;
			for(int i = 0 ; i < n ; i++)
			{
				nums[i] = temp[start++];
				if(start == n) start = 0;
			}
		}
};
