#include "pch.h"
#include "CppUnitTest.h"
#include "../lab7.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int a[1][3] = { { 1, 2, 3 } };
            int* a1[1] = { a[0] };
            int S = 0, k = 0;

            Culc(a1, 1, 3, S, k);
            Assert::AreEqual(0, a[0][1]);
		}
	};
}
