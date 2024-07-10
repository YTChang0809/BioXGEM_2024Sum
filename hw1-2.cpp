#include <iostream>
using namespace std;

int main(){
    char name[10];
    char gs[20];
    printf("Enter your name: ");
    scanf("%s", &name);
    cin.ignore();
    printf("Enter your graduation school: ");
    scanf("%s", &gs);
    printf("\n+---------------------------+\n");
    printf("|%16s           |\n", name);
    printf("|%18s         |\n", gs);
    printf("+---------------------------+");

    return 0;
}
