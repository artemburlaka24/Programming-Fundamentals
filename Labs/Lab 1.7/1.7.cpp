#include <iostream>

double globalVar1 = 2.3;
static int globalVar2 = 4;
static int globalVar3 = 17;

int main()
{
    double localVar1 = 42;
    int localVar2 = 90;

    {
        int localVar3 = 71;
        double localSum = localVar1 + localVar3;
        double globalSum = ::globalVar1 + localVar3;
    }

    {
        static int staticVar1 = 50;

        {
            int localVar4 = localVar1 + staticVar1;

            int* dynamicInt1 = new int;
            *dynamicInt1 = 22;

            int* dynamicInt2 = new int;
            *dynamicInt2 = 100;

            int* dynamicInt3 = new int(8);

            delete dynamicInt1;
            delete dynamicInt2;
            delete dynamicInt3;
        }
    }

    float localVar5 = 3.17;
    {
        localVar5 = localVar5 + 1;

        {
            float localVar6 = 6543;
            localVar6 = localVar6 - 1;
        }

        localVar5++;
    }

    for (int i = 0; i < 100; i++) {
        int loopVar1 = 0;
        int loopVar2 = 0;
        loopVar1++;
        loopVar2++;
    }

    char* dynamicChar1 = new char;
    *dynamicChar1 = '=';

    char* dynamicChar2 = new char(127);

    delete dynamicChar1;
    delete dynamicChar2;

    return 0;
}
