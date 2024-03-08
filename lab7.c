/*Programmer: Joshua Jaggernauth
Date: 03/07/2024
Project: Lab Assignment 7
*/
//This program implements bubble sort and selection sort algorithms to sort two arrays (array1 and array2). 
//It tracks the number of swaps made for each element during sorting and calculates the total number of swaps performed for 
//each array. Finally, it displays the number of swaps made for each element and the total swaps for each array.

#include <stdio.h>

//Function to perform Bubble Sort algorithm
void bubbleSort(int arr[], int n) {
  int i, j, temp, swaps = 0;

  //Print a header indicating the sorting algorithm being used
  printf("Bubble Sort:\n");

  //Iterate through the array to perform sorting
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      //Compare adjacent elements and swap them if they are in the wrong order
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        //Increment swaps count and print a message indicating the swap
        swaps++;
        printf("%d: # of times %d is swapped\n", arr[j], arr[j]);
      }
    }
  }
  //Print the total number of swaps performed during the sorting process
  printf("Total swaps: %d\n", swaps);
}

//Function to perform Selection Sort algorithm
void selectionSort(int arr[], int n) {
  int i, j, min_idx, temp, swaps = 0;

  //Print a header indicating the sorting algorithm being used
  printf("Selection Sort:\n");

  //Iterate through the array to perform sorting
  for (i = 0; i < n - 1; i++) {
    min_idx = i;
    for (j = i + 1; j < n; j++) {
      //Find the index of the minimum element in the unsorted part of the array
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }
    //Swap the found minimum element with the first element
    if (min_idx != i) {
      temp = arr[i];
      arr[i] = arr[min_idx];
      arr[min_idx] = temp;
      //Increment swaps count and print a message indicating the swap
      swaps++;
      printf("%d: # of times %d is swapped\n", arr[i], arr[i]);
    }
  }
  //Print the total number of swaps performed during the sorting process
  printf("Total swaps: %d\n", swaps);
}

int main() {
  int array1[] = {
    97,
    16,
    45,
    63,
    13,
    22,
    7,
    58,
    72
  };
  int array2[] = {
    90,
    80,
    70,
    60,
    50,
    40,
    30,
    20,
    10
  };

  //Calculate the size of the arrays
  int n1 = sizeof(array1) / sizeof(array1[0]);
  int n2 = sizeof(array2) / sizeof(array2[0]);

  //Perform Bubble Sort on array1 and print results
  bubbleSort(array1, n1);
  printf("\n");
  //Perform Selection Sort on array2 and print results
  selectionSort(array2, n2);

  return 0;
}