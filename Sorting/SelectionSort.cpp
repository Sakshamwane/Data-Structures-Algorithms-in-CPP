#include<iostream>
using namespace std;
void selectionSort(int a[], int n){
    for(int i = 0; i<n-1; i++){
        int imin = i; //Storing the first value as min
        for(int j = i+1; j<n; j++){
            //Checking if the current element is smaller than min
            if(a[j]<a[imin]){
                imin = j; //Updating the min
            }
        }
        //Swapping the current element and min element
        int temp = a[i];
        a[i] = a[imin];
        a[imin] = temp;
    }
}
//Driver code
int main(){
    int a[] = {10,40,30,70,50,90,40,20};
    selectionSort(a,8);
    for(int i=0;i<8;i++){
        cout<<a[i]<<endl;
    }
}