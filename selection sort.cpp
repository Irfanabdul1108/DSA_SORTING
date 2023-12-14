// platform - coding ninjas
//link - https://www.codingninjas.com/studio/problems/selection-sort_624469?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
// concept -  selection sort
void selectionSort(vector<int>&arr) {
    int n=arr.size();
    for(int i=0; i<n-1; i++)
    {
        int min_index=i;
        for(int j=i+1; j<n; j++)
        {
             if(arr[j]<arr[min_index])
             {
                 min_index=j;
             }
        }
        swap(arr[min_index], arr[i]);
    }
}