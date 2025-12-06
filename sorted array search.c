
int searchInSorted(int arr[], int n, int k) 
{
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == k)
            return 1;       
        if (arr[mid] < k)
            left = mid + 1; 
        else
            right = mid - 1; 
    }
    return 0; 
}
