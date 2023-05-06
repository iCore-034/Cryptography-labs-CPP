//"s" трактуетс€ как операци€ возведени€ в квадрат, а "x" - как операци€ умножени€ на x. 
// f(n) - кол-во x< n, x _|_ n
// атака фридмана
#include <iostream>
#include <string>
#include <cstring>
#include <math.h>
#include <chrono>
#include <boost/multiprecision/cpp_int.hpp>
#include <fstream>
using namespace std;
using namespace boost::multiprecision;
string dec_to_bin(cpp_int num)
{
	string bin;
	while (num != 0)
	{
		bin = char((num & 0x01) + '0') + bin;
		num >>= 1;
	}
	return bin;
}
void main()
{
	cout << "input number: ";
	cpp_int num;
	cin >> num;
	cout << endl;
	string str, str2;
	cout << "input exp:";
	cpp_int a;
	cin >> a;
	cout << endl;
	// ------------------------------------------------------
	str2.clear();
	str = dec_to_bin(a);
	for (int i = 0; i <= str.length(); i++) {
		if (str[i] == '1') str2 = str2 + "sx";
		if (str[i] == '0') str2 = str2 + "s";
	}
	str2.erase(0, 2);
	// ------------------------------------------------------
	auto start = std::chrono::system_clock::now();
	cout << str2 << " len = "<< str2.size() << endl;


	ofstream file("output.csv");
	cpp_int degree = 1;


	size_t i = 0;
	cpp_int result = num;
	for (; i < str2.length(); i++)
	{
		if (str2[i] == 's')
		{
			result = result * result;
			degree = degree + degree;
		}
		else if (str2[i] == 'x')
		{
			result = result * num;
			degree += 1;
		}
		if (degree < 0)
		{
			cout << "ERRORRRRRRRRRRRRRRRRR";
		}
		file << i << ";" << degree << ";";
		auto end = std::chrono::system_clock::now();
		file << chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << endl;
		cout << i << " ----> " << "2^" << degree << endl;
	}


	//cout << std::defaultfloat << "Result: " << result << endl; 
	
	//cout << "time: " << chrono::duration_cast<std::chrono::seconds>(end - start).count() << endl;
}