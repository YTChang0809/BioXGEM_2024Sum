#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    float g;
    printf("Please input a positive integer: ");
    scanf("%d", &a);
    b = a / 10;
    c = a % 10;
    if (a <= 0){
        printf("%d is not a positive integer!!", a);
    }
    if (a >= 1 && a <= 9){
        printf("%d is a small integer.", a);
    }
    if (a >= 10 && a <= 99){
        printf("The tens digit of %d is %d \n", a, b);
        printf("The units digit of %d is %d", a, c);
    }

    if (a >= 100){
        printf("%d is a large number.\n", a);
        if (a % 5 == 0){
            printf("%d is divisible by 5.", a);
        }else if (a % 5 == 1){
            d = a + 5;
            printf("%d + 5 = %d", a, d);
        }else if (a % 5 == 2){
            e = a - 5;
            printf("%d - 5 = %d", a, e);
        }else if (a % 5 == 3){
            f = a * 5;
            printf("%d * 5 = %d", a, f);
        }else if (a%5 == 4){
            g = a / 5.0;
            printf("%d / 5 = %.2f", a, g);
        }
    }

    return 0;
    
}