#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <chrono>
using namespace std;


// VECTOR

double fillVector(vector<int>& myVector, const int N)
{
	auto begin = chrono::high_resolution_clock::now();

	for (int i = 0; i < N; i++)
	{
		int d = rand() % 1001;
		myVector.push_back(d);
	}

	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> diff = end - begin;
	//cout << "Time taken to ADD RAND the vector: " << diff.count() << "s" << endl;

	return diff.count();
}

void showVector(vector<int> myVector)
{
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << "vector[" << i << "] = " << myVector[i] << endl;
	}

	/*int n = 0;
	for (auto i = myVector.begin(); i != myVector.end(); i++, n++)
	{
		cout << "vector[" << n << "] = " << *i << endl;
	}*/
}

double sortVector(vector<int>& myVector)
{
	auto begin = chrono::high_resolution_clock::now();

	sort(myVector.begin(), myVector.end());

	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> diff = end - begin;
	//cout << "Time taken to SORT the vector: " << diff.count() << "s" << endl;

	return diff.count();
}

double reverseVector(vector<int>& myVector)
{
	auto begin = chrono::high_resolution_clock::now();

	reverse(myVector.begin(), myVector.end());

	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> diff = end - begin;
	//cout << "Time taken to REVERSE the vector: " << diff.count() << "s" << endl;

	return diff.count();
}

double deleteVector(vector<int>& myVector)
{
	auto begin = chrono::high_resolution_clock::now();

	myVector.erase(myVector.begin(), myVector.end());

	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> diff = end - begin;
	//cout << "Time taken to DELETE the vector: " << diff.count() << "s" << endl;

	return diff.count();
}

double insertVector(vector<int>& myVector, const int N)
{
	srand(1);
	int rand_pos = rand() % N + 1;

	auto begin = chrono::high_resolution_clock::now();

	vector<int>::iterator it = myVector.begin();
	advance(it, rand_pos);

	for (int i = 0; i < 5000; i++)
	{
		it = myVector.insert(it, 1);
	}

	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> diff = end - begin;
	//cout << "Time taken to INSERT the vector: " << diff.count() << "s" << endl;

	return diff.count();
}


// LIST

double fillBackList(list<int>& myList, const int N)
{
	auto begin = chrono::high_resolution_clock::now();

	for (int i = 0; i < N; i++)
	{
		int d = rand() % 1001;
		myList.push_back(d);
	}

	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> diff = end - begin;
	//cout << "Time taken to ADD RAND the list: " << diff.count() << "s" << endl;

	return diff.count();
}

double fillFrontList(list<int>& myList, const int N)
{
	auto begin = chrono::high_resolution_clock::now();

	for (int i = 0; i < N; i++)
	{
		int d = rand() % 1001;
		myList.push_front(d);
	}

	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> diff = end - begin;
	//cout << "Time taken to ADD RAND the list: " << diff.count() << "s" << endl;

	return diff.count();
}

void showList(list<int> myList)
{
	int n = 0;
	for (auto i = myList.cbegin(); i != myList.cend(); i++, n++)
	{
		cout << "list[" << n << "] = " << *i << endl;
	}
}

double sortList(list<int>& myList)
{
	auto begin = chrono::high_resolution_clock::now();

	myList.sort();

	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> diff = end - begin;
	//cout << "Time taken to SORT the list: " << diff.count() << "s" << endl;

	return diff.count();
}

double reverseList(list<int>& myList)
{
	auto begin = chrono::high_resolution_clock::now();

	myList.reverse();

	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> diff = end - begin;
	//cout << "Time taken to REVERSE the list: " << diff.count() << "s" << endl;

	return diff.count();
}

double deleteList(list<int>& myList)
{
	auto begin = chrono::high_resolution_clock::now();

	myList.erase(myList.begin(), myList.end());

	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> diff = end - begin;
	//cout << "Time taken to DELETE the list: " << diff.count() << "s" << endl;

	return diff.count();
}

double insertList(list<int>& myList, const int N)
{
	srand(1);
	int rand_pos = rand() % N + 1;

	auto begin = chrono::high_resolution_clock::now();

	list<int>::iterator it = myList.begin();
	advance(it, rand_pos);

	for (int i = 0; i < 5000; i++)
	{
		myList.insert(it, 1);
	}

	auto end = chrono::high_resolution_clock::now();

	chrono::duration<double> diff = end - begin;
	//cout << "Time taken to INSERT the list: " << diff.count() << "s" << endl;

	return diff.count();
}


