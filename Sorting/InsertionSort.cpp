#include<iostream>
using namespace std;
void insertionSort(int a[], int n){
    //Iterating over array
    for(int i = 1; i<n; i++){
        //Storing the value at current index
        int value = a[i];
        //Creating imaginary hole at the position of current element
        int hole = i;
        //Shifting the elements towards the right
        while(hole>=0 && a[hole-1]>value){
            a[hole]=a[hole-1];
            hole=hole-1;
        }
        //Updating the value at hole
        a[hole]=value;
    }
}
//Driver code
int main(){
    int a[] = {10,90,20,50,60,40,70,80,30};
    insertionSort(a,9);
    for(int i = 0; i<9; i++){
        cout<<a[i]<<endl;
    }
}