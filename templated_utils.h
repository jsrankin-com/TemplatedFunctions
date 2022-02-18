#pragma once
#include <iostream>
#include <vector>

template <class T>
bool IsBetween(T low, T high, T target)
{
    return target <= high && target >= low
        ? true : false;
}

template <class T>
void PrintVector(std::vector<T> v)
{
    for (auto it = v.cbegin(); it != v.cend(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;
}

template <class T>
T ReturnSmaller(T lhs, T rhs)
{
    return lhs < rhs?lhs : rhs;
}

template <class T>
T ReturnLarger(T lhs, T rhs)
{
    return lhs > rhs?lhs : rhs;
}

//Tries to reserve memory for a vector
template <class T>
std::vector<T> ReservedVector(int n)
{
	std::vector<T> ret;

	try
	{
		//Try to reserve the memory
		if (n < ret.max_size() && n > 0)
			ret.reserve(n);

	}
	catch (const std::bad_alloc& ba)
	{
		std::cerr << "Bad allocation: " << ba.what() << '\n';
	}
	catch (const std::length_error& le) {
		std::cerr << "Length error: " << le.what() << '\n';
	}

	return ret;
}

