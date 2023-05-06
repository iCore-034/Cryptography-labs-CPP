//#include <iostream>
//#include <Windows.h>
//#include <chrono>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
//using namespace std;
////############################## EXP ###################################
//void exponentiation(cpp_int &a, cpp_int aa, cpp_int exp, cpp_int fori) {
//    if (fori != exp)
//    {
//        a *= aa;
//        fori++;
//        exponentiation(a, aa, exp, fori);
//        Sleep(10); // ----------------- Добавлено для наглядности (Функция останавливается на 0.1 секунду каждую новую инициализацию)
//    }
//}
////############################## MAIN ##################################
//void main()
//{
//    // -------------------------------- Марафет для пользоватея
//    cpp_int a;
//    cout << "Input number: ";
//    cin >> a;
//    cpp_int b;
//    cout << "\nInput exp: ";
//    cin >> b;
//    cout << "\n" << a << "^" << b << " = ";
//    // -------------------------------- Засекаем время работы функции возведения в степень
//    auto start = std::chrono::system_clock::now();
//    exponentiation(a,a, b, 1);
//    auto end = std::chrono::system_clock::now();
//    // -------------------------------- Вычисление вемени работы и вывод
//    cout << a << "\nLead time: " << chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << " miliseconds" << endl;
//}
//
//
///* ----------- ВЫВОД НА ПРИМЕРЕ -------------|
//|            Input number: 30                |
//|            Input exp : 45                  |
//|            30 ^ 45 = 43311962041352192     |
//|            Lead time : 688 miliseconds     |
//---------------------------------------------*/