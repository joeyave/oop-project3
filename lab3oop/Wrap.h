#pragma once
#include "Stack.h"

template <class T>
class Wrap
{
private:
	T* p;
	size_t beg;
	size_t amt;

public:
	Wrap(T& x)
	{
		p = &x;
	}

	T* operator->() const
	{
		return p;
	}

	Wrap& operator() (size_t _beg, size_t _amt)
	{
		beg = _beg;
		amt = _amt;

		return *this;
	}

	Wrap& operator=(Wrap& src)
	{
		size_t srcsize = src.p->size();
		for (size_t i = beg, j = 0; i < beg + amt && j < srcsize; i++)
		{
			(*p)[i] = (*src.p)[j++];
		}

		return *this;
	}
};