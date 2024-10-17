#include <iostream>

using namespace std;

int main() {
    // Local scope 1
    {
        int num = 10;
        int* numPtr = &num;

        cout << "Number value: " << num << endl;
        cout << "Number address: " << numPtr << endl;
        cout << "Value at numPtr: " << *numPtr << endl;

        num++;
        cout << "Updated num: " << num << endl;

        numPtr = nullptr;
        cout << "numPtr is now: " << numPtr << endl;
    }

    // Local scope 2
    {
        cout << "Pointer Arithmetic Example" << endl;
        int numbers[] = { 1, 2, 3, 4, 5 };

        cout << "Array size: " << sizeof(numbers) << endl;
        int* arrayPtr = numbers;

        cout << "First element: " << numbers[0] << endl;
        cout << "Array address: " << arrayPtr << endl;
        cout << "Value at arrayPtr: " << *arrayPtr << endl;

        arrayPtr++;
        cout << "Next element: " << *arrayPtr << endl;

        arrayPtr = nullptr;
        cout << "Array size: " << sizeof(numbers) << endl;
    }

    // Local scope 3
    {
        cout << "Allocating Memory for an Integer" << endl;
        int* intPtr = new int;
        *intPtr = 20;

        cout << "Value: " << *intPtr << endl;

        delete intPtr;
        intPtr = nullptr;
    }

    // Local scope 4
    {
        cout << "Allocating Memory for an Array" << endl;
        int* arrayMem = new int[5];

        cout << "Single element size: " << sizeof(*arrayMem) << endl;
        cout << "Pointer size: " << sizeof(arrayMem) << endl;

        cout << "Array pointer: " << arrayMem << endl;
        for (int i = 0; i < 5; i++) {
            arrayMem[i] = i + 1;
        }

        delete[] arrayMem;
        arrayMem = nullptr;
        cout << "Array pointer after delete: " << arrayMem << endl;
        cout << "Single element size: " << sizeof(*arrayMem) << endl;
        cout << "Pointer size: " << sizeof(arrayMem) << endl;
    }

    // Local scope 5
    {
        cout << "Pointer to a Pointer Example" << endl;
        int value = 10;
        int* valPtr = &value;
        int** ptrToPtr = &valPtr;

        cout << "Value through double pointer: " << **ptrToPtr << endl;
        valPtr = nullptr;
        ptrToPtr = nullptr;
    }

    // Local scope 6
    {
        cout << "Reference vs. Variable" << endl;
        int count = 10;
        int& countRef = count;
        int* refPtr = &countRef;

        cout << "count = " << count << endl;
        cout << "countRef = " << countRef << endl;
        cout << "*refPtr = " << *refPtr << endl;

        countRef++;
        cout << "Updated count = " << count << endl;
        cout << "Updated countRef = " << countRef << endl;
        cout << "Updated *refPtr = " << *refPtr << endl;

        *refPtr = 20;
        cout << "Final count = " << count << endl;
        cout << "Final countRef = " << countRef << endl;
        cout << "Final *refPtr = " << *refPtr << endl;
    }

    return 0;
}
