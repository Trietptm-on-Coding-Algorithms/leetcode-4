class Solution {
	public:
		void merge(int A[], int m, int B[], int n) {
			int index1=m-1, index2=n-1, now = m+n-1;
			while(index1 > -1 && index2 > -1)
			{
				if(A[index1] > B[index2]) A[now--] = A[index1--];
				else if(A[index1] <= B[index2]) A[now--] = B[index2--];
			}
			now = 0;
			// A's not need to operate anymore (cause the rest remain the same)
			while(now <= index2)
			{
				A[now] = B[now];
				now++;
			}
		}
};
