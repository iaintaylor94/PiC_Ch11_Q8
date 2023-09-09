// program to sort three integers using pointers

#include <stdio.h>

// Declare Functions
void printNumbers (int*, int*, int*);
void sort3 (int*, int*, int*);

int main(void) {

  int zero = 6;
  int one = 0;
  int two = 4;

  printf ("------BEFORE SORT------\n");
  printNumbers (&zero, &one, &two);
  printf ("\n");
  
  sort3 (&zero, &one, &two);

  printf ("------AFTER SORT------\n");
  printNumbers (&zero, &one, &two);
  
  return 0;
}

// Define Functions
void printNumbers (int *int0, int *int1, int *int2) {
  printf ("int0:  %d\n", *int0);
  printf ("int1:  %d\n", *int1);
  printf ("int2:  %d\n", *int2);
}

void sort3 (int *int0, int *int1, int *int2) {
  int *pMin, *pMid, *pMax;
  int min, mid, max;

  // Find min
  pMin = int0;
  if (*int1 < *pMin)
    pMin = int1;
  if (*int2 < *pMin)
    pMin = int2;

  // Find max
  pMax = int0;
  if (*int1 > *pMax)
    pMax = int1;
  if (*int2 > *pMax)
    pMax = int2;

  // Find mid
  if (pMin == int0 || pMax == int0)
    if (pMin == int1 || pMax == int1)
      pMid = int2;
    else pMid = int1;
  else pMid = int0;
  
  // Sort inputs
  min = *pMin;
  mid = *pMid;
  max = *pMax;
  
  *int0 = min; 
  *int1 = mid;
  *int2 = max;
}