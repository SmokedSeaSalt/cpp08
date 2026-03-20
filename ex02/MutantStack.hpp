#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T> class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type container_type;
        typedef typename container_type::iterator iterator;
        typedef typename container_type::const_iterator const_iterator;

        iterator       begin();
        const_iterator begin() const;
        iterator       end();
        const_iterator end() const;

    private:
};

#include "MutantStack.tpp"

#endif // MUTANTSTACK_HPP
