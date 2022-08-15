/*#include<iostream>
using namespace std;
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)    
     
    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++){
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
    }
}
 
/* Function to print an array 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
// Driver code
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}*/
 






/*
//Binary Search
//Recursive
//F// C++ program to implement recursive Binary Search
#include<iostream>
using namespace std;
 
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}
 
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
}
*/















#include<iostream>
using namespace std;
void FibonacciSearch(int *a, int start, int end, int *fib, int index, int item) {
   int i, mid;
   mid = start+fib[index-2];
   if(item == a[mid]) {
      cout<<"\n item found at "<<mid<<" index.";
      return;
   } else if(item == a[start]) {
      cout<<"\n item found at "<<start<<" index.";
      return;
   } else if(item == a[end]) {
      cout<<"\n item found at "<<end<<" index.";
      return;
   } else if(mid == start || mid == end) {
      cout<<"\nElement not found";
      return;
   } else if(item > a[mid])
         FibonacciSearch(a, mid, end, fib, index-1, item);
      else
         FibonacciSearch(a, start, mid, fib, index-2, item);
   }
   main() {
      int n, i, fib[20], a[10]={3, 7, 55, 86, 7, 15, 26, 30, 46, 95};
      char ch;
      fib[0] = 0;
      fib[1] = 1;
      i = 1;
      while(fib[i] < 10) {
         i++;
         fib[i] = fib[i-1] + fib[i-2];
      }
      up:
         cout<<"\nEnter the Element to be searched: ";
         cin>>n;
         FibonacciSearch(a, 0, 9, fib, i, n);
         cout<<"\n\n\tDo you want to search more...enter choice(y/n)?";
         cin>>ch;
         if(ch == 'y' || ch == 'Y')
            goto up;
         return 0;
   }