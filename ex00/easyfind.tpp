#ifndef EASYFIND_TPP
#define EASYFIND_TPP

template<typename T> int& easyfind(T container, int value)
{
	for (unsigned int i = 0; i < container.size(); i++)
	{
		if (container[i] == value)
			return container[i];
	}
	return nullptr;
}

#endif // EASYFIND_HPP