// RUNNING VECTOR

double runLearningFillVector(const int N)
{
	double sum_time = 0;

	int n = 10;
	for (int i = 0; i < n; i++)
	{
		vector<int> myVector;

		sum_time += fillVector(myVector, N);
	}

	return sum_time /= n;
}

double runLearningReverseVector(const int N)
{
	double sum_time = 0;

	int n = 10;
	for (int i = 0; i < n; i++)
	{
		vector<int> myVector;

		fillVector(myVector, N);
		sum_time += reverseVector(myVector);
	}

	return sum_time /= n;
}

double runLearningDeleteVector(const int N)
{
	double sum_time = 0;

	int n = 10;
	for (int i = 0; i < n; i++)
	{
		vector<int> myVector;

		fillVector(myVector, N);
		sum_time += deleteVector(myVector);
	}

	return sum_time /= n;
}

double runLearningSortVector(const int N)
{
	double sum_time = 0;

	int n = 10;
	for (int i = 0; i < n; i++)
	{
		vector<int> myVector;

		fillVector(myVector, N);
		sum_time += sortVector(myVector);
	}

	return sum_time /= n;
}

double runLearningInsertVector(const int N)
{
	double sum_time = 0;

	int n = 10;
	for (int i = 0; i < n; i++)
	{
		vector<int> myVector;

		fillVector(myVector, N);
		sum_time += insertVector(myVector, N);
	}

	return sum_time /= n;
}

// RUNNING LIST

double runLearningFillBackList(const int N)
{
	double sum_time = 0;

	int n = 10;
	for (int i = 0; i < n; i++)
	{
		list<int> myList;

		sum_time += fillBackList(myList, N);
	}

	return sum_time /= n;
}

double runLearningFillFrontList(const int N)
{
	double sum_time = 0;

	int n = 10;
	for (int i = 0; i < n; i++)
	{
		list<int> myList;

		sum_time += fillFrontList(myList, N);
	}

	return sum_time /= n;
}

double runLearningReverseList(const int N)
{
	double sum_time = 0;

	int n = 10;
	for (int i = 0; i < n; i++)
	{
		list<int> myList;

		fillBackList(myList, N);
		sum_time += reverseList(myList);
	}

	return sum_time /= n;
}

double runLearningDeleteList(const int N)
{
	double sum_time = 0;

	int n = 10;
	for (int i = 0; i < n; i++)
	{
		list<int> myList;

		fillBackList(myList, N);
		sum_time += deleteList(myList);
	}

	return sum_time /= n;
}

double runLearningSortList(const int N)
{
	double sum_time = 0;

	int n = 10;
	for (int i = 0; i < n; i++)
	{
		list<int> myList;

		fillBackList(myList, N);
		sum_time += sortList(myList);
	}

	return sum_time /= n;
}

double runLearningInsertList(const int N)
{
	double sum_time = 0;

	int n = 10;
	for (int i = 0; i < n; i++)
	{
		list<int> myList;

		fillBackList(myList, N);
		sum_time += insertList(myList, N);
	}

	return sum_time /= n;
}

int main()
{
	srand(1);

	const int N = 1000000;


	//// FILL

	double FV = runLearningFillVector(N);
	cout << "Time for FILL the vector: " << FV << "\n\n";

	double FFL = runLearningFillFrontList(N);
	cout << "Time for FILL FRONT the list: " << FFL << "\n\n";

	double FL = runLearningFillBackList(N);
	cout << "Time for FILL BACK the list: " << FL << "\n\n\n";

	//// INSERT

	double IV = runLearningInsertVector(N);
	cout << "Time for INSERT the vector: " << IV << "\n\n";

	double IL = runLearningInsertList(N);
	cout << "Time for INSERT the list: " << IL << "\n\n\n";

	//// REVERSE

	double RV = runLearningReverseVector(N);
	cout << "Time for REVERSE the vector: " << RV << "\n\n";

	double RL = runLearningReverseList(N);
	cout << "Time for REVERSE the list: " << RL << "\n\n\n";

	//// DELETE

	double DV = runLearningDeleteVector(N);
	cout << "Time for Delete the vector: " << DV << "\n\n";

	double DL = runLearningDeleteList(N);
	cout << "Time for Delete the list: " << DL << "\n\n\n";

	//// SORT

	double SV = runLearningSortVector(N);
	cout << "Time for SORT the vector: " << SV << "\n\n";

	double SL = runLearningSortList(N);
	cout << "Time for SORT the list: " << SL << "\n\n\n";
}