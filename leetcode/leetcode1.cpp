#include "leetcode1.h"

// method1 Ò»´Î¹þÏ£
vector<int> twoSum(vector<int>& nums, int target) 
{
	vector<int>res;
	map<int, int>a;
	for (int i = 0; i < nums.size(); i++) 
	{
		if (a.count(target - nums[i]) > 0)
		{
			res.push_back(a[target - nums[i]]);
			res.push_back(i);
			break;
		}
		a[nums[i]] = i;
	}
	return res;
}

// method2 ±©Á¦

vector<int> twoSum_1(vector<int>& nums, int target)
{
	vector<int>res;
	bool flag = false;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = 0; j < nums.size(); j++)
		{
			if (nums[i] + nums[j] == target)
			{
				res.push_back(i);
				res.push_back(j);
				flag = true;
				break;
			}
		}
		if (flag)
		{
			break;
		}
	}
	return res;
}