#	$OpenBSD: src/lib/libssl/src/etc/etc.sparc64/Makefile.inc,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $

KERNELS += GENERIC.MP bsd.mp

bootblocks:
	cp ${DESTDIR}/usr/mdec/*boot* ${RELEASEDIR}

MDEXT=	bsd.rd cd${OSrev}.iso \
	miniroot${OSrev}.fs floppy${OSrev}.fs floppyB${OSrev}.fs \
	bootblk installboot ofwboot ofwboot.net
