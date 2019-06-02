#include <iostream>

using namespace std;
double the_power_function1(double a,double n){
   ////the power(a,n)
    if(n==0){
        return 1;
    }
    else if (n==1){
        return a;
    }
    else{
        return a*the_power_function1(a,n-1);

    }
}
//////////////////////////////////
int the_power_function2(int a,int n){

    if(n==0){
        return 1;
    }
    else if (n==a){
        return a;
    }
    /////even
    else if (n%2==0){

       return the_power_function1(a,n/2)*the_power_function1(a,n/2);


    }
    /////odd
    else (n%2!=0);{

        return a*the_power_function1(a,(n-1)/2)*the_power_function1(a,(n-1)/2);

    }
}


int main()
{
    cout<<the_power_function1(2,4)<<endl;
    cout<<the_power_function2(2,4)<<endl;
    cout<<the_power_function2(2,5)<<endl;
    return 0;
}
