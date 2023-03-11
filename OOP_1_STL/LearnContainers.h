#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <chrono>
using namespace std;

// VECTOR

double fillVector(vector<int>& myVector, const int N);

void showVector(vector<int> myVector);

double sortVector(vector<int>& myVector);

double reverseVector(vector<int>& myVector);

double deleteVector(vector<int>& myVector);

double insertVector(vector<int>& myVector, const int N);


// LIST

double fillBackList(list<int>& myList, const int N);

double fillFrontList(list<int>& myList, const int N);

void showList(list<int> myList);

double sortList(list<int>& myList);

double reverseList(list<int>& myList);

double deleteList(list<int>& myList);

double insertList(list<int>& myList, const int N);

double insertBackList(list<int>& myList);


// RUNNING VECTOR

double runLearningFillVector(const int N);

double runLearningReverseVector(const int N);

double runLearningDeleteVector(const int N);

double runLearningSortVector(const int N);

double runLearningInsertVector(const int N);


// RUNNING LIST

double runLearningFillBackList(const int N);

double runLearningFillFrontList(const int N);

double runLearningReverseList(const int N);

double runLearningDeleteList(const int N);

double runLearningSortList(const int N);

double runLearningInsertList(const int N);

double runLearningInsertBackList(const int N);