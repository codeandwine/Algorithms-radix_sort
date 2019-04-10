#include <stdio.h>   
/* How binary search works.
* It can be simply modified into a .h file to add to the Radix sort
* Explanation in Report
*/

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2;   
        if (arr[mid] == x) 
            return mid; 
          if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x);   
        return binarySearch(arr, mid + 1, r, x); 
    } 
      return -1; 
} 
  
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; //this wouldn't be needed
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 10; 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? printf("Element not found") : printf("Element at index %d", result); 
    return 0; 
} 
