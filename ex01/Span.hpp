#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
    public:
        Span(unsigned int N);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        int shortestSpan();
        int longestSpan();

        void addNumber();
        void addRange();

    private:
        std::vector<int> span_;
        const unsigned int maxSpan_;

        Span();
};

#endif // SPAN_HPP