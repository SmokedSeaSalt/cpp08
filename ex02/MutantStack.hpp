#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

class MutantStack : public std::stack
{
	public:
		MutantStack();
		MutantStack(const MutantStack& other);
		MutantStack& operator=(const MutantStack& other);
		~MutantStack();

	private:

};

#endif // MUTANTSTACK_HPP
