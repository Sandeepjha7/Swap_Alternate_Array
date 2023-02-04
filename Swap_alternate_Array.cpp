//Swapping the alternate element in the given array.

#include<iostream>
using namespace std;

Swap_Alternate(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
    swap(arr[start],arr[start+1]);
    start=start+2;
    }
}

int PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[5]={10,20,30,40,50};
    int brr[6]={1,2,3,4,5,6};

    Swap_Alternate(arr,5);
    Swap_Alternate(brr,6);

    PrintArray(arr,5);
    PrintArray(brr,6);

    return 0;
}