/*
	Salcido, Laura

	October 8, 2020

	CS250
	A7 Vectors and Lists
*/
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <iomanip>

using namespace std;

// Declaration function printVector.
// The function passes a vector and prints all
// the elements on one line, separated by a space.
// Use an iterator and a FOR loop.
void printVector(vector<int> const& v);

// Declaration function printList.
// The function passes a list and prints all
// the elements on one line, separated by a space.
// Use an iterator and a WHILE loop.
void printList(list<int> const& l);

int main()
{

	/***************************************************************************
			VECTORS
	***************************************************************************/
	cout << "  ***  STL VECTOR CLASS  ***  \n\n";

	// Use the default constructor to declare an integer vector v1.
	vector<int> v1;


	// void push_back (const value_type& val);
	// Use function push_back to insert the following values in v1: 12, 73, 41,
	// 38, 25, 56, an 63 in this order.
	// v1.push_back(12);
	// v1.push_back(73);
	// v1.push_back(41);
	// v1.push_back(38);
	// v1.push_back(25);
	// v1.push_back(56);
	// v1.push_back(63);

	const int numsSize = 7;
	int nums[numsSize] {12, 73, 41, 38, 25, 56, 63};
	for (size_t i = 0; i < numsSize; ++i)
		v1.push_back(nums[i]);

	// size_type size() const noexcept;
	// Create a variable of type int named sizeV1 and store the size of the vector.
	// Use function size to retrieve the size of the vector. 
	// Make sure you cast the return value of the function size to the appropriate type.
	int sizeV1 = static_cast<int>(v1.size());

	// Use a FOR loop to print out the vector.
	// Do NOT use an iterator.
	cout << setw(20) << fixed << left << "vector v1: ";
	for (const int& i : v1)
		cout << i << " ";

	//void clear() noexcept;
	// Call the function clear on vector v1.
	v1.clear();

	// size_type size() const noexcept;
	// Call function size to print the size of v1.
	cout << setw(20) << fixed << left << "v1 size: " << v1.size() << "\n";

	// size_type capacity() const noexcept;
	// Call function capacity to output the capacity of v1.
	cout << setw(20) << fixed << left << "v1 capacity: " << v1.capacity() << "\n";

	// Create an array of integers containing: 10,11,12,13,14,15,16,17,18,19
	int myInts[]{ 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };

	// Use the default constructor to declare an integer vector v2.
	vector<int> v2;

	// void assign (InputIterator first, InputIterator last);
	// Use function assign to copy elements 12, 13, 14, 15, and 16 from the
	// array into v2.
	// One statement only.
	v2.assign(myInts + 2, myInts + 7);

	// Call the function printVector to print v2.
	cout << setw(20) << fixed << left << "vector v2: ";
	printVector(v2);

	// const_reference back() const;
	// Use the function back output the last element in the vector
	// (Notice that the back function returns a reference.)
	cout << setw(20) << fixed << left << "last element v2: " << v2.back() << "\n";
		
	// Use the default constructor to declare an integer vector v3.
	vector<int> v3;

	// void assign (size_type n, const value_type& val);
	// Use function assign to insert the values 7, 7, 7, 7, and 7.
	// One statement only.
	v3.assign(5, 7);

	// Call the function printVector  to print v3.
	cout << setw(20) << fixed << left << "vector v3: ";
	printVector(v3);

	// const_reference at(size_type n) const;
	// Use function at to replace the middle element with 100.
	// (Notice that the at function returns a reference.)
	v3.at(2) = 100;

	// Call the function printVector to print v3.
	cout << setw(20) << fixed << left << "vector v3: ";
	printVector(v3);

	// vector (const vector& x);
	// Use the copy constructor to create a new vector v4 with the 
	// same elements of v3.
	vector<int> v4 = v3;

	// Call the function printVector to print v4.
	cout << setw(20) << fixed << left << "vector v4: ";
	printVector(v4);

	// Create an iterator iterVector4 to point to the first element of v4.
	vector<int>::const_iterator iterVector4 = v4.cbegin();

	// Create an iterator iterVector2 to point to the second element of v2.
	vector<int>::const_iterator iterVector2 = v2.cbegin() + 1;

	// iterator insert (const_iterator position, InputIterator first, InputIterator last);
	// Use function insert to insert the second, third, and fourth element
	// of v2 as the first, second, and third element of v4.
	// (Notice that the insert function returns an iterator, 
	//   but if we do not intend to use it, we can ignore it.)
	v4.insert(iterVector4, iterVector2, iterVector2 + 3);

	// Call the function printVector to print v4.
	cout << setw(20) << fixed << left << "vector v4: ";
	printVector(v4);

	// iterator insert (const_iterator position, size_type n, const value_type& val);
	// Use the function insert to insert three 0s at the end of v4.
	// (Notice that the insert function returns an iterator, 
	//   but if we do not intend to use it, we can ignore it.)
	v4.insert(v4.end(), 3, 0);

	// Call the function printVector to print v4.
	cout << setw(20) << fixed << left << "vector v4: ";
	printVector(v4);

	// bool empty() const noexcept;
	// const_reference back() const;
	// void pop_back();
	// Use a WHILE loop to remove and output each element of v2 backwards.
	// Use function empty for the loop condition, function back to output 
	// the last element, and function pop_back to remove elements.
	// (Notice that the insert function returns an iterator, 
	//   but if we do not intend to use it, we can ignore it.)
	cout << setw(20) << fixed << left << "vector v2 reverse: ";
	while (!v2.empty())
	{
		cout << v2.back() << " ";
		v2.pop_back();
	}
	cout << "\n";
	// void resize (size_type n, const value_type& val);
	// Use function resize to insert three times number
	// 4 into v2.
	v2.resize(3, 4);

	// Call the function printVector to print v2.
	cout << setw(20) << fixed << left << "vector v2: ";
	printVector(v2);

	// const_reference front() const;
	// Use function front to output the first element in v4.
	// (Notice that the front function returns a reference.)
	cout << setw(20) << fixed << left << "first element v4: ";
	cout << v4.front() << "\n";

	// void swap (vector& x);
	// Use function swap to swap v2 with v4.
	v2.swap(v4);

	// Call the function printVector to print v2.
	cout << setw(20) << fixed << left << "vector v2: ";
	printVector(v2);

	// Create a new vector v5;
	vector<int> v5;

	// Use the overloaded assignment operator to copy all the elements of v2
	// into v5.
	v5 = v2;

	// void resize (size_type n);
	// size_type size() const noexcept;
	// Delete the last element of v5 by using the functions resize and size
	v5.resize(v5.size() - 1);

	// Call the function printVector to print v5.
	cout << setw(20) << fixed << left << "vector v5: ";
	printVector(v5);

	// Create an iterator iterVector5 to point to the first element of v5.
	vector<int>::const_iterator iterVector5 = v5.cbegin();

	// iterator erase (const_iterator first, const_iterator last);
	// size_type size() const noexcept;
	// Call the function erase to delete the second half of v5.
	// Use function size to get the range.
	// (Notice that the insert function returns an iterator, 
	//   but if we do not intend to use it, we can ignore it.)
	v5.erase(iterVector5 + (v5.size() / 2), v5.end());

	// Call the function printVector to print v5 again.
	cout << setw(20) << fixed << left << "vector v5: ";
	printVector(v5);

	// iterator erase (const_iterator position);
	// Call the function erase to delete the first element of the vector.
	// (Notice that the insert function returns an iterator, 
	//   but if we do not intend to use it, we can ignore it.)
	v5.erase(v5.begin());

	// Call the function printVector to print v5 again.
	cout << setw(20) << fixed << left << "vector v5: ";
	printVector(v5);

	// Create a vector of integers named v6 containing numbers from 100 to 105.
	// Using the copy constructor, create a vector named v7, a copy of v6.
	vector<int> v6 { 100, 101, 102, 103, 104,105 };
	vector<int> v7 = v6;

	// iterator erase (const_iterator position);
	// iterator insert (const_iterator position, const value_type& val);
	// Erase element 103 from v7 and insert element 333 in its place, 
	// by using an iterator.
	// Note that the function erase returns an iterator that can be used
	// to insert 333 in the right position.
	v7.insert(v7.erase(v7.cbegin()), 333);

	// Using a range-based FOR loop, print the elements of v7.
	cout << setw(20) << fixed << left << "vector v7: ";
	for (const int& i : v7)
		cout << i << ' ';
	cout << '\n';

	// difference? 
	// for (auto i : v7)
	//	 cout << i << ' ';
	// cout << '\n';

	/***************************************************************************
			LISTS
	***************************************************************************/

	cout << "\n\n----------------------------------------------------";
	cout << "\n  ***  STL LIST CLASS  ***  \n\n";

	// Use the default constructor to create three lists of integers, intList1,
	// intList2, and intList3.
	list<int> intList1;
	list<int> intList2;
	list<int> intList3;

	// void push_back (const value_type& val);
	// Use the function push_back to insert the following values in the first list: 
	// 23 58 58 58 36 15 15 93 98 58
	intList1.push_back(23);
	intList1.push_back(58);
	intList1.push_back(58);
	intList1.push_back(58);
	intList1.push_back(36);
	intList1.push_back(15);
	intList1.push_back(15);
	intList1.push_back(93);
	intList1.push_back(98);
	intList1.push_back(58);

	// Call function printList to print intList1.
	cout << setw(20) << fixed << left << "list intList1: ";
	printList(intList1);

	// Using the overloaded assignment operator, copy elements of intList1 into intList2.
	intList2 = intList1;

	// Call function printList to print intList2.
	cout << setw(20) << fixed << left << "list intList2: ";
	printList(intList2);

	// void sort();
	// Using function sort, sort all elements in the second list.
	intList2.sort();

	// Call function printList to print intList2.
	cout << setw(20) << fixed << left << "list intList2: ";
	printList(intList2);

	// void unique();
	// Using function unique, remove all consecutive duplicates in the list.
	intList2.unique();

	// Call function printList to print intList2.
	cout << setw(20) << fixed << left << "list intList2: ";
	printList(intList2);
			
	// void push_back (const value_type& val);
	//Insert the following elements in the third list:
	//  13 23 25 136 198
	intList3.push_back(13);
	intList3.push_back(23);
	intList3.push_back(25);
	intList3.push_back(136);
	intList3.push_back(198);

	// Call function printList to print intList3.
	cout << setw(20) << fixed << left << "list intList3: ";
	printList(intList3);

	// void merge (list& x);
	// Add to the second list all elements of the third list.
	// --> This is ONE statement only.
	intList2.merge(intList3);

	// Call function printList to print intList2.
	cout << setw(20) << fixed << left << "list intList2: ";
	printList(intList2);

	/*************************************************************************
	*		Create statements using the functions below.
	*       You might need to create new containers.
	*		Is the output what you expected?
	*************************************************************************/
	cout << "\n\n----------------------------------------------------";
	cout << "\n  ***  OTHER FUNCTIONS  ***  \n\n";

	list<int> intList4;
	// list: void assign (size_type n, const value_type& val);
	intList4.assign(5, 8);
	printList(intList4);

	vector<int> v8;
	// vector: void assign (InputIterator first, InputIterator last);	
	v8.assign(5, 8);
	printVector(v8);

	// list: const_reference back() const;
	// (Notice that this back function returns a reference.)
	int listLast = intList4.back();
	// list: void clear() noexcept;
	intList4.clear();
	// list: bool empty() const noexcept;
	bool listEmpty = intList4.empty();

	if (listEmpty)
		cout << "List is empty.\n"; // expected "List is empty."
	else
		cout << "List is not empty.\n";

	// vector: const_reference front() const;
	vector<int>::const_iterator iterVector8 = v8.cbegin();

	// list: iterator insert (const_iterator position, const value_type& val);
	// (Notice that the insert function returns an iterator.)
	v8.insert(iterVector8, 9);

	list<int> intList5{ 1, 2, 3, 3, 3, 4, 5 };

	// list: void pop_back();
	printList(intList5);
	intList5.pop_back();

	// list: void pop_front();
	intList5.pop_front();
	printList(intList5); // expect 2 3 3 3 4

	// list: void push_front (const value_type& val);
	intList5.push_front(5);

	// list: void remove (const value_type& val);
	intList5.remove(3); // find and remove all instances of 3
	printList(intList5); // expect 5 2 4

	// list: void reverse() noexcept;
	intList5.reverse();
	printList(intList5); // expect 4 2 5

	// list: void splice (const_iterator position, list& x);
	list<int> newList;
	for (size_t i = 1; i <= 5; ++i)
		newList.push_back(i);

	list<int>::const_iterator iter = intList5.cbegin();

	intList5.splice(iter, newList);
	printList(intList5); // expect 1 2 3 4 5 4 2 5 

	// list: void splice (const_iterator position, list& x, const_iterator i);
	list<int> newList2;
	for (size_t i = 10; i <= 15; ++i)
		newList2.push_back(i);

	iter = intList5.cbegin();

	intList5.splice(iter, newList2, newList2.begin());
	printList(intList5); // expect 10 1 2 3 4 5 4 2 5

	// list: void splice (const_iterator position, list& x, const_iterator first, const_iterator last);
	newList2.splice(newList2.end(), intList5, intList5.begin(), intList5.end());
	printList(newList2); // expect 11 12 13 14 15 10 1 2 3 4 5 4 2 5

	cout << "\n\n----------------------------------------------------";

	cout  <<  endl;
	system("Pause");
	return 0;
}

// Definition function printVector
void printVector(vector<int> const& v)
{
	vector<int>::const_iterator iter = v.cbegin();
	vector<int>::const_iterator iterEnd = v.cend();

	for (iter; iter != iterEnd; ++iter)
		cout << *iter << " ";

	cout << "\n";
}

// Definition function printList
void printList(list<int> const& l)
{
	list<int>::const_iterator listIter = l.cbegin();

	while (listIter != l.end())
	{
		cout << *listIter << " ";
		++listIter;
	}
	cout << "\n";
}
