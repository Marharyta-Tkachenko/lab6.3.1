#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.3.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[7]{ -26,-9,14,-1,-1,14,-1 };
			c = Print(a, 7);
			Assert::AreEqual(c, 0);
		}
	};
}
