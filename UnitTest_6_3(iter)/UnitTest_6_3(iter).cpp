#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Home\source\repos\Lab_6_3(iter)\Lab_6_3(iter)\Lab_6_3(iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63iter
{
	TEST_CLASS(UnitTest63iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 2;
			int a[n];
			a[0] = 3;
			a[1] = 0;

			Assert::AreEqual(MinElem(a, n), 0);
		}
	};
}
