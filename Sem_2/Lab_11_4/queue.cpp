#include <iostream>

struct QueueElem
{
	int data;
	QueueElem* next;
};

struct Queue
{
	QueueElem* _front; 
	QueueElem* _back; 
	int size;
	bool is_init;

	Queue(const int n) : _front(nullptr), _back(nullptr), size(0), is_init(false) { init(n); }

	void init(const int n)
	{
		if (is_init)
		{
			std::cerr << "Queue is already initialized !" << std::endl;
			return;
		}
		int data;
		for (int i = 0; i < n; ++i)
		{
			push();
		}
		is_init = true;
	}

	void print()
	{
		QueueElem* cur = _front;
		while (cur != nullptr)
		{
			std::cout << cur->data << ' ';
			cur = cur->next;
		}
		std::cout << std::endl;
	}

	void push()
	{
		int data;
		std::cin >> data;
		QueueElem* tmp = new QueueElem;
		tmp->data = data;
		tmp->next = nullptr;
		if (_back == nullptr) { _front = tmp; }
		else { _back->next = tmp; }
		_back = tmp;
		++size;
	}

	int pop()
	{
		if (size == 0) 
		{
			std::cerr << "Queue is empty!" << std::endl;
			return -1;
		}
		int val = _front->data;
		QueueElem* tmp = _front;
		if (size == 1) { _back = nullptr; }
		_front = _front->next;
		--size;
		delete tmp;
		return val;
	}

	QueueElem* front() { return _front; }
	QueueElem* back() { return _back; }
};

int main()
{
	return 0;
}