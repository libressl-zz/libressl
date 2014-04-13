#	$OpenBSD: src/lib/libssl/src/etc/etc.vax/Makefile.inc,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $

bootblocks:
	mopa.out ${DESTDIR}/usr/mdec/boot ${RELEASEDIR}/boot.mop

MDEXT=	bsd.rd boot.mop cd${OSrev}.iso floppy${OSrev}.fs
