#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.1/lab 6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab61test
{
    TEST_CLASS(lab61test)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            int c; 
            int a[] = { 1, -2, 3, -4, 5 };
            int size = 5;
            c = Count(a, size);
            Assert::AreEqual(c, 1);
        }
    };
}
