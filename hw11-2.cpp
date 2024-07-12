#include <iostream>
using namespace std;
int main(){
    int test1;
    int test2;
    float av;
    printf("Please input your score on test 1: ");
    scanf("%d",&test1);
    cin.ignore();
    printf("Please input your score on test 2: ");
    scanf("%d",&test2);
    av = (float(test1)+ float(test2)) / 2;
    printf("Average score: %.2f\n", av );
    printf("Grade: ");
    if (av >= 90){
        printf("A");
    }else if (av >= 80 && av <= 89){
        printf("B");
    }else if (av >= 70 && av <= 79){
        printf("C");
    }else if (av >= 60 && av <= 69){
        printf("D");
    }else if (av <= 59){
        printf("F");
    }

    return 0;
}