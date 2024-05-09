#ifndef __ISP_IDEFINES_H__
#define __ISP_IDEFINES_H__


#include "isp_type.h"

#define ISP_NUM_MAX		(2)	//(1)
#define VPSS_MAX_GRP	(16)

#define SHADING_LUT_NUM		(61)

#define CHECK_ISPCHN(chn) \
do{ 								  \
	if ((chn<0) || (chn>=ISP_NUM_MAX)) {	\
		return ISP_FAILURE;	\
	} \
}while(0)


typedef enum {
	SENSOR_CHIP_UNKNOW	=	0,
	SENSOR_CHIP_SC1330T =	91,
	SENSOR_CHIP_H42 	=	92,
	SENSOR_CHIP_H66 	=	93,
	SENSOR_CHIP_SC035GS	=	94,
	SENSOR_CHIP_SC120AT	=	95,
	SENSOR_CHIP_SC1035	=	96, 
	SENSOR_CHIP_SC1037	=	97,
	SENSOR_CHIP_H81 	=	98,
	SENSOR_CHIP_H65 	=	99,
	
	SENSOR_CHIP_SP140A	=	81,
	SENSOR_CHIP_H62 	=	82,
	SENSOR_CHIP_BG0703	=	83,
	SENSOR_CHIP_SC1145	=	84,
	SENSOR_CHIP_SC1135	=	85,
	SENSOR_CHIP_OV9732	=	86,
	SENSOR_CHIP_OV9750	=	87,
	SENSOR_CHIP_SP1409	=	88,
	SENSOR_CHIP_MIS1002 =	89,
	
	SENSOR_CHIP_SC2045	=	21,
	SENSOR_CHIP_IMX222	=	22,
	SENSOR_CHIP_IMX322	=	23,
	SENSOR_CHIP_AR0237_IR	=	24,
	SENSOR_CHIP_SC2035	=	25,
	SENSOR_CHIP_F02 	=	26,
	SENSOR_CHIP_AR0237	=	27,
	SENSOR_CHIP_IMX323	=	28,
	SENSOR_CHIP_PS5220	=	29,
	
	SENSOR_CHIP_SC2335	=	30,
	SENSOR_CHIP_H63 	=	31,
	SENSOR_CHIP_SC202CS	=	32,
	SENSOR_CHIP_SC1346	=	36,	//sc1345h
	SENSOR_CHIP_SC133GS  =	37,
	SENSOR_CHIP_SC1345	=	38,	
	SENSOR_CHIP_SC1335T =	39,
	SENSOR_CHIP_SC1336	=	40,
	
	SENSOR_CHIP_SC307C	=	70, //��ӦSC2232
	SENSOR_CHIP_SC2135	=	71,
	SENSOR_CHIP_F22 	=	72,
	SENSOR_CHIP_BG0803	=	73,
	SENSOR_CHIP_PS5230	=	74,
	SENSOR_CHIP_PS3210	=	75,
	SENSOR_CHIP_GC2023	=	76,
	SENSOR_CHIP_SC2145	=	77,
	SENSOR_CHIP_SC200AI =	78,
	SENSOR_CHIP_SC2310	=	79,

	SENSOR_CHIP_SC223A	=	41, 
	SENSOR_CHIP_GC3003 =	42,
	SENSOR_CHIP_MIS4001 =	43,
	SENSOR_CHIP_OV2718	=	48,
	SENSOR_CHIP_SC2239	=	49,
	
	SENSOR_CHIP_SC1235	=	50,
	SENSOR_CHIP_BF3016	=	51,
	SENSOR_CHIP_IMX307	=	52,
	SENSOR_CHIP_SC2235E =	53, 
	SENSOR_CHIP_307H	=	54,
	SENSOR_CHIP_F37 	=	55,
	SENSOR_CHIP_SP2305	=	56,
	SENSOR_CHIP_F37P    =   57,
	SENSOR_CHIP_SC307P	=	58, //��ӦSC2300
	SENSOR_CHIP_MIS2006 =	59, 
	
	SENSOR_CHIP_BG0806	=	60,
	SENSOR_CHIP_IMX291	=	61,
	SENSOR_CHIP_PS5250	=	62,
	SENSOR_CHIP_SC2235	=	63,
	SENSOR_CHIP_SC2145H =	64,
	SENSOR_CHIP_GC2033	=	65,
	SENSOR_CHIP_F28 	=	66,
	SENSOR_CHIP_SC2235P =	67,
	SENSOR_CHIP_MIS2003 =	68,//��ӦMIS2236
	SENSOR_CHIP_MIS2236 =	68,
	SENSOR_CHIP_SC307E	=	69,
	SENSOR_CHIP_SC2331	=	101,
	SENSOR_CHIP_SC2336	=	102,
	SENSOR_CHIP_AR0330	=	130,
	SENSOR_CHIP_SC3035	=	131,
	SENSOR_CHIP_SC3235	=	132, //530ƽ̨ΪSENSOR_CHIP_AUGE
	SENSOR_CHIP_Q03 	=	133,
	SENSOR_CHIP_SC3335	=	135,
	SENSOR_CHIP_SC3338	=	136,
	SENSOR_CHIP_OV4689	=	140,
	SENSOR_CHIP_SC4236	=	141,
	SENSOR_CHIP_K02 	=	142,
	SENSOR_CHIP_IMX347	=	143,
	SENSOR_CHIP_PS5510	=	150,
	SENSOR_CHIP_K03 	=	151,
	SENSOR_CHIP_SC5035	=	152,
	SENSOR_CHIP_SC5235	=	153,
	SENSOR_CHIP_SC335E	=	154,
	SENSOR_CHIP_IMX335	=	155,
	SENSOR_CHIP_SC5239	=	156,
	SENSOR_CHIP_Doris	=	157,
	SENSOR_CHIP_K05 	=	158,
	SENSOR_CHIP_SC5332	=	159,
	SENSOR_CHIP_SC5335P 	=	159,
	SENSOR_CHIP_MIS5001 	=	160,
	SENSOR_CHIP_SC500AI 	=	161,
	SENSOR_CHIP_SC401AI 	=	162,
	SENSOR_CHIP_SC4210		= 163,
	SENSOR_CHIP_SC4336 		=	164,
	SENSOR_CHIP_SC5239AI 	=	165,
	SENSOR_CHIP_SC430AI 	=	166,
	
	SENSOR_CHIP_OV12895 	=	180,
	SENSOR_CHIP_APOLLO	=	181,
	SENSOR_CHIP_IMX415	=	182,
}SENSOR_CHIP;


