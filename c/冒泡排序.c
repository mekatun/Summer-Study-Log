
// 生成一个随机数数组，然后将其冒泡排序
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int removeElement(int* nums, int numsSize, int val);
int* genertateRandomArray(int arrlenth,int max,int min,int* size);
void* BubbleSort(int arr[],int lenth);

int main(){

	// int arrlenth = 100;
	int min = 1;
	int max = 40;
	int lenth = 20;
	int size;

	srand(time(NULL));

	int* array = genertateRandomArray(lenth,max,min,&size);

	BubbleSort(array,size);

	// int arrsize = removeElement(array,lenth,3);

	for(int i = 0;i < size;i++){
		printf("%d   %d\n",i,array[i]);
	}
	// printf("%d\n",arrsize);
	free(array);

	return 0;
}


int* genertateRandomArray(int arrlenth,int max,int min,int* size) {

	int* arr = (int*)malloc(arrlenth * sizeof(int)); //申请arrlength大小的数组空间.

	if(arr == NULL){
		printf("没有足够的内存生成这个随机数组\n");
		return NULL;
	};

	for(int i = 0;i < arrlenth;i++){
		arr[i] = rand() % (max - min + 1) + min;
	};
	*size = arrlenth;

	return arr;
}

void* BubbleSort(int arr[],int lenth){
	int i,j,t,flag = 0;

	for(i = 0;i < lenth;i++){
		for(j = lenth - 1;j > i;j--){
			if(arr[j] > arr[j-1]){
				t = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = t;
				flag = 1;
			}
		}
		
		if(flag == 0)
			break;
		else
			flag = 0;
	}
}
    int removeElement(int* nums, int numsSize, int val) {
    	int size = numsSize;
        for(int i = 0;i < numsSize; ){
            if(nums[i] == val){
                nums[i] = nums[i + 1];
                size--;
            }else{
                i++;
            }
        }
        return size;
    }