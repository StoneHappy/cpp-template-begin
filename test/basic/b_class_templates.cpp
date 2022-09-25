#include "gtest/gtest.h"
#include <exception>
#include <gtest/gtest-spi.h>
#include <gtest/gtest.h>

#include <iostream>
#include <ostream>
#include <stdexcept>
#include <utility>
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

    void printOn(std::ostream& strm) const;

    // friend
    friend std::ostream& operator<< (std::ostream& strm, Stack<T> const& stack)
    {
        stack.printOn(strm);
        return strm;
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

template<typename T>
void Stack<T>::printOn(std::ostream& strm) const {
    for (T const& elem : m_elems) {
        strm << elem << ' ';
    }
    strm << std::endl;
}

TEST(I_Basic, b_calss_templates)
{
	Stack<int> intStack;
    Stack<std::string> stringStack;
    Stack<std::pair<int, int>> pairStack;

    intStack.push(7);
    intStack.push(8);
    intStack.push(9);
    intStack.push(10);
    EXPECT_EQ(intStack.top(), 10);

    stringStack.push("CPP1");
    stringStack.push("CPP2");
    stringStack.push("CPP3");
    stringStack.push("CPP4");
    EXPECT_EQ(stringStack.top(), "CPP4");

    intStack.printOn(std::cout);
    std::cout << stringStack;
    // pairStack.printOn(std::cout); //Compile Error: std::pair does not define operator <<
}
