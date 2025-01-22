#pragma once

template<class T>
class BagInterface
{
public:
	virtual int getCurrentSize() const = 0;
	virtual bool isEmpty() const = 0;
	virtual bool add(const T& item) = 0;
	virtual bool remove(const T& item) = 0;
	virtual void clear() = 0;
	virtual int getFrequencyOf(const T& item) const = 0;
	virtual bool contains(const T& item) const = 0;
	virtual std::vector<T> toVector() const = 0;
};