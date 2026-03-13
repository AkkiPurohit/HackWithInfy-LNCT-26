#include <iostream>
using namespace std;

double solve(double x, long long n){
    if(n == 0){
        return 1;
    }
    else if(n < 0){
        return solve(1/x, -n);
    }
    else{
        if(n % 2 == 0){
            return solve(x*x, n/2);
        }
        else{
            return x * solve(x*x, (n-1)/2);
        }
    }
}

double myPow(double x, int n){
    return solve(x, (long long)n);
}

int main(){
    double x;
    int n;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter n: ";
    cin >> n;

    cout << "Result: " << myPow(x,n) << endl;

    return 0;
}