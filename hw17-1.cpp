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
    int n;
    int c;
    printf("Please input a number: ");
    scanf("%d", &n);

    for(int i = 3; i+2 <= n ; i+=2){
        if (prime(i) == 1 && prime(i+2) == 1){
            printf("(%d,%d) ",i, i+2);
            c++ ;
        }
    } 
    printf("\nTotal is %d", c);
    return 0;
}
    