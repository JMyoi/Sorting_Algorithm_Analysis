#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include "Sorts.h"
using namespace std;

int* GenerateArray(int n);
int* GenerateRevArray(int n);
int* GenerateRandArray(int n);

int main() {

	clock_t t;

	
	//sorted input set 100, 300, 500, 1000, 3000, 5000, 10000, 50000
   /*
   output represents time and is read as :
   100 sorted
   100 rev
   100 rand
   300 sorted
   300 rev
   300 rand
   500 ...
   .
   .
   . etc.
   .
   .
   */
	
	int* SortedArr;
	int* RevArr;
	int* RandArr;

	//selectionSort
	cout << "*********************** selectionSort ***********************" << endl;
	for (int i = 100; i <= 50000;) {
		SortedArr = GenerateArray(i);
		RevArr = GenerateRevArray(i);
		RandArr = GenerateRandArray(i);
		t = clock();
		selectionSort(SortedArr, i);
		t = clock() - t;
		cout << '\n' << i << " SORTED " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		t = clock();
		selectionSort(RevArr, i);
		t = clock() - t;
		cout << '\n' << i << " REV " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took: " << c << " steps\n";

		t = clock();
		selectionSort(RandArr, i);
		t = clock() - t;
		cout << '\n' << i << " RAND " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		switch (i) {
		case 100:
		case 300:
			i += 200;
			break;
		case 500:
		case 5000:
			i *= 2;
			break;
		case 1000:
		case 3000:
			i += 2000;
			break;
		case 10000:
			i = 50000;
			break;
		case 50000:
			i++;
		}
	}
	//Insertion
	cout << "*********************** insertionSort ***********************" << endl;
	for (int i = 100; i <= 50000;) {
		SortedArr = GenerateArray(i);
		RevArr = GenerateRevArray(i);
		RandArr = GenerateRandArray(i);
		t = clock();
		insertionSort(SortedArr, i);
		t = clock() - t;
		cout << '\n' << i << " SORTED " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		t = clock();
		selectionSort(RevArr, i);
		t = clock() - t;
		cout << '\n' << i << " REV " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		t = clock();
		selectionSort(RandArr, i);
		t = clock() - t;
		cout << '\n' << i << " RAND " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		switch (i) {
		case 100:
		case 300:
			i += 200;
			break;
		case 500:
		case 5000:
			i *= 2;
			break;
		case 1000:
		case 3000:
			i += 2000;
			break;
		case 10000:
			i = 50000;
			break;
		case 50000:
			i++;
		}
	}
	//bubble
	cout << "*********************** bubbleSort *****************************************************************" << endl;
	for (int i = 100; i <= 50000;) {
		SortedArr = GenerateArray(i);
		RevArr = GenerateRevArray(i);
		RandArr = GenerateRandArray(i);
		t = clock();
		bubbleSort(SortedArr, i);
		t = clock() - t;
		cout << '\n' << i << " SORTED " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		t = clock();
		bubbleSort(RevArr, i);
		t = clock() - t;
		cout << '\n' << i << " REV " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		t = clock();
		bubbleSort(RandArr, i);
		t = clock() - t;
		cout << '\n' << i << " RAND " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		switch (i) {
		case 100:
		case 300:
			i += 200;
			break;
		case 500:
		case 5000:
			i *= 2;
			break;
		case 1000:
		case 3000:
			i += 2000;
			break;
		case 10000:
			i = 50000;
			break;
		case 50000:
			i++;
		}
	}
	//improved bubble sort
	cout << "*********************** ImprovedBubbleSort *******************************************************" << endl;
	for (int i = 100; i <= 50000;) {
		SortedArr = GenerateArray(i);
		RevArr = GenerateRevArray(i);
		RandArr = GenerateRandArray(i);
		t = clock();
		ImprovedBubbleSort(SortedArr, i);
		t = clock() - t;
		cout << '\n' << i << " SORTED " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		t = clock();
		ImprovedBubbleSort(RevArr, i);
		t = clock() - t;
		cout << '\n' << i << " REV " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		t = clock();
		ImprovedBubbleSort(RandArr, i);
		t = clock() - t;
		cout << '\n' << i << " RAND " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		switch (i) {
		case 100:
		case 300:
			i += 200;
			break;
		case 500:
		case 5000:
			i *= 2;
			break;
		case 1000:
		case 3000:
			i += 2000;
			break;
		case 10000:
			i = 50000;
			break;
		case 50000:
			i++;
		}
	}
	//merge sort
	cout << "*********************** mergeSort ****************************************************************" << endl;
	for (int i = 100; i <= 50000;) {
		SortedArr = GenerateArray(i);
		RevArr = GenerateRevArray(i);
		RandArr = GenerateRandArray(i);
		c = 0;//restart the counter
		t = clock();
		mergeSort(SortedArr, 0, i);
		t = clock() - t;
		cout << '\n' << i << " SORTED " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		c = 0;//restart the counter
		t = clock();
		mergeSort(RevArr, 0, i);
		t = clock() - t;
		cout << '\n' << i << " REV " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		c = 0;//restart the counter
		t = clock();
		mergeSort(RandArr, 0, i);
		t = clock() - t;
		cout << '\n' << i << " RAND " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		switch (i) {
		case 100:
		case 300:
			i += 200;
			break;
		case 500:
		case 5000:
			i *= 2;
			break;
		case 1000:
		case 3000:
			i += 2000;
			break;
		case 10000:
			i = 50000;
			break;
		case 50000:
			i++;
		}
	}
	//quick sort
	cout << "*********************** quickSort ************************************************************" << endl;
	for (int i = 100; i <= 50000;) {
		SortedArr = GenerateArray(i);
		RevArr = GenerateRevArray(i);
		RandArr = GenerateRandArray(i);
		c = 0;//restart the counter
		t = clock();
		quickSort(SortedArr, 0, i - 1);
		t = clock() - t;
		cout << '\n' << i << " SORTED " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		c = 0;
		t = clock();
		quickSort(RevArr, 0, i - 1);
		t = clock() - t;
		cout << '\n' << i << " REV " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		c = 0;
		t = clock();
		quickSort(RandArr, 0, i - 1);
		t = clock() - t;
		cout << '\n' << i << " RAND " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		switch (i) {
		case 100:
		case 300:
			i += 200;
			break;
		case 500:
		case 5000:
			i *= 2;
			break;
		case 1000:
		case 3000:
			i += 2000;
			break;
		case 10000:
			i = 50000;
			break;
		case 50000:
			i++;
		}
	}
	//improved quick sort
	cout << "*********************** ImprovedquickSort ******************************************************" << endl;
	for (int i = 100; i <= 50000;) {
		SortedArr = GenerateArray(i);
		RevArr = GenerateRevArray(i);
		RandArr = GenerateRandArray(i);
		c = 0;//restart the counter
		t = clock();
		ImprovedQuickSort(SortedArr, 0, i - 1);
		t = clock() - t;
		cout << '\n' << i << " SORTED " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		c = 0;
		t = clock();
		ImprovedQuickSort(RevArr, 0, i - 1);
		t = clock() - t;
		cout << '\n' << i << " REV " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		c = 0;
		t = clock();
		ImprovedQuickSort(RandArr, 0, i - 1);
		t = clock() - t;
		cout << '\n' << i << " RAND " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		switch (i) {
		case 100:
		case 300:
			i += 200;
			break;
		case 500:
		case 5000:
			i *= 2;
			break;
		case 1000:
		case 3000:
			i += 2000;
			break;
		case 10000:
			i = 50000;
			break;
		case 50000:
			i++;
		}
	}

	cout << "*********************** heapSort ************************************************************" << endl;
	for (int i = 100; i <= 50000;) {
		SortedArr = GenerateArray(i);
		RevArr = GenerateRevArray(i);
		RandArr = GenerateRandArray(i);
		
		c = 0;
		t = clock();
		heapSort(SortedArr, i);
		t = clock() - t;
		cout << '\n' << i << " SORTED " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		c = 0;
		t = clock();
		heapSort(RevArr, i);
		t = clock() - t;
		cout << '\n' << i << " REV " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";
		c = 0;
		t = clock();
		heapSort(RandArr, i);
		t = clock() - t;
		cout << '\n' << i << " RAND " << " took " << t << " clock ticks " << "(" << ((float)t) / CLOCKS_PER_SEC << " seconds.)\n";
		cout << "It took " << c << " steps.\n";

		switch (i) {
		case 100:
		case 300:
			i += 200;
			break;
		case 500:
		case 5000:
			i *= 2;
			break;
		case 1000:
		case 3000:
			i += 2000;
			break;
		case 10000:
			i = 50000;
			break;
		case 50000:
			i++;
		}
	}
	
	//part 2
cout << "*************************PART TWO***************************PART TWO**********************************PART TWO********************\n";
//average steps
long long insertionAverage = 0;
long long selectionAverage = 0;
long long bubbleAverage = 0;
long long ImprovedBubbleAverage = 0;
long long quickAverage = 0;
long long ImprovedQuickAverage = 0;
long long mergeAverage = 0;
long long heapAverage = 0;
//average clock speed
long long insertionClock = 0;
long long selectionClock = 0;
long long bubbleClock = 0;
long long ImprovedBubbleClock = 0;
long long quickClock = 0;
long long ImprovedQuickClock = 0;
long long mergeClock = 0;
long long heapClock = 0;

int size = 100;
bool stop = false;
cout << "\nAverage number of steps and clock ticks of 50 random arrays for array size 100\n\n";

while (!stop) {
	for (int i = 0; i < 50; i++) {
		int* Arr = GenerateRandArray(size);
		vector<int> Copy(size);//copy of the original random array to be copied back to the array after it is sorted.
		copy(Arr, Arr + size, Copy.begin());

		t = clock();
		insertionSort(Arr, size);
		t = clock() - t;
		insertionClock += t;//sum up the clock speeds for all 50 iterations.
		insertionAverage += c;//sum up the steps for all iteration.

		copy(Copy.begin(), Copy.end(), Arr);
		t = clock();
		selectionSort(Arr, size);
		t = clock() - t;
		selectionClock += t;
		selectionAverage += c;

		copy(Copy.begin(), Copy.end(), Arr);
		t = clock();
		bubbleSort(Arr, size);
		t = clock() - t;
		bubbleClock += t;
		bubbleAverage += c;

		copy(Copy.begin(), Copy.end(), Arr);
		t = clock();
		ImprovedBubbleSort(Arr, size);
		t = clock() - t;
		ImprovedBubbleClock += t;
		ImprovedBubbleAverage += c;

		copy(Copy.begin(), Copy.end(), Arr);
		c = 0;
		t = clock();
		quickSort(Arr, 0, size - 1);
		t = clock() - t;
		quickClock += t;
		quickAverage += c;

		copy(Copy.begin(), Copy.end(), Arr);
		c = 0;
		t = clock();
		ImprovedQuickSort(Arr, 0, size - 1);
		t = clock() - t;
		ImprovedQuickClock += t;
		ImprovedQuickAverage += c;

		copy(Copy.begin(), Copy.end(), Arr);
		c = 0;
		t = clock();
		mergeSort(Arr, 0, size);
		t = clock() - t;
		mergeClock += t;
		mergeAverage += c;

		copy(Copy.begin(), Copy.end(), Arr);
		t = clock();
		heapSort(Arr, size);
		t = clock() - t;
		heapClock += t;
		heapAverage += c;

	}
	//calculate and display average
	insertionAverage /= 50;
	cout << "Insertion Sort average number of steps: " << insertionAverage << endl;
	selectionAverage /= 50;
	cout << "selection Sort average number of steps: " << selectionAverage << endl;
	bubbleAverage /= 50;
	cout << "bubble Sort average number of steps: " << bubbleAverage << endl;
	ImprovedBubbleAverage /= 50;
	cout << "Improved bubble Sort average number of steps: " << ImprovedBubbleAverage << endl;
	quickAverage /= 50;
	cout << "Quick Sort average number of steps: " << quickAverage << endl;
	ImprovedQuickAverage /= 50;
	cout << "Improved Quick Sort average number of steps: " << ImprovedQuickAverage << endl;
	mergeAverage /= 50;
	cout << "Merge Sort average number of steps: " << mergeAverage << endl;
	heapAverage /= 50;
	cout << "Heap Sort average number of steps: " << heapAverage << endl;
	cout << endl;

	insertionClock /= 50;
	cout << "Insertion Sort average number of CLOCk ticks: " << insertionClock << endl;
	selectionClock /= 50;
	cout << "Selection Sort average number of CLOCk ticks: " << selectionClock << endl;
	bubbleClock /= 50;
	cout << "Bubble Sort average number of CLOCk ticks: " << bubbleClock << endl;
	ImprovedBubbleClock /= 50;
	cout << "Improved Bubble Sort average number of CLOCk ticks: " << ImprovedBubbleClock << endl;
	quickClock /= 50;
	cout << "Quick Sort average number of CLOCk ticks: " << quickClock << endl;
	ImprovedQuickClock /= 50;
	cout << "Improved Quick Sort average number of CLOCk ticks: " << ImprovedQuickClock << endl;
	mergeClock /= 50;
	cout << "Merge Sort average number of CLOCk ticks: " << mergeClock << endl;
	heapClock /= 50;
	cout << "Heap Sort average number of CLOCk ticks: " << heapClock << endl;

	//set all average to 0
	insertionAverage = 0;
	selectionAverage = 0;
	bubbleAverage = 0;
	ImprovedBubbleAverage = 0;
	quickAverage = 0;
	ImprovedQuickAverage = 0;
	mergeAverage = 0;
	heapAverage = 0;
	insertionClock = 0;
	selectionClock = 0;
	bubbleClock = 0;
	ImprovedBubbleClock = 0;
	quickClock = 0;
	ImprovedQuickClock = 0;
	mergeClock = 0;
	heapClock = 0;

	switch (size) {
	case 100:
		size += 200;
		cout << "\nAverage number of steps and clock ticks of 50 random arrays for array size 300\n\n";
		break;
	case 300:
		size += 200;
		cout << "\nAverage number of steps and clock ticks of 50 random arrays for array size 500\n\n";
		break;
	case 500:
		cout << "\nAverage number of steps and clock ticks of 50 random arrays for array size 1,000\n\n";
		size *= 2;
		break;
	case 1000:
		size += 2000;
		cout << "\nAverage number of steps and clock ticks of 50 random arrays for array size 3,000\n\n";
		break;
	case 3000:
		size += 2000;
		cout << "\nAverage number of steps and clock ticks of 50 random arrays for array size 5,000\n\n";
		break;
	case 5000:
		cout << "\nAverage number of steps and clock ticks of 50 random arrays for array size 10,000\n\n";
		size *= 2;
		break;
	case 10000:
		size = 50000;
		cout << "\nAverage number of steps and clock ticks of 50 random arrays for array size 50,000\n\n";
		break;
	case 50000:
		stop = true;
		break;

	}
}


	return 0;
}

int* GenerateArray(int n) {
	int* Array = new int[n];
	for (int i = 0; i < n; i++) {
		Array[i] = i + 1;
	}
	return Array;
}

int* GenerateRevArray(int n) {
	int* Array = new int[n];
	int num = n;
	for (int i = 0; i < n; i++) {
		Array[i] = num;
		num--;
	}
	return Array;
}

int* GenerateRandArray(int n) {
	int* Array = GenerateArray(n);
	srand(time(0));

	//Fisher–Yates shuffle Algorithm
	for (int i = n - 1; i > 0; i--) {
		int pos = rand() % (i + 1); //picks random position from 0 to i
		//swap
		int temp = Array[i];
		Array[i] = Array[pos];
		Array[pos] = temp;
	}
	return Array;
}