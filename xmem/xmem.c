/*
 * xmem.c
 *
 * Created: 2/26/2013 8:09:52 PM
 *  Author: Anthony
 */ 


#include <avr/sfr_defs.h>

			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			

#define _AVR_IO_H_

#define str(x) #x
#define xstr(x) str(x)
#define paste(x, y) x ## y
#define OUTPUT_XMEM(D,X) D ## xstr(X) 
#define OUTPUT_DEV(D) D 

int main(void)
{
	{
		// Output the device name, XRAMSTART address of each supported chip
		// This needed to be taken care of by a build script. for now, just VIM magic.
/* SAMPLE BLOCK
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
			// HEADER GOES HERE
			#include <avr/iosomething.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("PARTIDHERE" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("PARTIDHERE")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("PARTIDHERE" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("PARTIDHERE")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("PARTIDHERE")
			#endif

		}
*/
		
// START GENERATED CODE:
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_M3000__)
				#  include <avr/iom3000.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("M3000" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("M3000")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("M3000" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("M3000")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("M3000")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny11__)
				#  include <avr/iotn11.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny11" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny11")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny11" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny11")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny11")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny12__)
				#  include <avr/iotn12.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny12" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny12")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny12" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny12")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny12")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny15__)
				#  include <avr/iotn15.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny15" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny15")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny15" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny15")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny15")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90S1200__)
				#  include <avr/io1200.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90S1200" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90S1200")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90S1200" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90S1200")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90S1200")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny28__)
				#  include <avr/iotn28.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny28" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny28")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny28" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny28")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny28")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATA6289__)
				#  include <avr/ioa6289.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATA6289" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATA6289")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATA6289" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATA6289")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATA6289")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega256D3__)
				#  include <avr/iox256d3.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega256D3" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega256D3")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega256D3" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega256D3")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega256D3")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega256A3B__)
				#  include <avr/iox256a3b.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega256A3B" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega256A3B")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega256A3B" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega256A3B")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega256A3B")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega256A3__)
				#  include <avr/iox256a3.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega256A3" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega256A3")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega256A3" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega256A3")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega256A3")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega192D3__)
				#  include <avr/iox192d3.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega192D3" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega192D3")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega192D3" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega192D3")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega192D3")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega192A3__)
				#  include <avr/iox192a3.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega192A3" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega192A3")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega192A3" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega192A3")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega192A3")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega128D3__)
				#  include <avr/iox128d3.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega128D3" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega128D3")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega128D3" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega128D3")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega128D3")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega128A3__)
				#  include <avr/iox128a3.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega128A3" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega128A3")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega128A3" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega128A3")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega128A3")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega128A1U__)
				#  include <avr/iox128a1u.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega128A1U" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega128A1U")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega128A1U" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega128A1U")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega128A1U")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega128A1__)
				#  include <avr/iox128a1.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega128A1" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega128A1")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega128A1" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega128A1")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega128A1")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega64D3__)
				#  include <avr/iox64d3.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega64D3" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega64D3")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega64D3" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega64D3")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega64D3")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega64A3__)
				#  include <avr/iox64a3.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega64A3" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega64A3")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega64A3" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega64A3")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega64A3")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega64A1U__)
				#  include <avr/iox64a1u.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega64A1U" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega64A1U")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega64A1U" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega64A1U")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega64A1U")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega64A1__)
				#  include <avr/iox64a1.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega64A1" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega64A1")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega64A1" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega64A1")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega64A1")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega32D4__)
				#  include <avr/iox32d4.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega32D4" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega32D4")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega32D4" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega32D4")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega32D4")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega32A4__)
				#  include <avr/iox32a4.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega32A4" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega32A4")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega32A4" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega32A4")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega32A4")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega16D4__)
				#  include <avr/iox16d4.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega16D4" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega16D4")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega16D4" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega16D4")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega16D4")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATxmega16A4__)
				#  include <avr/iox16a4.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATxmega16A4" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATxmega16A4")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATxmega16A4" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATxmega16A4")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATxmega16A4")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90SCR100__)
				#  include <avr/io90scr100.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90SCR100" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90SCR100")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90SCR100" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90SCR100")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90SCR100")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny167__)
				#  include <avr/iotn167.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny167" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny167")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny167" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny167")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny167")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny87__)
				#  include <avr/iotn87.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny87" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny87")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny87" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny87")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny87")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny88__)
				#  include <avr/iotn88.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny88" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny88")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny88" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny88")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny88")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny48__)
				#  include <avr/iotn48.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny48" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny48")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny48" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny48")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny48")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny43U__)
				#  include <avr/iotn43u.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny43U" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny43U")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny43U" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny43U")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny43U")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny861A__)
				#  include <avr/iotn861a.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny861A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny861A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny861A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny861A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny861A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny861__)
				#  include <avr/iotn861.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny861" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny861")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny861" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny861")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny861")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny461A__)
				#  include <avr/iotn461a.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny461A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny461A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny461A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny461A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny461A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny461__)
				#  include <avr/iotn461.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny461" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny461")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny461" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny461")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny461")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny261A__)
				#  include <avr/iotn261a.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny261A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny261A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny261A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny261A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny261A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny261__)
				#  include <avr/iotn261.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny261" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny261")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny261" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny261")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny261")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny84A__)
				#  include <avr/iotn84a.h>  

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny84A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny84A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny84A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny84A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny84A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny84__)
				#  include <avr/iotn84.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny84" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny84")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny84" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny84")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny84")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny44A__)
				#  include <avr/iotn44a.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny44A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny44A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny44A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny44A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny44A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny44__)
				#  include <avr/iotn44.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny44" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny44")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny44" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny44")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny44")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny24A__)
				#  include <avr/iotn24a.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny24A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny24A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny24A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny24A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny24A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny24__)
				#  include <avr/iotn24.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny24" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny24")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny24" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny24")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny24")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny85__)
				#  include <avr/iotn85.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny85" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny85")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny85" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny85")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny85")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny45__)
				#  include <avr/iotn45.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny45" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny45")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny45" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny45")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny45")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny4313__)
				#  include <avr/iotn4313.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny4313" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny4313")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny4313" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny4313")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny4313")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny25__)
				#  include <avr/iotn25.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny25" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny25")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny25" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny25")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny25")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny13A__)
				#  include <avr/iotn13a.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny13A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny13A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny13A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny13A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny13A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny13__)
				#  include <avr/iotn13.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny13" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny13")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny13" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny13")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny13")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny2313A__)
				#  include <avr/iotn2313a.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny2313A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny2313A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny2313A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny2313A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny2313A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny2313__)
				#  include <avr/iotn2313.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny2313" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny2313")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny2313" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny2313")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny2313")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny40__)
				#  include <avr/iotn40.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny40" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny40")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny40" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny40")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny40")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny20__)
				#  include <avr/iotn20.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny20" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny20")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny20" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny20")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny20")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny10__)
				#  include <avr/iotn10.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny10" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny10")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny10" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny10")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny10")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny9__)
				#  include <avr/iotn9.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny9" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny9")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny9" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny9")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny9")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny5__)
				#  include <avr/iotn5.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny5" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny5")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny5" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny5")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny5")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny4__)
				#  include <avr/iotn4.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny4" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny4")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny4" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny4")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny4")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90S2313__)
				#  include <avr/io2313.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90S2313" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90S2313")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90S2313" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90S2313")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90S2313")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90S2323__)
				#  include <avr/io2323.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90S2323" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90S2323")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90S2323" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90S2323")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90S2323")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90S2333__)
				#  include <avr/io2333.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90S2333" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90S2333")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90S2333" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90S2333")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90S2333")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90S2343__)
				#  include <avr/io2343.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90S2343" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90S2343")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90S2343" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90S2343")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90S2343")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny26__)
				#  include <avr/iotn26.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny26" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny26")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny26" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny26")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny26")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATtiny22__)
				#  include <avr/iotn22.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATtiny22" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATtiny22")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATtiny22" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATtiny22")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATtiny22")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90S4414__)
				#  include <avr/io4414.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90S4414" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90S4414")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90S4414" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90S4414")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90S4414")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90S4433__)
				#  include <avr/io4433.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90S4433" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90S4433")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90S4433" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90S4433")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90S4433")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90S4434__)
				#  include <avr/io4434.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90S4434" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90S4434")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90S4434" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90S4434")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90S4434")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90S8515__)
				#  include <avr/io8515.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90S8515" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90S8515")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90S8515" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90S8515")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90S8515")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90C8534__)
				#  include <avr/io8534.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90C8534" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90C8534")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90C8534" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90C8534")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90C8534")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90S8535__)
				#  include <avr/io8535.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90S8535" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90S8535")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90S8535" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90S8535")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90S8535")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega8535__)
				#  include <avr/iom8535.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega8535" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega8535")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega8535" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega8535")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega8535")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega8515__)
				#  include <avr/iom8515.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega8515" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega8515")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega8515" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega8515")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega8515")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega88PA__)
				#  include <avr/iom88pa.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega88PA" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega88PA")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega88PA" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega88PA")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega88PA")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega88P__)
				#  include <avr/iom88p.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega88P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega88P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega88P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega88P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega88P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega88A__)
				#  include <avr/iom88.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega88A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega88A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega88A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega88A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega88A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega88__) 
				#  include <avr/iom88.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega88" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega88")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega88" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega88")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega88")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega48P__)
				#  include <avr/iom48p.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega48P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega48P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega48P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega48P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega48P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega48A__)
				#  include <avr/iom48.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega48A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega48A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega48A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega48A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega48A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega48__) 
				#  include <avr/iom48.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega48" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega48")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega48" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega48")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega48")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega8__)
				#  include <avr/iom8.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega8" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega8")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega8" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega8")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega8")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega16HVBREVB__)
				#  include <avr/iom16hvbrevb.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega16HVBREVB" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega16HVBREVB")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega16HVBREVB" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega16HVBREVB")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega16HVBREVB")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega16HVB__)
				#  include <avr/iom16hvb.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega16HVB" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega16HVB")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega16HVB" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega16HVB")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega16HVB")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega16HVA2__)
				#  include <avr/iom16hva2.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega16HVA2" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega16HVA2")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega16HVA2" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega16HVA2")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega16HVA2")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega16HVA__)
				#  include <avr/iom16hva.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega16HVA" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega16HVA")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega16HVA" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega16HVA")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega16HVA")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega8HVA__)
				#  include <avr/iom8hva.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega8HVA" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega8HVA")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega8HVA" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega8HVA")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega8HVA")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega169PA__)
				#  include <avr/iom169pa.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega169PA" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega169PA")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega169PA" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega169PA")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega169PA")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega169P__)
				#  include <avr/iom169p.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega169P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega169P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega169P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega169P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega169P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega169A__)
				#  include <avr/iom169.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega169A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega169A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega169A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega169A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega169A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega169__) 
				#  include <avr/iom169.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega169" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega169")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega169" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega169")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega169")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega168P__)
				#  include <avr/iom168p.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega168P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega168P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega168P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega168P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega168P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega168A__)
				#  include <avr/iom168.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega168A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega168A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega168A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega168A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega168A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega168__) 
				#  include <avr/iom168.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega168" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega168")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega168" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega168")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega168")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega165P__)
				#  include <avr/iom165p.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega165P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega165P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega165P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega165P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega165P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega165A__)
				#  include <avr/iom165.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega165A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega165A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega165A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega165A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega165A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega165__) 
				#  include <avr/iom165.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega165" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega165")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega165" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega165")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega165")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega164A__)
				#  include <avr/iom164.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega164A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega164A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega164A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega164A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega164A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega164P__) 
				#  include <avr/iom164.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega164P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega164P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega164P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega164P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega164P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega163__)
				#  include <avr/iom163.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega163" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega163")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega163" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega163")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega163")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega162__)
				#  include <avr/iom162.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega162" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega162")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega162" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega162")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega162")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega161__)
				#  include <avr/iom161.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega161" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega161")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega161" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega161")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega161")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega16A__)
				#  include <avr/iom16a.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega16A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega16A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega16A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega16A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega16A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega16__)
				#  include <avr/iom16.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega16" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega16")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega16" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega16")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega16")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega406__)
				#  include <avr/iom406.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega406" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega406")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega406" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega406")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega406")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega32HVBREVB__)
				#  include <avr/iom32hvbrevb.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega32HVBREVB" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega32HVBREVB")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega32HVBREVB" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega32HVBREVB")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega32HVBREVB")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega32HVB__)
				#  include <avr/iom32hvb.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega32HVB" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega32HVB")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega32HVB" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega32HVB")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega32HVB")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega3290P__)
				#  include <avr/iom3290.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega3290P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega3290P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega3290P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega3290P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega3290P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega3290A__)
				#  include <avr/iom3290.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega3290A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega3290A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega3290A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega3290A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega3290A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega3290__) 
				#  include <avr/iom3290.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega3290" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega3290")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega3290" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega3290")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega3290")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega329PA__)
				#  include <avr/iom329.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega329PA" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega329PA")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega329PA" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega329PA")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega329PA")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega329P__) 
				#  include <avr/iom329.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega329P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega329P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega329P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega329P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega329P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega329A__)
				#  include <avr/iom329.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega329A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega329A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega329A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega329A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega329A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega329__) 
				#  include <avr/iom329.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega329" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega329")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega329" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega329")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega329")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega328__)
				#  include <avr/iom328p.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega328" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega328")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega328" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega328")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega328")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega328P__) 
				#  include <avr/iom328p.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega328P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega328P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega328P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega328P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega328P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega3250P__)
				#  include <avr/iom3250.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega3250P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega3250P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega3250P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega3250P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega3250P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega3250A__)
				#  include <avr/iom3250.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega3250A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega3250A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega3250A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega3250A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega3250A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega3250__) 
				#  include <avr/iom3250.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega3250" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega3250")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega3250" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega3250")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega3250")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega325P__)
				#  include <avr/iom325.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega325P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega325P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega325P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega325P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega325P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega325A__)
				#  include <avr/iom325.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega325A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega325A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega325A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega325A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega325A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega325__) 
				#  include <avr/iom325.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega325" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega325")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega325" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega325")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega325")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega324PA__)
				#  include <avr/iom324pa.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega324PA" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega324PA")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega324PA" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega324PA")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega324PA")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega324A__)
				#  include <avr/iom324.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega324A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega324A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega324A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega324A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega324A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega324P__) 
				#  include <avr/iom324.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega324P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega324P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega324P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega324P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega324P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega323__)
				#  include <avr/iom323.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega323" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega323")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega323" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega323")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega323")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega32__)
				#  include <avr/iom32.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega32" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega32")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega32" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega32")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega32")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega103__)
				#  include <avr/iom103.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega103" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega103")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega103" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega103")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega103")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega64HVE__)
				#  include <avr/iom64hve.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega64HVE" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega64HVE")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega64HVE" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega64HVE")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega64HVE")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega649P__)
				#  include <avr/iom649p.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega649P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega649P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega649P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega649P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega649P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega6490A__)
				#  include <avr/iom6490.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega6490A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega6490A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega6490A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega6490A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega6490A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega6490P__)
				#  include <avr/iom6490.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega6490P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega6490P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega6490P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega6490P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega6490P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega6490__)  
				#  include <avr/iom6490.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega6490" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega6490")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega6490" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega6490")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega6490")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega649A__)
				#  include <avr/iom649.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega649A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega649A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega649A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega649A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega649A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega649__) 
				#  include <avr/iom649.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega649" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega649")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega649" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega649")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega649")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega6450A__)
				#  include <avr/iom6450.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega6450A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega6450A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega6450A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega6450A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega6450A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega6450P__)
				#  include <avr/iom6450.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega6450P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega6450P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega6450P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega6450P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega6450P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega6450__)  
				#  include <avr/iom6450.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega6450" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega6450")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega6450" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega6450")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega6450")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega645A__)
				#  include <avr/iom645.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega645A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega645A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega645A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega645A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega645A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
					// __AVR_ATmega645P__)
				#  include <avr/iom645.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega645P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega645P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega645P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega645P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega645P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega645__)  
				#  include <avr/iom645.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega645" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega645")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega645" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega645")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega645")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega644PA__)
				#  include <avr/iom644pa.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega644PA" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega644PA")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega644PA" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega644PA")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega644PA")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega644P__)
				#  include <avr/iom644p.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega644P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega644P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega644P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega644P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega644P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				// __AVR_ATmega644A__)
				#  include <avr/iom644.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega644A" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega644A")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega644A" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega644A")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega644A")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega644__) 
				#  include <avr/iom644.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega644" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega644")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega644" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega644")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega644")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega640__)
				#  include <avr/iom640.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega640" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega640")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega640" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega640")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega640")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega64__)
				#  include <avr/iom64.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega64" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega64")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega64" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega64")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega64")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90USB1287__)
				#  include <avr/iousb1287.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90USB1287" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90USB1287")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90USB1287" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90USB1287")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90USB1287")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90USB1286__)
				#  include <avr/iousb1286.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90USB1286" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90USB1286")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90USB1286" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90USB1286")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90USB1286")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90USB647__)
				#  include <avr/iousb647.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90USB647" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90USB647")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90USB647" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90USB647")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90USB647")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90USB646__)
				#  include <avr/iousb646.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90USB646" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90USB646")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90USB646" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90USB646")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90USB646")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90USB162__)
				#  include <avr/iousb162.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90USB162" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90USB162")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90USB162" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90USB162")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90USB162")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90USB82__)
				#  include <avr/iousb82.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90USB82" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90USB82")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90USB82" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90USB82")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90USB82")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90CAN128__)
				#  include <avr/iocan128.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90CAN128" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90CAN128")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90CAN128" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90CAN128")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90CAN128")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90CAN64__)
				#  include <avr/iocan64.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90CAN64" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90CAN64")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90CAN64" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90CAN64")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90CAN64")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90CAN32__)
				#  include <avr/iocan32.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90CAN32" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90CAN32")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90CAN32" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90CAN32")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90CAN32")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega2561__)
				#  include <avr/iom2561.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega2561" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega2561")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega2561" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega2561")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega2561")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega2560__)
				#  include <avr/iom2560.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega2560" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega2560")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega2560" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega2560")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega2560")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega128RFA1__)
				#  include <avr/iom128rfa1.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega128RFA1" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega128RFA1")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega128RFA1" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega128RFA1")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega128RFA1")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega1284P__)
				#  include <avr/iom1284p.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega1284P" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega1284P")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega1284P" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega1284P")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega1284P")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega1281__)
				#  include <avr/iom1281.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega1281" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega1281")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega1281" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega1281")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega1281")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega1280__)
				#  include <avr/iom1280.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega1280" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega1280")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega1280" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega1280")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega1280")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega128__)
				#  include <avr/iom128.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega128" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega128")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega128" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega128")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega128")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega64M1__)
				#  include <avr/iom64m1.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega64M1" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega64M1")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega64M1" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega64M1")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega64M1")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega64C1__)
				#  include <avr/iom64c1.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega64C1" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega64C1")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega64C1" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega64C1")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega64C1")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega32U6__)
				#  include <avr/iom32u6.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega32U6" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega32U6")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega32U6" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega32U6")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega32U6")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega32U4__)
				#  include <avr/iom32u4.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega32U4" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega32U4")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega32U4" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega32U4")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega32U4")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega32U2__)
				#  include <avr/iom32u2.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega32U2" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega32U2")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega32U2" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega32U2")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega32U2")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega32M1__)
				#  include <avr/iom32m1.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega32M1" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega32M1")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega32M1" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega32M1")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega32M1")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega32C1__)
				#  include <avr/iom32c1.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega32C1" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega32C1")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega32C1" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega32C1")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega32C1")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega16U4__)
				#  include <avr/iom16u4.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega16U4" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega16U4")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega16U4" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega16U4")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega16U4")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega16U2__)
				#  include <avr/iom16u2.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega16U2" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega16U2")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega16U2" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega16U2")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega16U2")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega16M1__)
				#  include <avr/iom16m1.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega16M1" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega16M1")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega16M1" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega16M1")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega16M1")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_ATmega8U2__)
				#  include <avr/iom8u2.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("ATmega8U2" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("ATmega8U2")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("ATmega8U2" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("ATmega8U2")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("ATmega8U2")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90PWM81__)
				#  include <avr/io90pwm81.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90PWM81" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90PWM81")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90PWM81" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90PWM81")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90PWM81")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90PWM316__)
				#  include <avr/io90pwm316.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90PWM316" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90PWM316")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90PWM316" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90PWM316")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90PWM316")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90PWM216__)
				#  include <avr/io90pwm216.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90PWM216" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90PWM216")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90PWM216" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90PWM216")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90PWM216")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90PWM3B__)
				#  include <avr/io90pwm3b.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90PWM3B" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90PWM3B")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90PWM3B" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90PWM3B")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90PWM3B")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90PWM3__)
				#  include <avr/io90pwmx.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90PWM3" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90PWM3")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90PWM3" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90PWM3")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90PWM3")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90PWM2B__)
				#  include <avr/io90pwm2b.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90PWM2B" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90PWM2B")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90PWM2B" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90PWM2B")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90PWM2B")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90PWM2__)
				#  include <avr/io90pwmx.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90PWM2" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90PWM2")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90PWM2" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90PWM2")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90PWM2")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT90PWM1__)
				#  include <avr/io90pwm1.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT90PWM1" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT90PWM1")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT90PWM1" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT90PWM1")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT90PWM1")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT86RF401__)
				#  include <avr/io86r401.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT86RF401" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT86RF401")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT86RF401" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT86RF401")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT86RF401")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT76C711__)
				#  include <avr/io76c711.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT76C711" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT76C711")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT76C711" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT76C711")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT76C711")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT43USB355__)
				#  include <avr/io43u35x.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT43USB355" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT43USB355")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT43USB355" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT43USB355")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT43USB355")
			#endif

		}
		
		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
				//  (__AVR_AT43USB320__)
				#  include <avr/io43u32x.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT43USB320" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT43USB320")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT43USB320" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT43USB320")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT43USB320")
			#endif

		}

		{
			#ifdef _AVR_IOXXX_H_
				#undef _AVR_IOXXX_H_
			#endif
			
			// __AVR_AT94K__
			#include <avr/ioat94k.h>

			#ifdef XRAMSTART
				#if XRAMSIZE > 0
					// There's an ability to address external memory.
					#pragma message("AT94K" xstr(XRAMSTART))
				#else
					// Nope
					#pragma message("AT94K")
				#endif
			#elif defined XRAMEND
				#if XRAMEND > RAMEND
					// XRAMEND > RAMEND also means there's external memory addressing ability.
					#pragma message("AT94K" xstr(RAMEND+1))
				#else
					// Nope.
					#pragma message("AT94K")
				#endif
			#else
				// There's no useful definition here.			
				#pragma message("AT94K")
			#endif

		}	


	}
#ifdef _AVR_IOXXX_H_
#pragma message("AVR define encountered")
#endif
}
