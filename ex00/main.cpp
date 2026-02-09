#include "easyfind.hpp"
#include <array>
#include <bits/stdc++.h>
#include <deque>
#include <list>
#include <vector>

int main(void)
{
    std::array<int, 6> ar = {1, 2, 3, 4, 5, 6};
    {
        std::array<int, 6>::iterator res = easyfind(ar, 3);
        if (res != ar.end())
            std::cout << "result: " << *res << "\n";
        else
            std::cout << "value not found!\n";
        res = easyfind(ar, 7);
        if (res != ar.end())
            std::cout << "result: " << *res << "\n";
        else
            std::cout << "value not found!\n";
    }

    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    {
        std::vector<int>::iterator res = easyfind(vec, 3);
        if (res != vec.end())
            std::cout << "result: " << *res << "\n";
        else
            std::cout << "value not found!\n";
        res = easyfind(vec, 7);
        if (res != vec.end())
            std::cout << "result: " << *res << "\n";
        else
            std::cout << "value not found!\n";
    }

    std::deque<int> deq = {1, 2, 3, 4, 5, 6};
    {
        std::deque<int>::iterator res = easyfind(deq, 3);
        if (res != deq.end())
            std::cout << "result: " << *res << "\n";
        else
            std::cout << "value not found!\n";
        res = easyfind(deq, 7);
        if (res != deq.end())
            std::cout << "result: " << *res << "\n";
        else
            std::cout << "value not found!\n";
    }

    std::list<int> list = {1, 2, 3, 4, 5, 6};
    {
        std::list<int>::iterator res = easyfind(list, 3);
        if (res != list.end())
            std::cout << "result: " << *res << "\n";
        else
            std::cout << "value not found!\n";
        res = easyfind(list, 7);
        if (res != list.end())
            std::cout << "result: " << *res << "\n";
        else
            std::cout << "value not found!\n";
    }

    std::forward_list<int> fwlist = {1, 2, 3, 4, 5, 6};
    {
        std::forward_list<int>::iterator res = easyfind(fwlist, 3);
        if (res != fwlist.end())
            std::cout << "result: " << *res << "\n";
        else
            std::cout << "value not found!\n";
        res = easyfind(fwlist, 7);
        if (res != fwlist.end())
            std::cout << "result: " << *res << "\n";
        else
            std::cout << "value not found!\n";
    }
}
