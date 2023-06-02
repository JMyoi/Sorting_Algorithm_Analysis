#include "Sorts.h"
#include <ctime>
#include <cstdlib>

long long c = 0;
void insertionSort(int* array, int size) {
    c = 0;
    c++; //'i'
    for (int i = 1; i < size; i++, c += 2) {
        int key = array[i];
        int j = i - 1;
        c += 2;

        while (array[j] > key && j >= 0) {
            array[j + 1] = array[j];
            j--;
            c += 3;
        }c++;

        c++;
        if (j + 1 != i) {
            array[j + 1] = key;
            c++;
        }
    }c++;//loop last comparison
}

void selectionSort(int* array, int size) {
    c = 0;
    c++;//'i'
    for (int i = 0; i < size - 1; i++, c += 2) {
        int indexSmallest = i;
        c++;
        c++;//'i'
        for (int j = i + 1; j < size; j++, c += 2) {
            c++;
            if (array[j] < array[indexSmallest]) {
                indexSmallest = j;
                c++;
            }
        }c++;//loop last comparison
        int temp = array[i];
        array[i] = array[indexSmallest];
        array[indexSmallest] = temp;
        c += 3;
    }c++;//loop last comparison
}

void ImprovedBubbleSort(int* array, int size) {
    c = 0;
    bool sorted = false;
    c++;

    c++;//'i'
    for (int i = 0; !sorted && i < size - 1; i++, c += 2) {
        sorted = true;//assume true after each loop
        c++;

        c++;//'i'
        for (int j = 0; j < size - i - 1; j++, c += 2) {
            c++;
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                sorted = false;
                c += 4;
            }
        }c++; //loop last comparison
    }c++; //loop last comparison
}

void bubbleSort(int* array, int size) {
    c = 0;
    c++;//'i'
    for (int i = 0; i < size - 1; i++, c += 2) {
        c++;//'i'
        for (int j = 0; j < size - i - 1; j++, c += 2) {
            c++;
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                c += 3;
            }
        }c++;//loop last comparison
    }c++;//loop last comparison
}

int LomutoPartition(int* array, int first, int last) {
    int pivot = array[last];
    int i = first - 1;
    int temp = 0;
    c += 3;

    c++;
    for (int j = first; j <= last - 1; j++, c += 2) {
        c++;
        if (array[j] <= pivot) {
            temp = array[j];
            array[j] = array[i];
            array[i] = temp;
            c += 3;
        }
    }c++;//loop last comparison

    temp = array[i + 1];
    array[i + 1] = pivot;
    array[last] = temp;
    c += 3;//increment for swap

    return i + 1;
}

void quickSort(int* array, int first, int last) {
    while (first < last) {
        int piv = LomutoPartition(array, first, last);
        c += 2; //includes loop comparison increment

        c++;
        if (piv - first < last - piv) {
            quickSort(array, first, piv - 1);
            first = piv + 1;
            c++;
        }
        else {
            quickSort(array, piv + 1, last);
            last = piv - 1;
            c++;
        }
    }c++;//loop last comparison
}

int RandomizedLomutoPartition(int* array, int first, int last) {
    //pick a random number from first to last.
    srand(time(0));
    int range = last - first;
    int pos = (rand() % range) + first;
    //swap our random pivot selection with the last element. 
    int T = array[last];
    array[last] = array[pos];
    array[pos] = T;
    c += 5;

    int pivot = array[last];
    int i = first - 1;
    int temp = 0;
    c += 3;

    c++;//'i'
    for (int j = first; j <= last - 1; j++, c += 2) {
        c++;
        if (array[j] <= pivot) {
            temp = array[j];
            array[j] = array[i];
            array[i] = temp;
            c += 4;//increment for swap and i
        }
    }c++;//loop last comparison

    temp = array[i + 1];
    array[i + 1] = pivot;
    array[last] = temp;
    c += 3;//increment for swap

    return i + 1;
}

void ImprovedQuickSort(int* array, int first, int last) {
    c++;
    if (last - first + 1 < 10) {
        INSERTIONSORT(array, first, last);
    }
    else {
        while (first < last) {
            int piv = RandomizedLomutoPartition(array, first, last);
            c++;//includes loop comparison

            c++;
            if (piv - first < last - piv) {
                ImprovedQuickSort(array, first, piv - 1);
                first = piv + 1;
                c++;
            }
            else {//else right is smaller go into right
                ImprovedQuickSort(array, piv + 1, last);
                last = piv - 1;
                c++;
            }
        }c++;//last loop comparison
    }

}

void merge(int* array, int first, int mid, int last) {
    int* temparray = new int[last + 1];
    int first1 = first;
    int last1 = mid;
    int first2 = mid + 1; //add
    int last2 = last;
    int index = first1;
    c += 6;

    while ((first1 <= last1) && (first2 <= last2)) {
        c++;//while

        c++;
        if (array[first1] <= array[first2]) {
            temparray[index] = array[first1];
            first1++;
            c += 2;
        }
        else {
            temparray[index] = array[first2];
            first2++;
            c += 2;
        }
        index++;
        c++;
    }//loop last comparison

    while (first1 <= last1) {
        temparray[index] = array[first1];
        first1++;
        index++;
        c += 4;//includes loop comparison
    }c++;//loop last comparison

    while (first2 <= last2) {
        temparray[index] = array[first2];
        first2++;
        index++;
        c += 4;
    }c++;

    c++;//'i'
    for (index = first; index <= last; index++, c += 2) {
        array[index] = temparray[index];
        c++;//increment for putting back into original array.
    }
    delete[] temparray;
    c++;
}

void mergeSort(int array[], int first, int last) {
    c++;
    if (first < last) {
        int mid = first + ((last - first) / 2);
        c++;
        mergeSort(array, first, mid);
        mergeSort(array, mid + 1, last);
        merge(array, first, mid, last);
    }
}

void heapify(int* arr, int n, int parent) {
    int LChild = parent * 2 + 1;
    int RChild = parent * 2 + 2;
    int largest = parent;
    c += 3;

    c++;
    if (LChild < n && arr[LChild]>arr[largest]) {
        largest = LChild;
        c++;
    }

    c++;
    if (RChild < n && arr[RChild] > arr[largest]) {
        largest = RChild;
        c++;
    }
    c++;
    if (largest != parent) {
        int temp = arr[parent];
        arr[parent] = arr[largest];
        arr[largest] = temp;
        c += 3;
        heapify(arr, n, largest);
    }
}

void heapSort(int* arr, int n) {
    c = 0;
    c++;//'i'
    for (int i = n / 2 - 1; i >= 0; i--, c += 2) {
        heapify(arr, n, i);
    }c++;//last comparison

    c++;//'i'
    for (int i = n - 1; i >= 0; i--, c += 2) {
        int temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
        c += 3;
        heapify(arr, i, 0);
    }c++;//last comparison
}

void INSERTIONSORT(int* array, int first, int last) {
    c++;//'i'
    for (int i = first + 1; i <= last; i++, c += 2) {
        int key = array[i];
        int j = i - 1;
        c += 2;
        while (array[j] > key && j >= first) {
            array[j + 1] = array[j];
            j--;
            c += 3;//includes loop comparison
        }c++;//loop last comparison

        c++;
        if (j + 1 != i) {
            array[j + 1] = key;
            c++;
        }
    }c++;//loop last comparison
}