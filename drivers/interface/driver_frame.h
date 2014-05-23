/**

 * Smartflie control firmware
 *

 */
 
 typedef enum
{
	UART5 =0 ,
}DeviceName_t;

typedef enum
{
	CharDevice =0,
	BlockDevice =1 ,
	NetDevice =2,
	MixDevice =3,
}DeviceType_t;

typde enum
{
	SharedDevice =0,
	NotSharedDevice =1,
}SharedType_t;

 typedef struct
 {
	u8 (*devOpen)(void *pd);
	u8 (*devRead)(,u8 addr,u8 *buffer,u16 size);
	u8 (*devWrite)(u8 addr,u8 *buffer, u16 size);
	u8 (*devIoctl)(u8 too, void *pd);
	u8 (*devClose)(void *pd);

 }DevOperations_t;

typedef struct
{
	DeviceName_t	devicename;
	DeviceType_t	devicetype;
	SharedType_t	sharedtype;
	u8				opencout;
	DevOperations_t	op;
}DevFrameWork_t;

typedef struct
{
	DeviceName_t devicename;
	DevFrameWork_t DevFrameWork;
	Device_t *next;
}Device_t;