typedef enum {
	SENSORCLK_18M = 0,
	SENSORCLK_24M = 1,
	SENSORCLK_27M = 2,	
	SENSORCLK_37x125M = 3,	
	SENSORCLK_24M_42M = 4,	
	SENSORCLK_18x5625M = 5,	
	SENSORCLK_BY_CONFIG	= 0xFF,
}SENSOR_CLK;

typedef enum {
	SNSIO_12V = 0,
	SNSIO_15V,
	SNSIO_18V,
	SNSIO_28V,
	SNSIO_33V,
}SENSOR_IO;

typedef enum {
	PHY_MIPI0 = 0x01,
	PHY_DVP0 = 0x03,
	PHY_HDR_MIPI0_2_FRAME = 0x10
}ISPVI_PHY_SEL;

typedef enum {
	MIPI_8BIT = 0,
	MIPI_10BIT,
	MIPI_12BIT,
	MIPI_14BIT,
	MIPI_16BIT,
}MIPI_DEPTH;

typedef enum {
	MIPI_1LANE = 0,
	MIPI_2LANE,
	MIPI_4LANE,
}MIPI_LANE;

typedef enum stSENSOR_BWIDE
{
	SENSBWIDE_8BIT = 0,
	SENSBWIDE_10BIT ,
	SENSBWIDE_12BIT ,
	SENSBWIDE_14BIT ,
	SENSBWIDE_16BIT ,
}SENSOR_BWIDE;

typedef enum stSENSOR_CONT
{
	SENSCONT_DVP = 0,
	SENSCONT_MIPI ,
}SENSOR_CONT;

