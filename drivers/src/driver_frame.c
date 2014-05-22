/**

 * Smartflie control firmware
 *

 */
 
 typedef struct
 {
	u8 (*devOpen)(void *pd);
	u8 (*devRead)(u8 *buffer,u16 size);
	u8 (*devWrite)(u8 *buffer, u16 size);
	u8 (*devIoctl)(u8 too, void *pd);
	u8 (*devClose)(void *pd);

 }DevOperations_t;
 
 typedef enum
{
	UART5 =0 ,
}DeviceName_t;



typedef struct
{
	DeviceName_t	devicename;
	DeviceType_t	devicetype;
	SharedType_t	sharedtype;
	u8				opencout;
	DevOperations_t	op;
}DevFrameWork;
 