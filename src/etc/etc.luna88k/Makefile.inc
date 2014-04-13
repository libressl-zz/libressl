#	$OpenBSD: src/lib/libssl/src/etc/etc.luna88k/Makefile.inc,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $

KERNELS += GENERIC.MP bsd.mp

bootblocks:
	cp ${DESTDIR}/usr/mdec/* ${RELEASEDIR}/

MDEXT=	bsd.rd \
	miniroot${OSrev}.fs \
	boot
