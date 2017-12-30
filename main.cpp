//
//  main.cpp
//  动态分配
//
//  Created by Admin on 17/12/28.
//  Copyright © 2017年 Admin. All rights reserved.
//



/* (1) using the pointer as the inpute of the function
#include <iostream>
using namespace std;

void swap(int *p1, int *p2)
{
    int t;
    t = *p1, *p1 = *p2, *p2 = t;
}


int main() {
    int a, b;
    cin >> a >> b;
    if (a>b) {
        swap(&a, &b);
    }
    cout << "min=" << a << ", max=" << b << endl;
    return 0;
}
*/

/*
// (2) using the array to be the input of the function

#include <iostream>
using namespace std;

double average (double *a, int n)
{
    double aver=0.0, *p=a;
    int i;
    for (i=0; i<n; i++,p++) {
        aver = aver + *p;
    }
    return n <= 0 ? 0 :aver/n;
    
}

int main()
{
    double x[10] = {6,7,8,9,10,11,12,13,14,15};
    int n = 10;
    double aver;
    aver = average(x, n);
    cout << "average = " << aver << endl;
    
}
*/

// (3)
#include <iostream>
using namespace std;

// 自定义函数实现copy character的功能

char *stringcopy (char *strDest, const char *strSrc){
    char *p1 = strDest;
    const char *p2 = strSrc;
    while (*p2 != '\0') {
        *p1 = *p2, p1++, p2++;
    }
    *p1 = '\0';
    return strDest;
}

int main(){
    char s1[80], s2[80], s3[80] = "string=";
    cin >> s1;
    stringcopy(s2, s1);
    cout << s2 << endl;
    stringcopy(&s3[7], s2);
    cout << s3 << endl;
}

