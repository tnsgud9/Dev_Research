#include <stack>
#include <string>
#include <iostream>
#include <vector>

using namespace std;


void main()
{
	string str;
	cin >> str;

	stack <int> st;
	int answer = 0;

//  '(' == -1
	for (char ch : str)
	{
		if (ch == '(') st.push(-1);
		else {
			int lazer = 0;
			while (!st.empty())
			{
				int top = st.top();
				st.pop();
				if (top == -1) break;
				else
					lazer += top;
			}
			if (lazer == 0) st.push(1);
			else
			{
				answer += lazer + 1;
				st.push(lazer);
			}
		}
	}
	cout << answer;

}