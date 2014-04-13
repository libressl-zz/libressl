#	$OpenBSD: src/lib/libssl/src/etc/etc.aviion/Makefile.inc,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $

KERNELS += GENERIC.MP bsd.mp

bootblocks:
	cp ${DESTDIR}/usr/mdec/boot ${RELEASEDIR}/

MDEXT=	bsd.rd bsd.rd.xcf \
	boot
