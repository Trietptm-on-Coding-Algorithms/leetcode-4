class Solution {
	public:
		string mysplit(string version, int &pos)
		{
			string ret = "";
			for(int i = pos ; i < version.length() ; i++)
			{
				pos++;
				if(version[i] == '.')	 break;
				else ret += version[i];
			}
			return ret;
		}

		int compareVersion(string version1, string version2) 
		{
			int pos1 = 0, pos2 = 0;

			while(1)
			{
				string str1 = mysplit(version1, pos1);
				string str2 = mysplit(version2, pos2);
				int num1 = atoi(str1.c_str());
				int num2 = atoi(str2.c_str());

				if(num1 > num2) return 1;
				else if (num1 < num2) return -1;
				else
				{
					/*if end of the version string, return 0 (same)*/
					if(pos1 == version1.length() && pos2 == version2.length() ) return 0;
				}
			}
		}
};
