#include<string>
using namespace std;

class student{
    string name;
    int age ;
    int fees;
    public:
    student();    
    student(string s , int a ,int f);
    void setData(string n,int a,int f);
    void setFees(int f);
    void showData();
};