/*
	Fizzbuzz function implementation
	Including "buzz.hpp" to the project is sufficiently to use the function
*/


#include <string>
#include <vector>


std::string sum_digit(const std::string& inp)
{
	int res = 0;
	for (auto i : inp)
		res += i - '0';
	return std::to_string(res);
}

bool check_div3(const std::string& inp)
{
	std::string digit = inp;

	//To not count '-' as digit in the sum
	if (digit[0] == '-')
		digit.erase(0, 1);

	while (sum_digit(digit) != digit)
		digit = sum_digit(digit);
	
	return (digit == "3") || (digit == "6") || (digit == "9");
}

bool check_div5(const std::string& inp)
{
	return ((inp[inp.size() - 1] =='0') || (inp[inp.size() - 1] == '5'));
}


//String datatype for numbers is chosen to ignore integer types size resctrictions
std::vector<std::string> fizzbuzz(const std::vector<std::string>& input)
{	
	std::vector<std::string> ans;
	for (int i = 0; i < input.size(); i++)
	{
		if (check_div3(input[i]) && check_div5(input[i]))
			ans.push_back("fizzbuzz");

		if (check_div3(input[i]) && !check_div5(input[i]))
			ans.push_back("fizz");

		if (!check_div3(input[i]) && check_div5(input[i]))
			ans.push_back("buzz");

		if (!check_div3(input[i]) && !check_div5(input[i]))
			ans.push_back(input[i]);
	}

	return ans;
}
