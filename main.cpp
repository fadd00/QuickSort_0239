#include<iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;
void input()
{
    while (true)
    {
        cout << "masukan banyaknya elemen array : ";
        cin >> n;
        if (n <= 39)
            break;
        else
        {
            cout << "\nArray dapat mempunyai maksimal 39 eleman.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}
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
    } 
    pivot = arr[low]; // step 2
    i = low + 1; // step 3
 while (i <= j){ // step 10
    // mencari elemen yang lebih besar dari pivot
    while ((arr[i]<= pivot) && (i <= high)){ // step 5
        i++; // step 6
        cmp_count++;
    }
// mencari elemen lebih kecil atau sama dengan pivot
    while ((arr[j] > pivot) &&  (j >= low + 1)) { //step 7
        j--; //step 8
        cmp_count++;
    }
    cmp_count++;
    if (i < j){ // step 9
        swap (i,j); // menukar index i dengan index j
    }
} if (low < j) // step 11
{
    swap(low, j); // menukar elemen pivot dengan index j
}
q_short(low, j-1); // step 12 recursion untuk sub array yang di kiri
q_short(j+1,high); // step 13 recursion untuk sub array yang di kanan
} 
int main() {
}