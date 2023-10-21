//header protection
#ifndef Plateform_Types
#define Plateform_Types

//for signed and  unsigned , non volatile

typedef unsigned char           Uint8_t;
typedef char                    int8_t;
typedef unsigned short 			    Uint16_t;
typedef short 					        int16_t;
typedef unsigned int 			      Uint32_t;
typedef int 					          int32_t;
typedef unsigned long long 		  Uint64_t;
typedef long long 				      int64_t;

//for signed and  unsigned ,  volatile

typedef volatile unsigned char 			 Vuint8_t;
typedef volatile char 					     Vint8_t;
typedef volatile unsigned short		   Vuint16_t;
typedef volatile short 					     Vint16_t;
typedef volatile unsigned int 			 Vuint32_t;
typedef volatile int 					       Vint32_t;
typedef volatile unsigned long long  Vuint64_t;
typedef volatile long long 				   Vint64_t;

//for character
typedef char 	 	char_t;

//Real values float and double
typedef float 		float32_t;
typedef double 		float64_t;

//for Boolean data type
typedef _Bool 		boolean;

#ifndef TRUE
#define TRUE (boolean)true
#endif

#ifndef FALSE
#define FALSE (boolean)false
#endif

#endif  // end of protection header
