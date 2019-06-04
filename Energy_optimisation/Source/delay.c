/*----------------------------------------------------------------------------
Copyright (C) 2019 Aniruddha Kanhere

This Source code can be cloned, modified and used as required. But the owner/author
does not take any responsibily for damage/distruction of property or any such material
caused by the use of this code. The user shall be responsible for any such incident
 *----------------------------------------------------------------------------*/
 
#include <MKL25Z4.H>

void Delay (uint32_t dly) {
  volatile uint32_t t;

	for (t=dly*10000; t>0; t--)
		;
}
// *******************************ARM University Program Copyright © ARM Ltd 2013*************************************   
