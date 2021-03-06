//
//  pointer.cpp
//  cplusplus
//
//  Created by junhui cao on 20/09/2018.
//  Copyright © 2018 junhui cao. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int get_min(int i,int j){
    return i>j?j:i;
}



int main() {
    int p; //这是一个普通的整型变量
    int *p1; //首先从P 处开始,先与*结合,所以说明P1是一个指针,然后再与int 结合,说明指针所指向的内容的类型为int 型.所以P1是一个返回整型数据的指针
    int p2[3]; //首先从P2 处开始,先与[]结合,说明P2是一个数组,然后与int 结合,说明数组里的元素是整型的,所以P2是一个由整型数据组成的数组
    int *p3[3]; //首先从P3 处开始,先与[]结合,因为其优先级比*高,所以P3 是一个数组,然后再与*结合,说明数组里的元素是指针类型,然后再与int 结合,说明指针所指向的内容的类型是整型的,所以P3 是一个由返回整型数据的指针所组成的数组,指针数组
    int (*p4)[3]; //首先从P4 处开始,先与*结合,说明P4 是一个指针然后再与[]结合(与"()"这步可以忽略,只是为了改变优先级),说明指针所指向的内容是一个数组,然后再与int 结合,说明数组里的元素是整型的.所以P4 是一个指向由整型数据组成的数组的指针
    int **p5; //首先从P5 开始,先与*结合,说是P5 是一个指针,然后再与*结合,说明指针所指向的元素是指针,然后再与int 结合,说明该指针所指向的元素是整型数据.由于二级指针以及更高级的指针极少用在复杂的类型中,所以后面更复杂的类型我们就不考虑多级指针了,最多只考虑一级指针.
    int p6(int); //从P 处起,先与()结合,说明P 是一个函数,然后进入()里分析,说明该函数有一个整型变量的参数,然后再与外面的int 结合,说明函数的返回值是一个整型数据
    int (*p7)(int); //从P 处开始,先与指针结合,说明P 是一个指针,然后与()结合,说明指针指向的是一个函数,然后再与()里的int 结合,说明函数有一个int 型的参数,再与最外层的int 结合,说明函数的返回类型是整型,所以P 是一个指向有一个整型参数且返回类型为整型的函数的指针
    int *(*p8(int))[3]; //可以先跳过,不看这个类型,过于复杂从P 开始,先与()结合,说明P 是一个函数,然后进入()里面,与int 结合,说明函数有一个整型变量参数,然后再与外面的*结合,说明函数返回的是一个指针,,然后到最外面一层,先与[]结合,说明返回的指针指向的是一个数组,然后再与*结合,说明数组里的元素是指针,然后再与int 结合,说明指针指向的内容是整型数据.所以P 是一个参数为一个整数据且返回一个指向由整型指针变量组成的数组的指针变量的函数.
    int *ptr1;  //指针的类型是int*  指针所指向的类型是int
    char *ptr2; //指针的类型是char* 指针所指向的的类型是char
    int **ptr3; //指针的类型是int** 指针所指向的的类型是int*
    int(*ptr4)[3]; //指针的类型是int(*)[3] 指针所指向的的类型是int[3]
    int *(*ptr5)[4];    //指针的类型是int*(*)[4] 指针所指向的的类型是int*()[4] 指向由整型指针变量组成的数组的指针变量的函数.

    int array[20]={0};
    int *ptr6=array;
}
