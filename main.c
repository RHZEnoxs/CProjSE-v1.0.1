#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

/**
 * malloc宣告使用等等
 * swap 不用temp的方式
 * sizeof char string float
 * address: arr+1 &arr+1
 * const static 用法
 * bit opertation
 * Recusive function output
 */
int main() {
    runTask1();
//    runTask2();
//    runTask3();
//    runTask4();
    return 0;
}
void runHello(){
    printf("Hello, World!\n");
    int size = 0;
    scanf("%d",&size);
    printf("size: %d \n",size);
}
/**
 *
 *  void *malloc(size_t size);
 *  void *calloc(size_t nmemb, size_t size);
 *  void free(void *ptr);
 *  void *realloc(void *ptr, size_t size);
 */

//Enoxs TO-DO: malloc 宣吿使用
runTask1(){
    int *point ;//= malloc(sizeof(int));
    point = malloc(sizeof(int));
    printf("Value : %d \n", *point);
    printf("Address : %p \n",point);
    *point = 20;
    printf("Value : %d \n", *point);
    printf("Address : %p \n",point);
    free(point);
    //一維陣列
    // 用來管理動態記憶體的指標
    int *arr;
    // 指定空間大小
    int len = 10;
    int max = 15;
    // 取得記憶體空間
    arr = malloc(len * sizeof(int));
    if(arr == NULL){
        // 無法取得記憶體空間
        fprintf(stderr,"Error: unable to allocate required memory\n");
    }

//    realloc(arr,max * sizeof(int));
//    memset(arr,0,max * sizeof(int));

    // 使用動態取得的記憶體空間
    int i,j;
    for(i=0;i<max;i++){
//        arr[i] = i;
//        printf("%d " , arr[i]);
        printf("%d " , *arr);
    }
    // 釋放記憶體空間
    free(arr);
    printf("\n");
    //二維陣列
    int x=10;
    int y=5;
    int *array;
    int index;
    array = malloc(x * y * sizeof(int));
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            index = i*y + j;
            array[index] = index;
            printf("%d " , array[index]);
        }
    }
    free(array);
    printf("\n");
    arr = calloc(len , sizeof(int));
    for(i=0;i<len;i++){
        printf("%d " , arr[i]);
    }


}


//Enoxs TO-DO: swap 不用 temp 方式
runTask2(){
    //swap
    int a = 5;
    int b = 6;
    printf("a:%d b:%d \n",a,b);
    a = a^b;
    printf("xor : %d \n",a );
    b = a^b;
    printf("b : %d \n", b);
    a = a^b;
    printf("a : %d \n" , a );
}



//Enoxs TO-DO: const static 用法
//Enoxs TO-DO: bit operation
//Enoxs TO-DO: Recuive funcition output




/**
 * Size Of
 */
//Enoxs TO-DO: sizeof char String float

runTask3(){
    int x = 8;
    int size;
    size = sizeof(x);
    printf("%d \n",size);// 位元組
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    size = sizeof(arr);
    printf("%d \n",size);//

    size = sizeof(arr)/sizeof(arr[0]);
    printf("%d \n",size);//

    char val[] = "qwerty";
    size = sizeof(val);
    printf("%d \n",size);//

    char value[] = {'r','h','z'};
    size = sizeof(value);
    printf("%d \n",size);//
}

//Enoxs TO-DO: address : arr + 1 , &arr +1
runTask4(){
    int arr[5] = {1};
    printf("address %p \n",arr);
    printf("address %p \n",&arr);

    printf("address %p \n",arr+1);
    printf("address %p \n",&arr+1);
}
