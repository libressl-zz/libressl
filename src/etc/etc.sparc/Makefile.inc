#	$OpenBSD: src/lib/libssl/src/etc/etc.sparc/Makefile.inc,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $

bootblocks:
	cp ${DESTDIR}/usr/mdec/*boot* ${RELEASEDIR}
	${DESTDIR}/usr/mdec/binstall net /tmp && \
	    mv /tmp/boot.sparc.openbsd ${RELEASEDIR}/boot.net

MDEXT=	bsd.rd cd${OSrev}.iso \
	floppy${OSrev}.fs miniroot${OSrev}.fs \
	boot boot.net bootxx installboot
