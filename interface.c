#define  _INTERFACE_GLOBAL_

#include "LPC17xx.h"

#include "comm.h"
#include "monitor.h"
#include "lpc17xx_gpio.h"

#include "lwip/mem.h"
#include "lwip/memp.h"
#include "lwip/pbuf.h"
#include "lwip/udp.h"
#include "lwip/tcp.h"
#include "lwip/tcp_impl.h"

#include "netif/ethernetif.h"
#include "netif/etharp.h"

#include <string.h>
#include<stdio.h>

#include "interface.h"






/***************************************************************************************************************************
**o‘那y??3?:	 	IO_Write
**o‘那y1|?邦:	 	
**豕??迆2?那y:
**﹞米??2?那y:
***************************************************************************************************************************/
void IO_Write(U32 IOEnum,BOOL status)
{
	uint8_t Pin,Port;
	BOOL bRes = TRUE;
	
	switch(IOEnum)
	{
		case IO_LED0:			Port = IO_LED0_PORT;
								Pin = IO_LED0_PIN;
								break;
		case IO_LED1:			Port = IO_LED1_PORT;
								Pin = IO_LED1_PIN;
								break;
		case IO_LED2:			Port = IO_LED2_PORT;
								Pin = IO_LED2_PIN;
								break;
		case IO_LED3:			Port = IO_LED3_PORT;
								Pin = IO_LED3_PIN;
								break;
		case IO_LED4:			Port = IO_LED4_PORT;
								Pin = IO_LED4_PIN;
								break;
		case IO_LED5:			Port = IO_LED5_PORT;
								Pin = IO_LED5_PIN;
								break;
		case IO_LED6:			Port = IO_LED6_PORT;
								Pin = IO_LED6_PIN;
								break;
								
		case IO_LED7:			Port = IO_LED7_PORT;
								Pin = IO_LED7_PIN;
								break;

		
		default:				printf("\r\n Other Port");
								bRes = FALSE;
								break;
	}
	
	if(bRes)
	{
		GPIO_SetDir(Port,1 << Pin,1);
		if(status)
		{
			GPIO_SetValue(Port,1 << Pin);
		}
		else
		{
			GPIO_ClearValue(Port,1 << Pin);
		}
	}
}

/***************************************************************************************************************************
**o‘那y??3?:	 	IO_Read
**o‘那y1|?邦:	 	
**豕??迆2?那y:
**﹞米??2?那y:
***************************************************************************************************************************/
BOOL IO_Read(U32 IOEnum)
{
   	uint8_t Pin,Port;
	BOOL bRes = TRUE;
	switch(IOEnum)
	{						
		case IO_LED0:			Port = IO_LED0_PORT;
								Pin = IO_LED0_PIN;
								break;
		case IO_LED1:			Port = IO_LED1_PORT;
								Pin = IO_LED1_PIN;
								break;
		case IO_LED2:			Port = IO_LED2_PORT;
								Pin = IO_LED2_PIN;
								break;
		case IO_LED3:			Port = IO_LED3_PORT;
								Pin = IO_LED3_PIN;
								break;
		case IO_LED4:			Port = IO_LED4_PORT;
								Pin = IO_LED4_PIN;
								break;
		case IO_LED5:			Port = IO_LED5_PORT;
								Pin = IO_LED5_PIN;
								break;
		case IO_LED6:			Port = IO_LED6_PORT;
								Pin = IO_LED6_PIN;
								break;
		case IO_LED7:			Port = IO_LED7_PORT;
								Pin = IO_LED7_PIN;
								break;
					
	
								
		default:				printf("\r\n Read Other Port");			
								bRes = FALSE;
								break;
	}
	if(bRes)
	{
		bRes = (BOOL)((GPIO_ReadValue(Port) >> Pin) & 0X01);
	}
	return bRes;
}


