//
//  Controller.cpp
//  ArrayApp
//
//  Created by Cortez, Jairo on 1/29/18.
//  Copyright © 2018 Cortez, Jairo. All rights reserved.
//

#include  <iostream>

int y[10];

void doSomething()
{
    int x[10];
    int *z = new int[10];
    
    delete[]z;
}

int main()
{
    doSomething();
}
