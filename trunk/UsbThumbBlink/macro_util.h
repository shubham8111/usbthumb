/********************************************************************
 FileName:		macro_util.h
********************************************************************/
#ifndef MACRO_UTIL_H
#define MACRO_UTIL_H

#define _TRIS(pin)				pin(_TRIS_BIT)
#define _TRIS_BIT(alpha,bit)	(TRIS ## alpha ## bits.TRIS ## alpha ## bit)
#define _PORT(pin)				pin(_PORT_BIT)
#define _PORT_BIT(alpha,bit)	(PORT ## alpha ## bits.R ## alpha ## bit)
#define _LAT(pin)				pin(_LAT_BIT)
#define _LAT_BIT(alpha,bit)		(LAT ## alpha ## bits.LAT ## alpha ## bit)
#define _WPU(pin)				pin(_WPU_BIT)
#define _WPU_BIT(alpha,bit)		(WPU ## alpha ## bits.WPU ## alpha ## bit)
#define MIN(A,B)  (((A)<(B)) ? (A) : (B) )
#define MAX(A,B)  (((A)>(B)) ? (A) : (B) )
#define PUT_IN_RANGE(V,VMIN,VMAX) MAX(VMIN,MIN(VMAX,V))


#define FLOAT2INT(x) ( (x)>=0  ?   (int)( (x)+0.5 ) : (int)( (x)-0.5 )  )
#define PFAR (const far rom char *)	//used in front of ROM strings to avoid compiler warnings, see C18 user Guide



#define _WORD_AT(x)  ( *(unsigned int*)&(x) )


#endif
