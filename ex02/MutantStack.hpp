#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T> class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::const_iterator const_iterator;
		typedef int intager;
		using intager = int;

        typename std::deque<T>::iterator       begin();
        typename std::deque<T>::const_iterator begin() const;
        typename std::deque<T>::iterator       end();
        typename std::deque<T>::const_iterator end() const;

    private:
};

#include "MutantStack.tpp"

#endif // MUTANTSTACK_HPP
