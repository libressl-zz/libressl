/*	$OpenBSD: src/lib/libssl/src/include/poll.h,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $ */

/*
 * Written by Theo de Raadt, Public Domain
 *
 * Typical poll() implementations expect poll.h to be in /usr/include. 
 * However this is not a convenient place for the real definitions.
 */
#include <sys/poll.h>
