//
//  main.cpp
//  newANDdelete
//
//  Created by Admin on 17/12/29.
//  Copyright © 2017年 Admin. All rights reserved.
//

#include <iostream>
using namespace std;

int *f1(int n)
{
    int *p, i;
    p = new int[n];
    for (i=0; i<n; i++) {
        p[i] = i;
    }
    return p;
}

void f2(int *p, int n)
{
    while (n-- > 0) {
        cout << *p++ << " "<< endl;
    }
}

void f3(int *p)
{
    delete [] p;
}


int main() {
    int *pi;
    pi = f1(5);
    f2(pi,5);
    f3(pi);
    return 0;
   
}
