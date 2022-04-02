/*
 * defines.h
 *
 * Created: 02/04/2022 08:08:03
 *  Author: carol
 */ 


#ifndef DEFINES_H_
#define DEFINES_H_


/************************************************************************/
/* defines                                                              */
/************************************************************************/

// PLACA SAME70-XPLD
// Led
#define LED_PIO           PIOC                 // periferico que controla o LED
#define LED_PIO_ID        ID_PIOC              // ID do periférico PIOC (controla LED)
#define LED_PIO_IDX       8                    // ID do LED no PIO
#define LED_PIO_IDX_MASK  (1 << LED_PIO_IDX)   // Mascara para CONTROLARMOS o LED
// Botão
#define BUT_PIO			PIOA
#define BUT_PIO_ID		ID_PIOA
#define BUT_PIO_IDX		11
#define BUT_PIO_IDX_MASK (1u << BUT_PIO_IDX) // esse já está pronto.

// OLED 1
// Led
#define OLED_1_PIO		PIOA
#define OLED_1_PIO_ID	ID_PIOA
#define OLED_1_PIO_IDX	0
#define OLED_1_PIO_IDX_MASK (1<<OLED_1_PIO_IDX)
// Botão
#define BUT_PIO_1			PIOD
#define BUT_PIO_1_ID		ID_PIOD
#define BUT_PIO_1_IDX		28
#define BUT_PIO_1_IDX_MASK (1u << BUT_PIO_1_IDX)

// OLED 2
// Led
#define OLED_2_PIO		PIOC
#define OLED_2_PIO_ID	ID_PIOC
#define OLED_2_PIO_IDX	30
#define OLED_2_PIO_IDX_MASK (1<<OLED_2_PIO_IDX)
// Botão
#define BUT_PIO_2			PIOC
#define BUT_PIO_2_ID		ID_PIOC
#define BUT_PIO_2_IDX		31
#define BUT_PIO_2_IDX_MASK (1u << BUT_PIO_2_IDX)


// OLED 3
// Led
#define OLED_3_PIO		PIOB
#define OLED_3_PIO_ID	ID_PIOB
#define OLED_3_PIO_IDX	2
#define OLED_3_PIO_IDX_MASK (1<<OLED_3_PIO_IDX)
// Botão
#define BUT_PIO_3			PIOA
#define BUT_PIO_3_ID		ID_PIOA
#define BUT_PIO_3_IDX		19
#define BUT_PIO_3_IDX_MASK (1u << BUT_PIO_3_IDX)


#endif /* DEFINES_H_ */