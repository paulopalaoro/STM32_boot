/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Produto Controle Remoto Alfatronic TRM-08
// Autor  Paulo Palaoro
// Versao V1.0
// Data 20/07/2023
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

//Essa union estado das teclas 
extern union union_chaves_1
{
	struct
	{
		char b0:1;
		char b1:1;
		char b2:1;
		char b3:1;
		char b4:1;
		char b5:1;
		char b6:1;
		char b7:1;
	}struct_chaves;
	unsigned char teclas_tx;		
}union_chaves_1;
#define chaves_ativas       			union_chaves_1.teclas_tx
#define ch_buzina      						union_chaves_1.struct_chaves.b0
#define ch_motor_on     					union_chaves_1.struct_chaves.b1
#define ch_motor_off    					union_chaves_1.struct_chaves.b2
#define ch_rpm_mais     					union_chaves_1.struct_chaves.b3
#define ch_rpm_menos    					union_chaves_1.struct_chaves.b4
#define ch_emergencia  						union_chaves_1.struct_chaves.b5
#define ch_velocidade  						union_chaves_1.struct_chaves.b6
#define bit_opto_ativo    	      union_chaves_1.struct_chaves.b7

extern uint8_t RxData[10];
extern uint8_t TxData[10];
extern unsigned char cont_pac;
