#include <stack>
#include <string>
#include <iostream>
#include <vector>

using namespace std;


void main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	vector<char> answer;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	stack<int> st;
	int apos = 0;
	while (true)
	{
		if (st.top() == a[apos]) {
			st.pop();
			answer.push_back('-');
			apos += 1;
		}
		else
			break;
	}

	for (int i = 1; i <= n; i++)
	{
		st.push(i);
		answer.push_back('+');
		
	}
	if (st.empty())
	{
		for (char ch : answer) cout << ch << "\n";

	}
	else
		cout << "NO";
}