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

static const int enoxs = 55678;
int  lenght = 6;
void runHello(){
    printf("Hello, World! \n");
    int size = 0;
    scanf("%d",&size);
    printf("size: %d %i \n",size,size);
}
int main() {
//    runPoint();
//    runTask1();
//    runTask2();
//    runTask3();
//    runTask4();
//    runTask5();
    runTask6();
//    runHello();
    return 0;
}

runPoint(){
    int auto num = 5;
    int *point = &num;
    int **pot = &point;
    int *arr[10];
    printf("num  : %p \n",num);
    printf("&num : %p \n",&num);
    printf("point: %p \n",point);
    printf("*point: %p \n",*point);

    printf("pot   : %p \n",pot);
    printf("*pot  : %p \n",*pot);
    printf("**pot : %p \n",**pot);
    printf("arr: %d \n",*arr);


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
    printf("%d \n",size);

    char str [] = "Hello World";
    char *p = str;
    char *point;
    printf("str -> %d \n", sizeof(str));
    printf("*p -> %d \n", sizeof(*p));
    printf("p -> %d \n", sizeof(p));// WHY?
    printf("short -> %d \n", sizeof(short));
    printf("int -> %d \n", sizeof(int));
    printf("long -> %d \n", sizeof(long));
    printf("float -> %d \n", sizeof(float));
    printf("double -> %d \n", sizeof(double));
    printf("point -> %d \n", sizeof(point));// WHY?
    sprintf(str,"Enoxs's");
    printf(str);

}

//Enoxs TO-DO: address : arr + 1 , &arr +1
runTask4(){
    int arr[5];
    printf("address arr: %p \n",arr);
    printf("address &arr: %p \n",&arr);
    printf("address ++ \n",&arr);
    printf("address arr+1:%p \n",arr+1);
    printf("address &arr+1:%p \n",&arr+1);

    int num = sizeof(arr) / sizeof(int);
    printf("num : %d\n",num);
    printf("*(&arr+1) : %p\n",*(&arr+1));
    printf("arr : %p\n",arr);
    num = *(&arr+1) - arr;
    printf("num : %d\n",num);
}
//Enoxs TO-DO: const static 用法

runTask5(){
    register int h1 = 5;
    h1++;
    printf("%d\n",h1);
    h1 = h1+1;
    printf("%d\n",h1);
    const int num = 5;
    static int size;
    printf("number and size: %d | %d \n",num,size);
//    size = 6;
//    num =7;
    ++size;
    printf("number and size: %d | %d \n",num,size);
    printf("enoxs: %d \n",enoxs);

    extern int go;
    printf("go: %d",go);
}
int go = 5;

//Enoxs TO-DO: bit operation
runTask6(){
    int num = 1;
    printf("%d \n", ~num);
    unsigned long num_a = 0x00001111;
    unsigned long num_b = 0x00000202;
    unsigned long num_c;
    num_c = num_a & (~num_b);
    num_c = num_a | num_c;
    printf("%lx" ,  num_c);


}
//Enoxs TO-DO: Recuive funcition output