#include <iostream>
#include <cmath>
using namespace std;

int prime(int n){
    int i;
    for (i = 2; i <=sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    printf("Please enter a positive integer : ");
    scanf("%d", &t);
    if (prime(t) == 0){
        printf("It is not a prime number.");
    }else if (prime(t) == 1){
        printf("It is a prime number.");
    }

    return 0;
}