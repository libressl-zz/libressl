#	$OpenBSD: src/lib/libssl/src/etc/etc.landisk/Makefile.inc,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $

bootblocks:
	cp ${DESTDIR}/usr/mdec/mbr ${RELEASEDIR}
	cp ${DESTDIR}/usr/mdec/xxboot ${RELEASEDIR}
	cp ${DESTDIR}/usr/mdec/boot ${RELEASEDIR}

MDEXT=	mbr bsd.rd xxboot boot miniroot${OSrev}.fs
