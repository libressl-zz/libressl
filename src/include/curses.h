/*	$OpenBSD: src/lib/libssl/src/include/curses.h,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $	*/

/*
 * Placed in the public domain by Todd C. Miller <Todd.Miller@courtesan.com>
 * on June 17, 2003.
 */

#ifndef _CURSES_H_
#define _CURSES_H_

#ifdef _USE_OLD_CURSES_
#include <ocurses.h>
#else
#include <ncurses.h>
#endif

#endif /* _CURSES_H_ */
