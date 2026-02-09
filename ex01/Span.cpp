#include "Span.hpp"

Span::Span() : maxSpan_(0)
{

}
Span::Span(unsigned int N) : maxSpan_(N)
{

}

Span::~Span()
{

}

Span::Span(const Span& other) : maxSpan_(other.maxSpan_)
{
	//do deep copy
}

Span& Span::operator=(const Span& other)
{
	//do deep copy
}

void addNumber();
void addRange();

int shortestSpan();
int longestSpan();