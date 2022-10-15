#include <iostream>
#include <list>
#include <string>
using namespace std;
void MergeSort(int low, int high);
void Merge(int low, int mid ,int high);
string currentArray[] =
{{"Pencil"}, {"Apple"},{"Zebra"},{"Glass"},{"Books"}};
int main()
{
    int n = sizeof(currentArray)/sizeof (currentArray[0]);
    cout<<"Unsorted sequence of strings: "<<endl;
    for (int i = 0; i<n; i++)
        cout << currentArray[i]<< endl;;
    MergeSort(0,n-1);
    cout<<"\nSorted sequence of strings in decreasing order: "<< endl;
    for(int i = 0; i<n; i++)
        cout << currentArray[i] <<endl;
    return 0;
}
void MergeSort(int low, int high)
{
    int mid = 0;
    if(low < high)
    {
        mid = ((low+high)/2);
        MergeSort (low, mid);
        MergeSort (mid+1,high);
        Merge (low,mid, high);
    }
}

void Merge(int low, int mid, int high)
{
    int i = low, j = mid+1, k = low;
    string Temp[sizeof(currentArray)];
    while(i <= mid && j <= high)
    {
        if( currentArray[i] > currentArray[j])
        {
            Temp[k].assign (currentArray[i]);
            i++;
        }
        else
        {
            Temp[k].assign (currentArray[j]);
            j++;
        }
        k++;
    }
    if(i > mid )
    {
        for (int h = j ;h <= high ; h++)
        {
            Temp[k].assign (currentArray[h]);
            k++;
        }
    }
    else
        for (int h = i; h<= mid; h++)
    {
        Temp[k].assign (currentArray[h]);
        k++;
    }
    for(int i = low; i <= high ; i++)
    {
        currentArray[i].assign (Temp[i]);
    }
}
