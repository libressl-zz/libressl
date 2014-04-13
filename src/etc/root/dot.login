# $OpenBSD: src/lib/libssl/src/etc/root/dot.login,v 1.1.1.1 2014/04/13 15:16:32 miod Exp $
#
# csh login file

if ( -x /usr/bin/tset ) then
	set noglob histchars=""
	onintr finish
	if ( $?XTERM_VERSION ) then
		eval `tset -IsQ '-munknown:?vt220' $TERM`
	else
		eval `tset -sQ '-munknown:?vt220' $TERM`
	endif
	finish:
	unset noglob histchars
	onintr
endif
