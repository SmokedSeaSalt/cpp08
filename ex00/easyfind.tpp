#ifndef EASYFIND_TPP
#define EASYFIND_TPP

template<typename T> typename T::iterator easyfind(T& container, int value)
{
	for (typename T::iterator it = container.begin(); it != container.end(); it++)
	{
		if (*it == value)
			return it;
	}
	return container.end();
}

#endif // EASYFIND_HPP
