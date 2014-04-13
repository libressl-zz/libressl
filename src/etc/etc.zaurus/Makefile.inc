#	$OpenBSD: src/lib/libssl/src/etc/etc.zaurus/Makefile.inc,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $

bootblocks:
	cp ${DESTDIR}/usr/mdec/zboot ${RELEASEDIR}
	cp ${DESTDIR}/usr/mdec/zbsdmod.o ${RELEASEDIR}

MDEXT=	bsd.rd zboot zbsdmod.o openbsd${OSrev}_arm.ipk Packages
