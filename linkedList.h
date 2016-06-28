#include <iostream>

using std::cout;
using std::endl;
using std::cin;

template <typename T>
class LinkedList
{
public:
	LinkedList();
	
	T elemento;
	LinkedList *prox;
	
};