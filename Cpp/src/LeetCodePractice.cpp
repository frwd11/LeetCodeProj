#include "LeetCodePractice.h"

vector<int> P1twoSum01(vector<int>& nums, int target)
{
	std::vector<int> vecResult;
    for (size_t i=0; i<nums.size(); ++i)
    {
    		for (size_t j=i+1; j<nums.size(); ++j)
    		{
    			if (nums[i] + nums[j] == target)
    			{
    				vecResult.push_back(i);
    				vecResult.push_back(j);
    				break;
    			}
    		}
    }

    return vecResult;
}

vector<int> P1twoSum02(vector<int>& nums, int target)
{
    map<int, vector<int>> mapIn;
    map<int, vector<int>>::iterator itFind;
    for (size_t i=0; i<nums.size(); ++i)
    {
        itFind = mapIn.find(nums[i]);
        if (itFind != mapIn.end())
        {
            itFind->second.push_back(i);
        }
        else
        {
            vector<int> vec;
            vec.push_back(i);
            mapIn.insert(pair<int, vector<int>>(nums[i], vec));
        }
    }

    std::vector<int> vecResult;

    int nSub;
    map<int, vector<int>>::iterator itSub;
    for (map<int, vector<int>>::iterator it = mapIn.begin(); it != mapIn.end(); ++it)
    {
        nSub = target - it->first;
        itSub = mapIn.find(nSub);
        if (itSub != mapIn.end())
        {
            if (itSub == it)
            {
                vecResult.push_back(it->second[0]);
                vecResult.push_back(it->second[1]);
            }
            else
            {
                vecResult.push_back(it->second[0]);
                vecResult.push_back(itSub->second[0]);
            }

            break;
        }
    }
    return vecResult;
}

vector<int> P1twoSum03(vector<int>& nums, int target)
{
    map<int, int> mapIn;
    map<int, int>::iterator itFind;
    std::vector<int> vecResult;
    int nSub;
    for (size_t i=0; i<nums.size(); ++i)
    {
        nSub = target - nums[i];
        itFind = mapIn.find(nSub);
        if (itFind != mapIn.end())
        {
            vecResult.push_back(itFind->second);
            vecResult.push_back(i);
            break;
        }
        else
        {
            mapIn.insert(pair<int, int>(nums[i], i));
        }
    }

    return vecResult;
}
