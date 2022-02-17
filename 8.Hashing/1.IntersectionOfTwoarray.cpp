#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
	int intersectionOfTwoarray(vector<int> &num1, vector<int> &num2)
	{
		unordered_set<int> mp1, mp2;
		int count;
		for (auto x : num1)
			mp1.insert(x);
		for (auto x : num2)
			mp2.insert(x);
		for (auto x : mp1)
		{
			if (mp2.find(x) != mp2.end())
				count++;
		}
		return count;
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