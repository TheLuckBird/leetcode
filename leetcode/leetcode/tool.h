#pragma once

#include <vector>
#include <iostream>

using namespace std;

template<typename T>
class Tool
{
public:

	void show1dVector(vector<T>& vec)
	{
		for (auto i : vec)
		{
			cout << i << " ";
		}
		cout << endl;
	}

	void show2dVector(vector<T>& vec)
	{
		for (auto v : vec)
		{
			for (auto i : v)
			{
				cout << i << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
};
