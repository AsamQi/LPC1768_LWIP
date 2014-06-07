#ifndef _INTERFACE_H_
#define _INTERFACE_H_


#define	PORT_0	(0x00)
#define	PORT_1	(0x01)
#define	PORT_2	(0x02)
#define	PORT_3	(0x03)



#define	PIN_0	(0X00)
#define	PIN_1	(0X01)
#define	PIN_2	(0X02)
#define	PIN_3	(0X03)
#define	PIN_4	(0X04)
#define	PIN_5	(0X05)
#define	PIN_6	(0X06)
#define	PIN_7	(0X07)
#define	PIN_8	(0X08)
#define	PIN_9	(0X09)
#define	PIN_10	(0X0A)
#define	PIN_11	(0X0B)
#define	PIN_12	(0X0C)
#define	PIN_13	(0X0D)
#define	PIN_14	(0X0E)
#define	PIN_15	(0X0F)
#define	PIN_16	(0X10)
#define	PIN_17	(0X11)
#define	PIN_18	(0X12)
#define	PIN_19	(0X13)
#define	PIN_20	(0X14)
#define	PIN_21	(0X15)
#define	PIN_22	(0X16)
#define	PIN_23	(0X17)
#define	PIN_24	(0X18)
#define	PIN_25	(0X19)
#define	PIN_26	(0X1A)
#define	PIN_27	(0X1B)
#define	PIN_28	(0X1C)
#define	PIN_29	(0X1D)
#define	PIN_30	(0X1E)
#define	PIN_31	(0X1F)











#define IO_LED0_PORT			(PORT_2)
#define IO_LED0_PIN				(PIN_0)	

#define IO_LED1_PORT			(PORT_2)
#define IO_LED1_PIN				(PIN_1)	

#define IO_LED2_PORT			(PORT_2)
#define IO_LED2_PIN				(PIN_2)	

#define IO_LED3_PORT			(PORT_2)
#define IO_LED3_PIN				(PIN_3)	

#define IO_LED4_PORT			(PORT_2)
#define IO_LED4_PIN				(PIN_4)	

#define IO_LED5_PORT			(PORT_2)
#define IO_LED5_PIN				(PIN_5)	

#define IO_LED6_PORT			(PORT_2)
#define IO_LED6_PIN				(PIN_6)	

#define IO_LED7_PORT			(PORT_2)
#define IO_LED7_PIN				(PIN_7)	



typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;

typedef unsigned char BYTE;

typedef unsigned char BOOL;



enum enumIODef
{
	IO_LED0 = 0,
	IO_LED1,
	IO_LED2,
	IO_LED3,
	IO_LED4,
	IO_LED5,
	IO_LED6,
	IO_LED7,
	IO_SDCARDCS,
	IO_SDCARDCD,
	IO_SDCARDPWR,
	IO_I2C_SCL,
	IO_I2C_SDA,
	IO_MAX,
};



typedef struct _INTERFACE_INFO
{
	U32 SysTickCount;
	U32 IIcCount;
	U32 CanCount;
	U32 CanCount2;
	U8  OpenUartDevice;
	U32 UartCount;
}INTERFACE_INFO;




#ifndef 	_INTERFACE_GLOBAL_
	#define 	INTERFACE_GLOBAL		extern
#else
	#define 	INTERFACE_GLOBAL	
#endif















INTERFACE_GLOBAL void IO_Write(U32 IOEnum,BOOL status);
INTERFACE_GLOBAL BOOL IO_Read(U32 IOEnum);


#endif






















































