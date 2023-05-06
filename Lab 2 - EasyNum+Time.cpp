//// Найти простые множители случайного числа от 10 до 10^21 с периодом в порядок, засечь время выполнения
//// Если простое - выводим, что простое, если сложное - выводим простые множители (2, 3, 5, 7, 11, 13 и тд)
//#include <iostream>
//#include <time.h>
//#include <Windows.h>
//#include <math.h>
//#include <chrono>
//using namespace std;
//
//void go(long long num) {
//	long long div = 2;
//	cout << "[ ";
//	bool noOne = false;
//	while (div * div <= num)
//	{
//		if (num % div == 0)
//		{
//			noOne = true;
//			cout << div << " ";
//			num = num / div;
//		}
//		else
//		{
//			div += 1;
//		}
//	}
//	cout << num;
//	cout << " ]";
//	if (!noOne)
//	{
//		cout << " ###### the numbe is easy ###### ";
//	}
//}
//void main() {
//	srand(time(NULL));
//	const int exp = 21;
//	cout << pow(10, 21) << endl;
//	for (size_t i = 1; i < 22; i++)
//	{
//		cout << i << ": ";
//
//		long long  pw = pow(10, i);
//		long long  num = rand() % pw + pw;
//		cout << "[ " << num << " ] ";
//		auto start = std::chrono::system_clock::now();
//		go(num);
//		auto end = std::chrono::system_clock::now();
//		cout << "Time: " << chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << " miliseconds" << endl;
//	}
//}