/*----------------------------------------------------------------------------
Copyright (C) 2019 Aniruddha Kanhere

This Source code can be cloned, modified and used as required. But the owner/author
does not take any responsibily for damage/distruction of property or any such material
caused by the use of this code. The user shall be responsible for any such incident
 *----------------------------------------------------------------------------*/

#include <MKL25Z4.H>
#include "debug.h"

void Init_Debug_Signals(void) {
	// Enable clock to port B
	SIM->SCGC5 |= SIM_SCGC5_PORTB_MASK;
	
	// Make pins GPIO
	PORTB->PCR[DBG_1] &= ~PORT_PCR_MUX_MASK;          
	PORTB->PCR[DBG_1] |= PORT_PCR_MUX(1);          
	PORTB->PCR[DBG_2] &= ~PORT_PCR_MUX_MASK;          
	PORTB->PCR[DBG_2] |= PORT_PCR_MUX(1);          
	PORTB->PCR[DBG_3] &= ~PORT_PCR_MUX_MASK;          
	PORTB->PCR[DBG_3] |= PORT_PCR_MUX(1);          
	PORTB->PCR[DBG_4] &= ~PORT_PCR_MUX_MASK;          
	PORTB->PCR[DBG_4] |= PORT_PCR_MUX(1);          
	PORTB->PCR[DBG_5] &= ~PORT_PCR_MUX_MASK;          
	PORTB->PCR[DBG_5] |= PORT_PCR_MUX(1);          
	PORTB->PCR[DBG_6] &= ~PORT_PCR_MUX_MASK;          
	PORTB->PCR[DBG_6] |= PORT_PCR_MUX(1);          
	PORTB->PCR[DBG_7] &= ~PORT_PCR_MUX_MASK;          
	PORTB->PCR[DBG_7] |= PORT_PCR_MUX(1);          

	
	// Set ports to outputs
	PTB->PDDR |= MASK(DBG_1) | MASK(DBG_2) | MASK(DBG_3) | MASK(DBG_4) | MASK(DBG_5) | MASK(DBG_6) | MASK(DBG_7);
	
	// Initial values are 0
	PTB->PCOR = MASK(DBG_1) | MASK(DBG_2) | MASK(DBG_3) | MASK(DBG_4) | MASK(DBG_5) | MASK(DBG_6) | MASK(DBG_7);
}	
