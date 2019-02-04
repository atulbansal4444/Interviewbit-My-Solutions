/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];   
    int i = (low - 1);
    int j;
    for (j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;    
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
      
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int findRepeatingElement(int arr[],int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1]) return arr[i];
    }
    return -1;
}
int repeatedNumber(const int* A, int n1) {
    quickSort(A,0,n1-1);
    return findRepeatingElement(A,n1);
    
}
