#include<stdio.h>
#define MAX 20

void print(int ar[],int n){
	for(int i = 0;i<n;i++){
			printf("%d",ar[i]);
}

int binsearch(int ar[],int n){
	while(low < high){
		int mid = low + (high - low) / 2;
		if(ar[mid]<arr[high]){
			low = mid+1;
		} 
		else{
			high = mid - 1;
		}
	}
	return low;
	
}

int main() {
    int data[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    
    int result = binarySearch(data, n);
    
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}
