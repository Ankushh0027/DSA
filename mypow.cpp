#include<iostream>
using namespace std;

double mypow(double x,int n){

    if(n == 0) return 1.0;
    if(x == 1) return 1.0;
    if(x == -1 && n %2==0)return 1;
    if(x == -1 && n %2!=0)return -1;

    long long binform = n;
    if( binform < 0){
        x = 1/x;
        binform = -binform;
    }
    double ans =1.0;

     while(binform > 0){
        if(binform % 2 == 1){
            ans *= x;
        }
        x *= x;
        binform /= 2;
    }

    return ans;
}



int main(){
    double x;
    int n;
    cout<<"Enter value of x:";
    cin>>x;

    cout<<"Enter value of n:";
    cin>>n;

double result = mypow(x,n);
cout<<"Answer:"<<result<<endl;



}