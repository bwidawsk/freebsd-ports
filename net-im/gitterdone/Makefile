# $FreeBSD$

PORTNAME=	gitterdone
PORTVERSION=	201710031257
CATEGORIES=	net-im

MAINTAINER=	jt@ixsystems.com
COMMENT=	Gitter Client based on Qt5

LICENSE=	BSD2CLAUSE

MAKE_ARGS=	PREFIX=${STAGEDIR}${PREFIX}

MAKE_JOBS_UNSAFE=	yes
USE_LDCONFIG=	yes

USES=		qmake qt:5 shebangfix tar:xz
USE_QT=		core gui network linguist_build \
		buildtools_build widgets webkit svg
USE_GL+=	gl

WRKSRC_SUBDIR=	src-qt5

QMAKE_ARGS=	CONFIG+="configure"

USE_GITHUB=	yes
GH_ACCOUNT=	trueos
GH_PROJECT=	gitterdone
GH_TAGNAME=	23eaadb70baeffb22ab035e08fc4675907707590

.include <bsd.port.mk>
