template<class T> typename std::deque<T>::iterator MutantStack<T>::begin()
{
	return(this->c.begin());
}

template<class T> typename std::deque<T>::const_iterator MutantStack<T>::begin() const
{
	return(this->c.cbegin());

}

template<class T> typename std::deque<T>::iterator MutantStack<T>::end()
{
	return(this->c.end());
}

template<class T> typename std::deque<T>::const_iterator MutantStack<T>::end() const
{
	return(this->c.cend());
}

