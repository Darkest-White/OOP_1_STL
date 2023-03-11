#include"LearnContainers.h"


int main()
{
	srand(1);

	const int N = 25000000;


	// FILL

	double FV = runLearningFillVector(N);
	cout << "Time for FILL the vector: " << FV << "\n\n";

	double FFL = runLearningFillFrontList(N);
	cout << "Time for FILL FRONT the list: " << FFL << "\n\n";

	double FL = runLearningFillBackList(N);
	cout << "Time for FILL BACK the list: " << FL << "\n\n\n";

	// INSERT

	double IV = runLearningInsertVector(N);
	cout << "Time for INSERT the vector: " << IV << "\n\n";

	double IL = runLearningInsertList(N);
	cout << "Time for INSERT the list: " << IL << "\n\n";

	double IBL = runLearningInsertBackList(N);
	cout << "Time for INSERT BACK the list: " << IBL << "\n\n\n";

	// REVERSE

	double RV = runLearningReverseVector(N);
	cout << "Time for REVERSE the vector: " << RV << "\n\n";

	double RL = runLearningReverseList(N);
	cout << "Time for REVERSE the list: " << RL << "\n\n\n";

	// DELETE

	double DV = runLearningDeleteVector(N);
	cout << "Time for Delete the vector: " << DV << "\n\n";

	double DL = runLearningDeleteList(N);
	cout << "Time for Delete the list: " << DL << "\n\n\n";

	// SORT

	double SV = runLearningSortVector(N);
	cout << "Time for SORT the vector: " << SV << "\n\n";

	double SL = runLearningSortList(N);
	cout << "Time for SORT the list: " << SL << "\n\n\n";
}