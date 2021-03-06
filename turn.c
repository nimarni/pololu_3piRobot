/*
 * Code to perform various types of turns.  The delays here had to be
 * calibrated for the 3pi's motors.
 */

#include <pololu/3pi.h>

// Turns according to the parameter dir, which should be 'L', 'R', 'S'
// (straight), or 'B' (back).
void turn(char dir,unsigned int sensors[5])
{
	
	switch(dir)
	{
        case 'L':
            // Turn left.
            set_motors(-108,108);
            delay(140);
            break;
        case 'R':
            set_motors(108,-108);
            delay(140);
            break;
        case 'B':
            // Turn around.
            set_motors(108,-108);
            delay_ms(280);
			break;
        case 'S':
            // go straight.
            break;
	}
}

// Local Variables: **
// mode: C **
// c-basic-offset: 4 **
// tab-width: 4 **
// indent-tabs-mode: t **
// end: **
