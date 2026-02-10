#include<iostream>
#include<cmath>
using namespace std;

struct emp {
    int id;
    string name;
    float salary;
};
int main(){
    cout<<"Total number of employes ";
    int n;
    cin>>n;
    emp arr[100];
    cout<<"Enter the details of employees ";
    for(int i=0;i<n;i++){
        cout<<i+1<<" .employe: "<<endl;
        cout<<" ID ";
        cin>>arr[i].id;
        cin.ignore();
        cout<<" name ";
        getline(cin,arr[i].name);
        cout<<" salary ";
        cin>>arr[i].salary;
    }
    int maxsal=INT_MIN,index=0;
    for(int i=0;i<n;i++){
        if(arr[i].salary>maxsal){
            maxsal=arr[i].salary;
            index=i;
        }
    }
    cout<<"The employe with hightest salary is: "<<maxsal<<endl;
    cout<<"Id "<<arr[index].id<<endl<<"Name "<<arr[index].name;
    return 0;
}