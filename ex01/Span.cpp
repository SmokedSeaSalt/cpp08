#include "Span.hpp"
#include <algorithm>
#include <climits>

Span::Span() : maxSpan_(0) {}
Span::Span(unsigned int N) : maxSpan_(N) {}

Span::~Span() {}

Span::Span(const Span& other) : maxSpan_(other.maxSpan_)
{
    for (const int& x : other.span_)
		this->span_.push_back(x);
}

Span& Span::operator=(const Span& other)
{
    (void)other;
    return (*this);
}

void Span::addNumber(int number)
{
    if (this->span_.size() < maxSpan_)
        this->span_.push_back(number);
    else
        throw SpanFull();
}

int Span::shortestSpan()
{
    if (this->span_.size() <= 1)
        throw NotEnoughNumbers();

    std::vector<int> copy = this->span_;
    std::sort(copy.begin(), copy.end());

    int                        shortest = INT_MAX;
    std::vector<int>::iterator it       = copy.begin();
    for (it = copy.begin(); (it + 1) != copy.end(); it++)
    {
        int diff = (*(it + 1) - *it);
        if (diff < shortest)
            shortest = diff;
    }
    return shortest;
}

int Span::longestSpan()
{
    if (this->span_.size() <= 1)
        throw NotEnoughNumbers();

    auto [min, max] = std::minmax_element(this->span_.begin(), this->span_.end());

    return (*max - *min);
}

void Span::addRange(std::vector<int> range)
{
    if (range.size() + this->span_.size() > maxSpan_)
        throw SpanFull();
    this->span_.insert(span_.end(), range.begin(), range.end());
}

const char* Span::SpanFull::what() const noexcept
{
    return "Span::SpanFull: Not enough room in span to add input!\n";
}

const char* Span::NotEnoughNumbers::what() const noexcept
{
    return "Span::NotEnoughNumbers: Not enough numbers stored to find a span!\n";
}
