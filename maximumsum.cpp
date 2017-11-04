#include <iostream>

int DivideAndConquer(int[], int);

int main()
{
    // Example 1
    //const int MyArraySize = 16;
    //int MyArray[MyArraySize] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7 }; // answer: Index 7 -> 10, sum = 43

    // Example 2
    const int MyArraySize = 8;
    int MyArray[MyArraySize] = { -2, -5, 6, -2, -3, 1, 5, -6 }; // answer: Index 2 -> 6, sum = 7

    int FinalResult;

    FinalResult = DivideAndConquer(MyArray, MyArraySize);
    std::cout << "Using Divide And Conquer: With O(nlogn) Sum = " << FinalResult << "\n\n";

    system("pause");
    return 0;
}

int DivideAndConquer(int* _myArray, int _myArraySize)
{
    if (_myArraySize == 1)
        return _myArray[0];

    int middle = _myArraySize / 2;
    int Result_LeftPortion = DivideAndConquer(_myArray, middle);
    int Result_RightPortion = DivideAndConquer(_myArray + middle, _myArraySize - middle);

    int LeftSum = -9999;
    int RightSum = -9999;
    int TotalSum = 0;

    for (int i = middle; i < _myArraySize; i++)
    {
        TotalSum += _myArray[i];
        RightSum = TotalSum < RightSum ? RightSum : TotalSum;
    }

    TotalSum = 0;

    for (int i = middle - 1; i >= 0; i--)
    {
        TotalSum += _myArray[i];
        LeftSum = TotalSum < LeftSum ? LeftSum : TotalSum;
    }

    int PartialResult = LeftSum < RightSum ? RightSum : LeftSum;
    int Result= (PartialResult < LeftSum + RightSum ? LeftSum + RightSum : PartialResult);

    return Result;
}
