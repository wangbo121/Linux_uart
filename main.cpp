/*
 * main.cpp
 *
 *  Created on: Nov 4, 2017
 *      Author: wangbo
 */


#include <stdio.h>

#include "uart.h"

T_UART_DEVICE uart;

int read_and_process_data(unsigned char *buf,unsigned int len);

int read_and_process_data(unsigned char *buf,unsigned int len)
{
    printf("uart function\n");
}

int main()
{
    printf("hello Linux_uart\n");

    uart.uart_name = "/dev/ttyUSB0";
    uart.baudrate = 9600;
    uart.databits = 8;
    uart.parity = 0;
    uart.stopbits = 1;
    uart.ptr_fun = read_and_process_data;

    open_uart_dev(uart.uart_name);

    return 0;
}

