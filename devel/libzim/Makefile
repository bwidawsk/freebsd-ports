# $FreeBSD$

PORTNAME=	libzim
PORTVERSION=	4.0.0
CATEGORIES=	devel

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Reference implementation of the ZIM specification

LIB_DEPENDS=	libicui18n.so:devel/icu \
		libxapian.so:databases/xapian-core

USES=		compiler:c++11-lang meson pkgconfig python:3.4+
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	openzim
# Using gcc6 and libstdc++ leads to error because xapian-core is linked with libc++
BROKEN_FreeBSD_10=	/usr/include/c++/v1/memory:4004:35: error: no viable overloaded '='

BINARY_ALIAS=	python3=python${PYTHON_VER} python3-config=python${PYTHON_VER}-config

.include <bsd.port.mk>
