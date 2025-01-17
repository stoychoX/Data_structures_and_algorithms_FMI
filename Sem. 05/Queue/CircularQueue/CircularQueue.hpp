#ifndef QUEUE_HDR
#define QUEUE_HDR

#include <iostream>
using namespace std;

template<typename T>
class Queue 
{
private:

	T* data;
	size_t capacity;
	size_t count;

	size_t putIter;
	size_t getIter;

	void Resize();
	void copyFrom(const Queue<T>& other);
	void free();

public:
	Queue();
	Queue(const Queue<T>& other);
	Queue<T>& operator=(const Queue<T>& other);
	~Queue();

	bool isEmpty() const;
	void enqueue(T el);
	T dequeue();
	const T& peek() const;
};

template <typename T>
void Queue<T>::Resize() 
{
	T* temp = new T[capacity * 2];

	for (int i = 0; i < capacity; ++i)
		temp[i] = dequeue();
	
	getIter = 0;
	putIter = capacity;

	count = capacity;
	capacity *= 2;

	delete[] data;
	data = temp;
}

template <typename T>
void Queue<T>::copyFrom(const Queue<T>& other) 
{
	data = new T[other.capacity];
	for (int i = other.getIter; i != other.putIter; (i+=1)%=other.capacity)
		data[i] = other.data[i];
	
	count = other.count;
	capacity = other.capacity;

	putIter = other.putIter;
	getIter = other.getIter;
}

template <typename  T>
void Queue<T>::free() 
{
	delete[] data;
	count = capacity = 0;
}

template <typename T>
Queue<T>::Queue() 
{
	const size_t DEFAULT_CAPACITY = 4;

	data = new T[DEFAULT_CAPACITY];
	capacity = DEFAULT_CAPACITY;
	count = 0;
	putIter = 0;
	getIter = 0;
}

template <typename T>
Queue<T>::Queue(const Queue<T>& other) 
{
	copyFrom(other);
}

template <typename T>
Queue<T>& Queue<T>::operator=(const Queue<T>& other) 
{
	if (this != &other) 
	{
		free();
		copyFrom(other);
	}
	return *this;
}

template <typename T>
Queue<T>::~Queue() 
{
	free();
}

template <typename T>
bool Queue<T>::isEmpty() const 
{
	return count == 0;
}

template <typename T>
void Queue<T>::enqueue(T el) 
{
	if (count == capacity)
		Resize();

	data[putIter] = el;

	(++putIter) %= capacity;
	count++;
}

template <typename T>
T Queue<T>::dequeue() 
{
	if (count == 0)
		throw std::runtime_error("Queue is empty!");

	T elToReturn = data[getIter];
	count--;

	(++getIter) %= capacity;
	return  elToReturn;
}

template <typename T>
const T& Queue<T>::peek() const
{
	if (isEmpty())
		throw std::runtime_error("Queue is empty!");
	return data[getIter];
}

#endif // !QUEUE_HDR