//
//  main.cpp
//  Diceware++
//
//  Created by Harsh Mistry  on 2015-10-28.
//  Copyright (c) 2015 Harsh Mistry . All rights reserved.
//

#include <iostream>
#include "diceware.h"
#include <ctime>



int main(int argc, const char * argv[]) {

    //With No Console Output
    diceWarePassword passDiceWare =  GenPass(6, false);
    
    //With Console Output
    diceWarePassword passDiceWareConsole =  GenPass(6, false);
    cout << "Password : " << endl;
    cout << "-----------" << endl;
    cout << passDiceWareConsole << endl;
    
}
