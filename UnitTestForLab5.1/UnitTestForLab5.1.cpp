#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna robota nomer 5.1/Lab 5.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForLab51
{
	TEST_CLASS(UnitTestForLab51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t, a = 0.5, b = 1.5;
			t = (sin(a) * sin(b)) / ((a * a) + (b * b));
			Assert::AreEqual(t, g(a, b));
		}
	};
}
