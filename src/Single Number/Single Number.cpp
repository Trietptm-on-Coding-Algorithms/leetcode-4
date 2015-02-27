/**
 * sol1: map 
 * sol2: sort + iteration compare
 * sol3: xor, the "GOD" solution
 */

class Solution {
	public:
		int singleNumber(int A[], int n) {
			while(--n) A[n-1] ^= A[n];
			return A[0];
		}
};
