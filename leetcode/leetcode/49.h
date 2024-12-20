#pragma once
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
#include "tool.h"

using namespace std;

//×ÖÄ¸ÒìÎ»´Ê·Ö×é
class Solution49 {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		vector<vector<string>> res;
		unordered_map<string, vector<string>> maps;

		for (auto i : strs)
		{
			string temp = i;
			sort(temp.begin(), temp.end());
			maps[temp].push_back(i);
		}

		for (auto& pair : maps)
			res.push_back(pair.second);

		return res;
	}
};

void test49()
{
	Solution49 s;
	vector<string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
	auto res = s.groupAnagrams(strs);

	Tool<vector<string>> tool;
	tool.show2dVector(res);
}

