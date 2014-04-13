#	$OpenBSD: src/lib/libssl/src/etc/etc.socppc/Makefile.inc,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $

bootblocks:
	cp ${DESTDIR}/usr/mdec/boot ${RELEASEDIR}/boot
	cp ${DESTDIR}/usr/mdec/boot.elf ${RELEASEDIR}/boot.elf

MDEXT=	bsd.bin bsd.rd boot boot.elf miniroot${OSrev}.fs
