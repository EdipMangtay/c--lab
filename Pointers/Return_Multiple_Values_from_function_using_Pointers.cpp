#include "iostream"
using namespace std;

int getMin(int number[],int size){
    int min = number[0]; // this will store the first element of the array
    for(int i =0; i<size;i++){
        if(number[i]<min)
        {
            min = number[i]; // this will store the minimum value of the array
        }
    }
    return min; // this will return the minimum value of the array
}
int GetMax(int A[],int size){ // this function will return the maximum value of the array
    int max= A[0];
    for(int p=0; p<size;p++){
        if(A[p]>max){
            max = A[p]; // this will store the maximum value of the array
        }
    }
    return max;
}
//if I want to return multiple values from a function, I can use pointers
//I can use pointers to return multiple values from a function
void getMinAndMax(int numbers[],int size,int* min,int* max){
    for (int i = 0; i <size; i++)
    {
        if(numbers[i]<*min){
            *min = numbers[i]; // this will store the minimum value of the array
        }
        if(numbers[i]>*max){
            *max = numbers[i]; // this will store the maximum value of the array
        }
    }

}

int main(){
    int Numbers[5] = {1,2,3,-4,5}; // this is an array of integers
    //cout << getMin(Numbers,5)<<endl; // this will print the minimum value of the array
    //cout << GetMax(Numbers,5)<<endl;// this will print the maximum value of the array
   
    int min = Numbers[0]; // this will store the first element of the array
    int max = Numbers[0]; // this will store the first element of the array
    getMinAndMax(Numbers,5,&min,&max); // this will store the minimum and maximum value of the array
    cout << "Min: "<<min<<endl; // this will print the minimum value of the array
    cout << "Max: "<<max<<endl; // this will print the maximum value of the array





}