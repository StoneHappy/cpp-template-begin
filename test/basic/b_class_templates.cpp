#include <gtest/gtest-spi.h>
#include <gtest/gtest.h>

#include <vector>

template<typename T>
class Stack
{
public:
    void push(T const & elem);

    void pop();

    T const& top() const;

    bool empty() const {
        return m_elems.empty();
    }
private:
    std::vector<T> m_elems;
};


template<typename T>
void Stack<T>::push(const T &elem)
{
    m_elems.push_back(elem);
}

template<typename T>
void Stack<T>::pop()
{
    assert(!m_elems.empty());
    m_elems.pop_back();
}

template<typename T>
T const& Stack<T>::top() const
{
    return m_elems.back();
}

TEST(I_Basic, b_calss_templates)
{
	Stack<int> intStack;
    Stack<std::string> stringStack;

    intStack.push(10);
    EXPECT_EQ(intStack.top(), 10);

    stringStack.push("CPP");
    EXPECT_EQ(stringStack.top(), "CPP");
}
