#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
	int intersectionOfTwoarray(vector<int> &num1, vector<int> &num2)
	{
		set<int> mp1, mp2;
		int count;
		for (auto x : num1)
			mp1.insert(x);
		for (auto x : num2)
			mp2.insert(x);
		auto it1 = mp1.begin();
		auto it2 = mp2.begin();
		while (it1 != mp1.end() || it2 != mp2.end())
		{
			int
		}
	}
};

int main()
{
	vector<int> num1 = {10, 15, 20, 15, 30, 30, 5};
	vector<int> num2 = {30, 5, 30, 80};
	solution ob1;
	cout << ob1.intersectionOfTwoarray(num1, num2);
	return 0;
}