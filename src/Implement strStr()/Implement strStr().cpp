class Solution {
	public:
		int strStr(char *haystack, char *needle) {
			if(!needle || !haystack ) return -1;

			char *p1 = haystack;
			while(1)
			{
				char *now = p1, *p2 = needle;
				while(1)
				{   
					// reach the end of needle, has substring, return index
					if(!(*p2)) return (int)(p1-haystack);
					// if it reach the end of haystack but not end of the needle
					// then there's no substring, return -1
					if(!(*now)) return -1; 
					if(*now++ != *p2++) break;
				}
				p1++; //next index of haystack
			}   
			return -1;
		}
};
