// Towers of Hanoi
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void towers(int n, char* rod_1, char* rod_3, char* rod_2){
    if(n == 1){
        printf("MOVE %s %s\n",rod_1,rod_3);
        return;
    }
    towers(n-1, rod_1, rod_2, rod_3);
    printf("MOVE %s %s\n",rod_1,rod_3);
    towers(n-1, rod_2, rod_3, rod_1);
}
int main() {
    int n;
    printf("Enter number of discs: ");
    scanf("%d",&n);
    char *arr[3] = {"T1" , "T2" , "T3"};
    printf("Starting Towers of Hanoi with %d disks\n", n);
    towers(n, arr[0], arr[2], arr[1]);
    printf("Completed Towers of Hanoi\n");
    return 0;
}
