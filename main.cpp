//
//  main.cpp
//  结构体
//
//  Created by Admin on 18/1/1.
//  Copyright © 2018年 Admin. All rights reserved.
//

#include <iostream>
using namespace std;

int fun(int x)
{
    return x*x;
}

int main(){

struct DATA{
    int year, month, day;
};
    
struct staff{
    int no;
    char name[21];
    char sex;
    DATA bithday;
    double salary;
};
    
    staff s1 = {1001,"wang haigang",'M',{1993,03,01},6666.00};
    
    s1.no = s1.no++;
    
    cout << s1.no << endl;
    
    cout << s1.bithday.day << endl;
    
    struct RECT{
        int left, top, right, bottom;
    };
    
    RECT rects[3] = {{1,1,10,10},{5,5,25,32},{100,100,105,200}};
    
    //
    
    int j=2;
    int y;
    for (int i=1; i<3; i++) {
        y = fun(j++);
        cout << y << endl;
    }
    
    
}
