#include "buzz.hpp"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	vector<string> inp, res;

	for (int i = 1; i < argc; i++)
	{
		inp.push_back(string(argv[i]));
	}

	res = fizzbuzz(inp);

	for (auto item : res)
		cout << item << " ";

	cout << endl << "Done!" << endl;

	return 0;
}