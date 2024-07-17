#include <iostream>
using namespace std;

int main(){
    int s;
    int i = 2;
    printf("Please input an integer: ");
    scanf("%d", &s);
    printf("%d = ", s);
    while(i <= s){
        if (s % i == 0){
            s = s / i;
            if (s != 1){
                printf("%d*", i);
            }else{
                printf("%d", i);
            }      
        }
        if (s % i != 0){
            i++ ;
        }
    }

    return 0;
}