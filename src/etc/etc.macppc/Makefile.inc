#	$OpenBSD: src/lib/libssl/src/etc/etc.macppc/Makefile.inc,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $

KERNELS += GENERIC.MP bsd.mp

bootblocks:
	cp ${DESTDIR}/usr/mdec/ofwboot ${RELEASEDIR}/ofwboot
	cp ${DESTDIR}/usr/mdec/bsd.tbxi ${RELEASEDIR}/bsd.tbxi
	cp ${DESTDIR}/usr/mdec/boot.mac ${RELEASEDIR}/boot.mac

MDEXT=	bsd.rd cd${OSrev}.iso ofwboot bsd.tbxi boot.mac
