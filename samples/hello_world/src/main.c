/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include "rf_system.h"

int main(void)
{
	
	// Initialize the RF Clock Generator
    SYS_ClkGen_Config();
 
    // Initialize RF System
    SYS_Load_Cal(WSS_ENABLE_BLE);
 
	
	printf("Hello World 35! %s\n", CONFIG_BOARD_TARGET);

    while(1);
	return 0;
}