typedef enum stFUNEXT_TYPE
{
	FUNBIT_XVI_MASK = 0,
	FUNBIT_AF_MASK = 1,
	FUNBIT_BUTT
}FUNEXT_TYPE;

typedef enum enLIMITEDUP_TYPE
{
	LIMITEDUP_DISABLE = 0,
	LIMITEDUP_VGA_TO_1M = 0x05,
	LIMITEDUP_360P_TO_2M = 0x06,
	LIMITEDUP_480P_TO_2M = 0x07,
	LIMITEDUP_1M_TO_2M = 0x10,
	LIMITEDUP_1M_TO_3M = 0x11,
	LIMITEDUP_1M_TO_4M = 0x12,
	LIMITEDUP_1M_TO_5M = 0x13,
	LIMITEDUP_2M_TO_3M = 0x20,
	LIMITEDUP_2M_TO_4M = 0x21,
	LIMITEDUP_2M_TO_5M = 0x22,
	LIMITEDUP_2M_TO_4K = 0x23,
	LIMITEDUP_3M_TO_4M = 0x30,
	LIMITEDUP_3M_TO_5M_2880 = 0x31,
	LIMITEDUP_3M_TO_4K = 0x32,
	LIMITEDUP_4M_TO_5M_2 = 0x40,	// 16:9
	LIMITEDUP_4M_TO_4K = 0x41,
	LIMITEDUP_5M_TO_4K = 0x50,
	LIMITEDUP_5M_TO_4K_2880 = 0x51,	// 2880*1620
	LIMITEDUP_BUTT,
}LIMITEDUP_TYPE;

typedef enum enRESL_TYPE
{
	P720_ = 0,
	P1080_ ,
	P960_ ,	
    P1536_ ,    
    P4M_ ,    
    P5M_ ,    
    P4K_ ,  
    P5M_2,	// 16:9 (2880*1620)
    P3M_2,	// 16:9 (2304*1296)
    P6M_,	// 16:9 (3200*1800)
    PCVBS_=100,    
    P480P_=101,	// 4:3(640x480)
    P360P_=102,	// 16:9(640x360)
	P960P_=103,	// 3:4(720x960)
	P1080_2=104,// 4:3(1600x1200)
	P1200_2=105,// 1:1(960x1200)
	P720_2=106,	// 1:1(576x720)
    PRESL_BUTT,
}RESL_TYPE;

typedef enum enVSTD
{
	VSTDNULL = 0,	
	PALS  ,
	NTSCS ,
}VSTD;

typedef enum enTXVENC_TYPE
{
	TXVENC_AHD = 0,
	TXVENC_CVI = 1,
	TXVENC_TVI = 2,
	TXVENC_CVBS = 3,
	TXVENC_AHD_15FPS = 4,
	//TXVENC_TVI_V1 = 7,
	TXVENC_BUTT
}TXVENC_TYPE;

typedef enum enI2C_CH_NUM
{
	I2C_CH0 = 0,
	I2C_CH1 = 1,
	I2C_CH2 = 2,
	I2C_CH3 = 3,
	I2C_BUTT
}I2C_CH_NUM;


typedef enum enIPCVENC_TYPE
{
	IPC_Hx264 = 0,
	IPC_Hx265 = 1,
	IPCVENC_BUTT
}IPCVENC_TYPE;

typedef enum enISP_MODE_E
{
	ISP_MODE_ONLINE = 0,
	ISP_MODE_OFFLINE = 1,
	ISP_MODE_BUTT
} ISP_MODE_E;

typedef struct stUPSCALER_CFG
{
	RESL_TYPE  VPIXEL;	 //  0:720P  1:1080P  2:960P	3:NULL
	VSTD	VSTDB;       //  0:NULL  1:PAL    2:NTSC
}UPSCALER_CFG;

typedef struct stSENSOR_IO_V
{
	SENSOR_IO endvdd;	
	SENSOR_IO enavdd;	
	SENSOR_IO endovdd;	
}SENSOR_IO_V;

typedef struct stSENSOR_MIPI
{
	ISPVI_PHY_SEL enPhy;
	ISP_U8 u8MipiDepth;
	ISP_U8 u8MipiLane;
}SENSOR_MIPI;



#endif /* __ISP_DEFINES_H__ */
