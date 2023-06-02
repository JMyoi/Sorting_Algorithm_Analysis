#pragma once
extern long long c; //global count variable
void insertionSort(int* array, int size);
void bubbleSort(int* array, int size);
void selectionSort(int* array, int size);
void quickSort(int* array, int first, int last);
int LomutoPartition(int* array, int first, int last);
void merge(int* array, int first, int mid, int last);
void mergeSort(int* array, int first, int last);
void heapify(int* arr, int n, int parent);
void heapSort(int* arr, int n);


void ImprovedBubbleSort(int* array, int size);
void INSERTIONSORT(int *array, int first, int last);//Insertion sort that takes first and last parameters

//tail recursion and random pivot selection
void ImprovedQuickSort(int* array, int first, int last);
int RandomizedLomutoPartition(int* array, int first, int last);

