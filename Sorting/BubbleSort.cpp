#include<iostream>
using namespace std;
//Bubble sort implementation
void bubbleSort(int a[], int n){
    //First loop for iterating over the array
    for(int i=1; i<n-1; i++){
        //Flag to avoid extra passes
        int flag=0;
        //Second loop for checking the values
        for(int j=0; j<=n-i-1; j++){
            //Checking the condition for swapping
            if(a[j]>a[j+1]){
                //Swapping the values
                swap(a[j],a[j+1]);
                //Raising the flag if a swap is done
                flag=1;
            }
        }
        //Breaking out of the loop if if flag is not raised
         if(flag==0){
            break;
        }
    }
   
}
//Driver code
int main(){
    int a[] = {1,4,2,6,3,7,5};
    bubbleSort(a,7);
    //Printing the sorted array
    for(int i=0; i<7; i++){
        cout<<a[i]<<endl;
    }
}