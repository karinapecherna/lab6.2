#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2/FileName.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestSwapWithLargestOdd)
        {
            const int SIZE = 5;
            int arr[SIZE] = { 3, 7, -5, 10, 12 };  
            SwapWithLargestOdd(arr, SIZE);

            Assert::AreEqual(7, arr[SIZE - 1]);
        }

        
    };
}
