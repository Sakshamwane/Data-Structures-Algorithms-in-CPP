#include<iostream>
using namespace std;
void insertionSort(int a[], int n){
    
    for(int i = 1; i<n; i++){
        int value = a[i];
        int hole = i;
        while(hole>=0 && a[hole-1]>value){
            a[hole]=a[hole-1];
            hole=hole-1;
        }
        a[hole]=value;
    }
}
int main(){
    int a[] = {10,90,20,50,60,40,70,80,30};
    insertionSort(a,9);
    for(int i = 0; i<9; i++){
        cout<<a[i]<<endl;
    }
}