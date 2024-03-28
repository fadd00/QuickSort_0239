#include<iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void swap(int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;
}
void q_short(int low, int high){
    int temp;
    int pivot, i, j;
    if (low > high){ //step 1
        return;
    } pivot = arr[low]; // step 2
}

int main() {
}