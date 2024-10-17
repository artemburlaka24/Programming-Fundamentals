#include <iostream>

int main() {
    int intVar1;
    float floatVar1;
    unsigned short ushortVar1;

    intVar1 = 5876;
    floatVar1 = 21.09f;
    ushortVar1 = 333;

    double doubleVar2;
    int intVar2;
    char charVar2;
    
    doubleVar2 = intVar1;
    intVar2 = static_cast<int>(floatVar1);

    char* pCharVar2;
    pCharVar2 = &charVar2;
    *pCharVar2 = static_cast<char>(ushortVar1);

    return 0;
}
