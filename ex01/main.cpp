#include "Span.hpp"
#include "terminalOutput.hpp"
#include <iostream>

int main()
{
    {
        std::cout << C_YELLOW << "Default test\n" << C_END;
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        std::cout << C_YELLOW << "Test add range\n" << C_END;
        Span             sp    = Span(5);
        std::vector<int> range = {6, 3, 17, 9, 11};
        sp.addRange(range);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        std::cout << C_YELLOW << "Test addNumber exception\n" << C_END;
        Span sp = Span(5);
        try
        {
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            sp.addNumber(19);
        }
        catch (const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        std::cout << C_YELLOW << "Test add range exception\n" << C_END;
        Span             sp     = Span(5);
        std::vector<int> range  = {6, 3, 17, 9, 11};
        std::vector<int> range2 = {19, 21};
        try
        {
            sp.addRange(range);
            sp.addRange(range2);
        }
        catch (const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        std::cout << C_YELLOW << "Test (short/long) span exception\n" << C_END;
        Span sp = Span(5);
        try
        {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        sp.addNumber(1);
        try
        {
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        std::cout << C_YELLOW << "Test BIG\n" << C_END;
        Span sp = Span(10000);
        for (int i = 0; i < 10000; i++)
            sp.addNumber(rand());

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        std::cout << C_YELLOW << "Test copy\n" << C_END;
        Span             sp     = Span(5);
        std::vector<int> range  = {6, 3, 17, 9, 11};
        sp.addRange(range);
        Span copy = Span(sp);

        std::cout << copy.shortestSpan() << std::endl;
        std::cout << copy.longestSpan() << std::endl;
    }
}
