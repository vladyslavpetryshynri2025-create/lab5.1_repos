#include "pch.h"
#include "CppUnitTest.h"
#include "../pr5.1/pr5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double g = 1.0;
			double s = 1.0;
			double c = (h(g + 1, s) + h(g, s + 1) * h(g, s + 1)) / (1 + h(g * g, s * s) * h(g * g, s * s) * h(g * g, s * s) * h(g * g, s * s) * h(g * g, s * s) * h(g * g, s * s));

			Assert::AreEqual(c, 12.0);
		}
	};
}
