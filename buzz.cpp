#include <iostream>
#include <string>

using namespace std;


string sum_digit(const string& inp)
{
	int res = 0;
	for (auto i : inp)
		res += i - '0';
	return to_string(res);
}

bool check_div3(const string& inp)
{
	string digit = inp;
	while (sum_digit(digit) != digit)
		digit = sum_digit(digit);
	
	return (digit == "3") || (digit == "6") || (digit == "9");
}

bool check_div5(const string& inp)
{
	return ((inp[inp.size() - 1] =='0') || (inp[inp.size() - 1] == '5'));
}


int main(int argc, char* argv[])
{
	for (int i = 1; i < argc; i++)
	{
		string tmp(argv[i]);
		if (check_div3(tmp) && check_div5(tmp))
			cout << "fizzbuzz ";
		if (check_div3(tmp) && !check_div5(tmp))
			cout << "fizz ";
		if (!check_div3(tmp) && check_div5(tmp))
			cout << "buzz ";
		if (!check_div3(tmp) && !check_div5(tmp))
			cout << tmp << " ";	
	}
	cout << endl;
	return 0;
}

