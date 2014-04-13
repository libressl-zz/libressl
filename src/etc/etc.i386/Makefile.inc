#	$OpenBSD: src/lib/libssl/src/etc/etc.i386/Makefile.inc,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $

KERNELS += GENERIC.MP bsd.mp

bootblocks:
	cp ${DESTDIR}/usr/mdec/pxeboot ${RELEASEDIR}
	cp ${DESTDIR}/usr/mdec/cdboot ${RELEASEDIR}
	cp ${DESTDIR}/usr/mdec/cdbr ${RELEASEDIR}

MDEXT=	bsd.rd cd${OSrev}.iso floppy${OSrev}.fs floppyB${OSrev}.fs \
	floppyC${OSrev}.fs miniroot${OSrev}.fs \
	pxeboot cdboot cdbr
