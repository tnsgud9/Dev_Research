#include <iostream>
#include <vector>
#include <string>


using namespace std;


void main() {
	vector <int> Acard(10) , Bcard(10);
	int awin = 0, bwin = 0;
	for (int i = 0; i < 10; i++) cin >> Acard[i];
	for (int i = 0; i < 10; i++) cin >> Bcard[i];

	for (int i = 0; i < 10; i++)
	{
		if (Acard[i] > Bcard[i]) awin++;
		else if (Acard[i] < Bcard[i]) bwin++;
	}
	if(awin>bwin)

}