#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void towerOfHanoiHelper(int n, char from_rod, char to_rod, char aux_rod){
    if(n == 1){
        printf("Move disk %d from [%c] to [%c]\n", n, from_rod, to_rod);
        return;
    }
    towerOfHanoiHelper(n - 1,to_rod, aux_rod, from_rod);
    printf("Move disk %d from [%c] to [%c]\n", n, from_rod, to_rod);
    towerOfHanoiHelper(n - 1, aux_rod, to_rod, from_rod);
}


void towerOfHanoi(int n){
    towerOfHanoiHelper(n, 'A', 'B', 'C');
}

int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    towerOfHanoi(n);
    return 0;
}