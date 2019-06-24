#include <stdio.h>
#include <algorithm>
#define N 10

bool compare(const int &i,const int &j)
{
	return i < j;
}

int A[N];
void main()
{
	int i, n;

	scanf("%d", &n);


	for (i = 1; i <= n; i++)
	{
		scanf("%d", &A[i]);
	}

	sort(A + 3, A + 7, compare);
}




/*

#include <stdio.h>
#include <algorithm>
#define N 10

struct abc
{
	char start;
	char end;
	int v;
}A[N];
using namespace std;

void input()
{
	int n, k;
	int i, j;

	scanf("%d %d", &n, &k);

	for (i = 1; i <= n; i++)
	{
		scanf("\n%c %c %d", &A[i].start, &A[i].end, &A[i].v);
	}
}

bool compare(const abc &i, const abc &j)
{
	if (i.v == j.v)
		return i.start < j.start;
	else
		return i.v < i.v;
	
	return i.v < i.v;
}

void main()
{
	int i, k;
	input();
	sort(A + 1, A + k + 1, compare);
}


*/






/*
#include <stdio.h>


struct data
{
	int weight;
	char sNode;
	char eNode;
};

void main()
{
	data arr;

	int in;
	scanf("%d ", &in);

	for (int i = 1; i <= in; i++)
		scanf("%d %c %c", &arr.weight, &arr.sNode, &arr.eNode);


	
}



#include <iostream>
#include <set>
#include <map>



using namespace std;
void main()
{
	map<int, char, char> data; //가중치, 시작노드 , 탈출노드;
	int start;
	cin >> start;

	int i, j;
	for (i = 1; i <= start; i++)
	{
		int g; char n1, n2;
		cin >> g >> n1 >> n2;
		
		data.insert(g, n1, n2);


	}
		

}

*/