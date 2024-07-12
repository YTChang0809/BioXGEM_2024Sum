#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char name[10];
    char gs[20];
    char s,end;
    s=' ';
    end = '|';
    int m;
    int n;
    printf("Enter your name: ");
    scanf("%s", &name);
    ("%lu\n", strlen(name));
    cin.ignore();
    printf("Enter your graduation school: ");
    scanf("%s", &gs);
    printf("%lu\n", strlen(gs));
    m = (30 - strlen(name)) / 2 ;
    n = (30 - strlen(gs)) / 2;
    


    printf("\n+------------------------------+\n");
    printf("|%*c%s%*c%c\n",m,s,name,m,s,end);
    printf("|%*c%s%*c%c\n",n,s, gs,n,s,end);
    printf("+------------------------------+");

    return 0;
}
