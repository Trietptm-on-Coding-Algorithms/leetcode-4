class Solution {
	public:
		int removeDuplicates(int A[], int n) {
			if(n < 2) return n;

			int size=1, now=A[0];
			for(int i = 1 ; i < n ; i++)
			{
				if(A[i] != now)
				{
					A[size] = A[i];
					size++;
					now = A[i];
				}
			}
			return size;
		}
};
