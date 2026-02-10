#include<iostream>
using namespace std;
struct time{
    int hour;
    int minutes;
    int second;
}t1,t2;
time addtime(time t1,time t2){
 time result;
 result.second=t1.second+t2.second;
 result.minutes=t1.minutes+t2.minutes+result.second/60;
 result.second=result.second%60;

 result.hour=t1.hour+t2.hour+result.minutes/60;
 result.minutes=result.minutes%60;

 return result;
}
int main(){
    cout<<"Enter 1st time(hours/minutes/second): ";
    cin>>t1.hour>>t1.minutes>>t1.second;
    cout<<"Enter 2nd time(hours/minutes/second): ";
    cin>>t2.hour>>t2.minutes>>t2.second;

 int secsum=t1.second+t2.second,msum=t1.minutes+t2.minutes,hsum=t1.hour+t2.hour;
 time sum=addtime(t1,t2);
 if(sum.hour<10)
 cout<<"0"<<sum.hour<<" : ";
  if(sum.minutes<10)
 cout<<"0"<<sum.minutes<<" : ";
 else
 cout<<sum.minutes<<" : ";
 if(sum.second<10)
 cout<<"0"<<sum.second<<" : ";
 else
 cout<<sum.second; 
    return 0;
}