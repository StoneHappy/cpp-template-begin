#include <gtest/gtest.h>
#include <string>
template<typename T>
T max(T a, T b)
{
	return b < a ? a : b;
}


TEST(I_Basic_Function_Template, a_first_look_at_function_template)
{
	int I1 = 10;
	int I2 = 11;
	ASSERT_EQ(::max(I1, I2), 11);

	double D1 = 3.14;
	double D2 = 6.83;
	ASSERT_EQ(::max(D1, D2), 6.83);

	std::string S1 = "c++template";
	std::string S2 = "c++template-2nd";
	ASSERT_EQ(::max(S1, S2), "c++template-2nd");
}