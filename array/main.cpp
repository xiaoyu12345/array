//
//  main.cpp
//  array
//
//  Created by 小鱼🐟 on 15/12/16.
//  Copyright (c) 2015年 小鱼🐟. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[3]={1,2,3};
    printf("a[0]=%d   a[1]=%d   a[2]=%d\n",a[0],a[1],a[2]);
    int b[4];
    printf("%x      %x\n",a,b);
    int i;
    for(i=1;i<10;i++)
    {
        b[i]=i;
    }
    printf("a[0]=%d   a[1]=%d   a[2]=%d\n",a[0],a[1],a[2]);
    for(i=1;i<10;i++)
    {
        printf("%d\n",b[i]);
    }
    
    return 0;
}
