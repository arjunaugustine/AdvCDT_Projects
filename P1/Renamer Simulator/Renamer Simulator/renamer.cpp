//
//  main.cpp
//  Renamer Simulator
//
//  Created by Arjun Augustine on 1/20/16.
//  Copyright © 2016 Arjun Augustine. All rights reserved.
//

#include <iostream>
#include <assert.h>
#include "renamer.h"

using namespace std;

renamer::renamer(unsigned int n_log_regs,
                 unsigned int n_phys_regs,
                 unsigned int n_branches) {
    
    assert( n_phys_regs > n_log_regs);
    assert( n_branches >= 1 && n_branches <= 64 );
    AMT = new int[n_log_regs];
    RMT = new int[n_log_regs];
    FL->PRN = new unsigned int[n_phys_regs];
    FL->head = FL->PRN;
    FL->tail = FL->PRN;
    FL->empty = false;
    
}

int main(int argc, const char * argv[]) {
    
    return 0;
}
