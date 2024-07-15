#include <iostream>
using namespace std;
int main(){
    int i;
    int m;
    int n;
    int t;
    printf("Please input a number: ");
    scanf("%d",&i);

    for (m = 1; m <= i; m++){
        n = i - m + 1;
        printf("%*d", n, m%10);
        for (t = 1; t < 2*m-1; t++){
            printf("%d", m%10);
        }
        printf("\n");
    }
    return 0;
}