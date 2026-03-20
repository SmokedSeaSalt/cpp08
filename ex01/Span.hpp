#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
    public:
        Span(unsigned int N);
        Span(const Span& other);
        ~Span();

        int shortestSpan();
        int longestSpan();

        void addNumber(int number);

        void addRange(std::vector<int> range);

        class SpanFull : public std::exception
        {
                virtual const char* what() const noexcept;
        };

        class NotEnoughNumbers : public std::exception
        {
                virtual const char* what() const noexcept;
        };

    private:
        Span&              operator=(const Span& other);
        std::vector<int>   span_;
        const unsigned int maxSpan_;

        Span();
};

#endif // SPAN_HPP
