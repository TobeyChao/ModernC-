#include <iostream>
#include <climits>
#include "Header/Game.h"

#ifdef __cplusplus
extern "C" {
#endif


using namespace std;

//2.1.2
const char *hello() { return __func__; }

int main() {
    std::cout << "Hello, World!" << std::endl;
    cout << "Standard Clid: " << __STDC_HOSTED__ << endl;
    cout << hello() << endl;

    PR("Hello\n");

    Test test;
    cout << test.name << endl;

    //2.1.4
    int x = 5;
    cout << x << endl;
    LOG("x = %d", x);

    wcout.imbue(std::locale("chs"));
    const wchar_t *str = L"ÄãºÃ";
    wcout << str << endl;

    //2.2 long long 64Î»
    cout << LLONG_MIN << endl
         << LLONG_MAX << endl
         << ULLONG_MAX;
    //2.4 __cplusplus

    return 0;
}
#ifdef  __cplusplus
}
#endif