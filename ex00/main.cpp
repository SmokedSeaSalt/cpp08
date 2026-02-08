#include <array>
#include <vector>
#include <deque>
#include <list>
#include <bits/stdc++.h>
#include "easyfind.hpp"

int main(void)
{
	std::array<int,6> ar = {1, 2, 3, 4, 5, 6};
	std::vector<int> vec = {1, 2, 3, 4, 5, 6};
	std::deque<int> deq = {1, 2, 3, 4, 5, 6};
	std::list<int> list = {1, 2, 3, 4, 5, 6};
	std::forward_list<int> fwlist = {1, 2, 3, 4, 5, 6};

	int& res = easyfind(ar, 3);
	std::cout << "result: " << res << "\n";
	res = easyfind(ar, 7);
	std::cout << "result: " << res << "\n";


}
