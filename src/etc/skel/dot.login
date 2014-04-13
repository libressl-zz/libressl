# $OpenBSD: src/lib/libssl/src/etc/skel/dot.login,v 1.1.1.1 2014/04/13 15:16:32 miod Exp $
#
# csh login file

if ( ! $?TERMCAP ) then
	if ( $?XTERM_VERSION ) then
		tset -IQ '-munknown:?vt220' $TERM
	else
		tset -Q '-munknown:?vt220' $TERM
	endif
endif

stty	newcrt crterase

set	savehist=100
set	ignoreeof

setenv	EXINIT		'set ai sm noeb'
setenv	HOSTALIASES	 $HOME/.hostaliases

if (-x /usr/games/fortune) /usr/games/fortune
