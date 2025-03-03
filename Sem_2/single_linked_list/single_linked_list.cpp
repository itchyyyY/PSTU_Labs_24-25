#include <iostream>

struct Node
{
	char data;
	Node* next;

	Node(const char& _data) : data(_data), next(nullptr) {}
};

struct single_linked_list
{
	Node* head;
	Node* tail;

	int size;

	single_linked_list() : head(nullptr), tail(nullptr), size(0) {}
	
	void init(const int n)
	{
		char tmp;

		if (n < 1)
		{
			std::cerr << "List size must be at least 1 !" << std::endl;
			return; 
		}

		for (int i = 0; i < n; ++i)
		{
			std::cin >> tmp;
			push_back(tmp);
		}
		size = n;
	}

	void print()
	{
		if (is_empty()) return;
		Node* node = head;
		while (node)
		{
			std::cout << node->data << ' ';
			node = node->next;
		}
		std::cout << std::endl;
	}

	bool is_empty() { return head == nullptr; } 

	void push_back(const char& _data) 
	{
		Node* node = new Node(_data);
		
		if (is_empty())
		{
			head = node;
			tail = node;
			return;
		}
		tail->next = node;
		tail = node;

		++size;
	} 

	void remove_back() 
	{
		if (is_empty()) { return; }

		if(head == tail) 
		{
			delete head;
			head = tail = nullptr;
			return;
		}

		Node* current = head;
		while (current->next != tail)
		{
			current = current->next;
		}
		delete tail;
		tail = current;
		tail->next = nullptr;

		--size;
	}

	void push_front(const char& _data)
	{
		Node* node = new Node(_data);
		if (is_empty())
		{
			head = node;
			tail = node;
			return;
		}
		node->next = head;
		head = node;

		++size;
	}

	void remove_front() 
	{
		if (is_empty()) { return; }

		if (head == tail)
		{
			delete head;
			head = tail = nullptr;
			return;
		}

		Node* node = head;
		head = node->next;
		delete node;

		--size;
	}

	void insert(const char& _data, int pos)
	{
		--pos;

		if (pos < 0 || pos > size) { return; }

		if (pos == 0)
		{
			push_front(_data);
			return;
		}

		if (pos == size)
		{
			push_back(_data);
			return;
		}

		Node* node = new Node(_data);
		Node* current = head;

		for (int i = 0; i < pos - 1; ++i)
		{
			current = current->next;
		}

		node->next = current->next;
		current->next = node;

		size++;
	} 

	void multiple_insert(int pos, const int n)
	{
		for (int i = 0; i < n; ++i)
		{
			char _data;
			std::cin >> _data;

			insert(_data, pos);

			++pos;
		}
	}

	void remove(int pos) 
	{
		if (pos < 1 || pos > size) { return; }

		if (pos == 1)
		{
			remove_front();
			return;
		}

		if (pos == size)
		{
			remove_back();
			return;
		}

		Node* current = head;
		Node* previous = nullptr;

		for (int i = 1; i < pos; ++i)
		{
			previous = current;
			current = current->next;
		}

		previous->next = current->next;
		delete current;
		current = nullptr;

		--size;
	}

	void multiple_remove(int pos, const int n)
	{
		if (!is_empty())
		{
			for (int i = 0; i < n; ++i)
			{
				remove(pos);
			}
		}
	}

	const char& find_value(const char& _data)
	{
		Node* current = head;
		while (current != nullptr)
		{
			if (current->data == _data) { return current->data; }
			current = current->next;
		}
		return ' ';
	}

	Node* find_value_ptr(const char& _data)
	{
		Node* current = head;
		while (current != nullptr)
		{
			if (current->data == _data) { return current; }
			current = current->next;
		}
		return nullptr;
	}
};

int main()
{
	return 0;
}