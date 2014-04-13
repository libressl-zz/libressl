#	$OpenBSD: src/lib/libssl/src/etc/etc.sgi/Makefile.inc,v 1.1.1.1 2014/04/13 15:16:31 miod Exp $

ALLIP=	22 27 28 30 32
KERNELS=
MDEXT=

.for IP in ${ALLIP}
KERNELS+=	GENERIC-IP${IP} bsd.IP${IP}
MDEXT+=		bsd.rd.IP${IP}
.endfor
KERNELS+=	GENERIC-IP30.MP bsd.mp.IP30

bootblocks:
	cp ${DESTDIR}/usr/mdec/boot32 ${RELEASEDIR}
	cp ${DESTDIR}/usr/mdec/boot64 ${RELEASEDIR}
	cp ${DESTDIR}/usr/mdec/bootecoff ${RELEASEDIR}

MDEXT+=	boot32 boot64 bootecoff cd${OSrev}.iso
