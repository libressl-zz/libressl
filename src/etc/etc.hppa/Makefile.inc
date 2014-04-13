#	$OpenBSD: src/lib/libssl/src/etc/etc.hppa/Makefile.inc,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $

KERNELS += GENERIC.MP bsd.mp

bootblocks:
	cp ${DESTDIR}/usr/mdec/xxboot ${RELEASEDIR}

MDEXT=	bsd.rd cd${OSrev}.iso lif${OSrev}.fs xxboot
