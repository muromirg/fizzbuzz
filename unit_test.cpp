#include "buzz.hpp"
#include <iostream>

using namespace std;

//The best unit test formatting in history here

void printv(const vector<string>& v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << endl;
}

void test(vector<string>& test, vector<string>& answer)
{
	vector<string> tmp = fizzbuzz(test); //runnung fizzbuzz function here
	cout << "Input : ";
	printv(test);
	cout << "Output : ";
	printv(tmp);

	if (tmp == answer)
		cout << "OK!\n\n";
	else cout << "Test failed: wrong answer\n\n";
}


int main()
{
	vector<string> v1 = {"1", "2", "3", "4", "5"},
				   v2 = {"10000000", "1212312", "1231312", "12312312", "3241234121", "12121212"},
				   v3 = {"31231231231131321", "32423413421432151", "53451345325325324535", "7653546231345322345"},
				   v4 = {"352345324654565439529438759834272347895678324567234659328746529387454327956234782563745623", 
				   		 "4385342786537485627345987326412809402317428396573273485012983778216745623874657237523764572384658732",
				   		 "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000005"},
				   v5 = {"a", "b", "c", "abc"};

	//This is really true answers. No сheating!
	vector<string> a1 = {"1", "2", "fizz", "4", "buzz"},
				   a2 = {"buzz", "fizz", "1231312", "fizz", "3241234121", "fizz"},
				   a3 = {"fizz", "fizz", "fizzbuzz", "buzz"},
				   a4 = {"352345324654565439529438759834272347895678324567234659328746529387454327956234782563745623", 
				   		 "4385342786537485627345987326412809402317428396573273485012983778216745623874657237523764572384658732",
				   		 "fizzbuzz"},
				   a5 = {"a", "b", "fizz", "fizz"};


	test(v1, a1);
	test(v2, a2);
	test(v3, a3);
	test(v4, a4);
	test(v5, a5);

	return 0;
}
