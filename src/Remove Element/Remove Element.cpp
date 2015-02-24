class Solution {
	public:
		int removeElement(int A[], int n, int elem) {
			vector<int> temp(A, A+n);
			int index = 0;
			for(int i = 0 ; i < n ; i++)
			{
				if(temp[i] != elem) A[index++] = temp[i];
			}
			return index;
		}
};
