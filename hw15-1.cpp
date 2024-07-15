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
        printf("%*d", n, 1);
        for (t = 2; t <=m; t++){
            printf("%d", t%10);
        }
        for (t = m-1; t >= 1; t--){
            printf("%d", t%10);
        }
        printf("\n");
    }
    return 0;
}