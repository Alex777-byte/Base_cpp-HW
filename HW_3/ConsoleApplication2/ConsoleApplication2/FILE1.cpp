#include <iostream>

extern int var;
extern int var1;
int main_First();
int main_Second();
int main_third();

int main()
{
    setlocale(LC_ALL, "Russian");
    main_First();
    main_Second();
    main_third();
    int var2;
    var2 = var / var1;
    std::cout << "Результат выражения  var2 = var / var1:\n" << var2 << std::endl;
}