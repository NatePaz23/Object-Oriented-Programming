#include <iostream>
#include<vector>
using namespace std;


void printMemArr(const int arr[],int size); 



void incArrBy10 (int arr[], int size) ;


int main(){
    const int SIZE=5;
    int arr[SIZE];
    for (int i=0; i<SIZE; i++){
        arr[i]=100+i;

    }

    printf("Before-------\n");
    printMemArr(arr, SIZE);

    //change the Values 
    incArrBy10(arr, SIZE);
    printf("After-------\n");
    printMemArr(arr, SIZE);

    
    
}

void incArrBy10 (int arr[], int size) {
    for (int i = 0 ; i < size; i++){
arr[i]+=10;
    }
}

void printMemArr(const int arr[],int size) {
    printf("Array - Each in is worth %lu bytes\n", sizeof(arr[0]));
for (int i = 0 ; i<size; i++){
    printf("Value: %i at Memory Location: %p\n", arr[i], arr+1);
}
}