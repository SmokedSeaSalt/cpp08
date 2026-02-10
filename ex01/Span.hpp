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

        template <class T> void addRange(T range);

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

template <class T> void Span::addRange(T range)
{
    if (range.size() + this->span_.size() > maxSpan_)
        throw SpanFull();
    this->span_.insert(span_.end(), range.begin(), range.end());
}

#endif // SPAN_HPP
