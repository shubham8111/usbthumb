/********************************************************************
 FileName:		usart_util.h
********************************************************************/
#ifndef USART_UTIL_H
#define USART_UTIL_H

#include "usart.h"

void usart_init();
void usart_init(){
	OpenUSART( USART_TX_INT_OFF  &
	           USART_RX_INT_OFF  &
	           USART_ASYNCH_MODE &
	           USART_EIGHT_BIT   &
	           USART_CONT_RX	   &
	           USART_BRGH_LOW,25 ); // 16Mhz/64/(25+1) ~ 9615.38kbps
}

void usart_write_byte(unsigned char byte);
void usart_write_byte(unsigned char byte){
	WriteUSART(byte);
	while (BusyUSART());
}



#endif

