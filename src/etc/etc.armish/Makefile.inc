#	$OpenBSD: src/lib/libssl/src/etc/etc.armish/Makefile.inc,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $

bootblocks:
	cp ${DESTDIR}/usr/mdec/boot ${RELEASEDIR}

MDEXT=	bsd.rd boot
