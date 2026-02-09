#include<iostream>
using namespace std;
int sumOfArray(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    
    return sum;
}

double averageOfArray(int arr[],int n)
{
    int sum=sumOfArray(arr,n);
    return sum/n;
}
int main(){
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    int *arr=new int [n];
    cout<<"Enter "<<n<<" elements of array :";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    cout<<"Average of the array is: "<<averageOfArray(arr,n);

    delete []arr;
    return 0;
}