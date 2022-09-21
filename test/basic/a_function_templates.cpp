#include <gtest/gtest.h>
#include <string>
#include <type_traits>
template<typename T>
T max(T a, T b)
{
	return b < a ? a : b;
}

template<typename T1, typename T2>
std::common_type_t<T1, T2> max_common_type_return(T1 a, T2 b)
{
	return b < a ? a : b;
}



TEST(I_Basic, a_Function_Template)
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

	ASSERT_EQ(::max_common_type_return(4, 7.2), 7.2);
}
