//
//  array.cpp
//  CMirrorXCode
//
//  Created by fu qingwang on 2020/6/19.
//  Copyright © 2020 fu qingwang. All rights reserved.
//

#include "array.hpp"

/*
 打印数组
 */
void arrayPrint(){
    int array[] = {10,20};
    cout << "array(0) := "<<array[1] << endl;
    cout << "array(0) := "<<(long)&array[1] << endl;
    int array2[5] = {30,20};
    for(int i=0;i< sizeof(array2)/sizeof(array2[0]);i++){
        cout << "array2("<<i<<") := "<<array2[i] << endl;
    }
    int *p=array2;
    for(int i=0;i< sizeof(array2)/sizeof(array2[0]);i++){
        cout << "p-->array2("<<i<<") := "<<*p << endl;
        p++;
    }
}

/*
 *找到最大的数组value和下标
 */
void arrayFindMax(){
    int array2[5] = {30,20,10,15,32};
    int max=0;
    int maxIndex=0;
    for(int i=0;i< sizeof(array2)/sizeof(array2[0]);i++){
        if(array2[i]>max){
            max=array2[i];
            maxIndex=i;
        }
    }
    cout << "max array2("<<maxIndex<<") := "<<max << endl;
}

void arraySwap(){
    int array2[5] = {30,20,10,15,32};
//    int array2[6] = {30,20,10,15,32,40};
    
    int length = sizeof(array2)/sizeof(array2[0]);
    int halfIndex=length/2;
    int countIndex=0;
    cout << "swap array before halfIndex="<<halfIndex << endl;
    for(int i=0;i<length;i++){
        if(countIndex<(length%2==0?halfIndex:halfIndex+1)){
            cout << "swap array in=" <<(length-countIndex-1)<<"countIndex="<<countIndex<< "i="<<i<<"array2["<<length-countIndex-1<<"]="<<array2[length-countIndex-1]<<endl;
            int temp = array2[length-countIndex-1];
            cout << "swap array before temp="<<temp<<"----array2["<<i<<"]="<<array2[i] <<endl;
            array2[length-countIndex-1]=array2[i];
            array2[i]=temp;
            countIndex++;
        }
    }
    cout << "swap array before" << endl;
    for(int i=0;i< sizeof(array2)/sizeof(array2[0]);i++){
        cout << "array2("<<i<<") := "<<array2[i] << endl;
    }
    cout << "swap array end" << endl;
}

void arrayTwoDimension(){
    int array[2][3]={
        {1,2,3},
        {3,4,5}
    };
    cout << "arrayTwoDimension start" << endl;
    int length=sizeof(array);
    int length2=sizeof(array[0]);
    int length3=sizeof(array[0][1]);
    int first=length/length2;
    int second=length2/length3;
    cout << "arrayTwoDimension start" <<length<<"length2="<<length2<<"length3="<<length3<< endl;
    cout << "arrayTwoDimension first=" <<first<< endl;
    cout << "arrayTwoDimension second=" <<second<< endl;
    
    for(int i=0;i<first;i++){
        for(int j=0;j<length2/length3;j++){
            cout << "arrayTwoDimension["<<i<<"]["<<j<<"]="<<array[i][j]<< endl;
        }
    }
}
