#	$OpenBSD: src/lib/libssl/src/etc/etc.hppa64/Makefile.inc,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $

bootblocks:
	cp ${DESTDIR}/usr/mdec/xxboot ${RELEASEDIR}

MDEXT=	bsd.rd cd${OSrev}.iso lif${OSrev}.fs xxboot
