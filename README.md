# scsh
A mirror (or better: a backup of the latest release- 0.6.7, released May 16, 2006) for Scheme Shell.

# "Woah, very impressive... Nice code btw. Is it yours? I mean, you've coded this, eh?"
In no way! **This is just a mirror**, as i've said before.
**Nothing here is mine**- i'm just an enthusiast doing a backup, **all credits belong to original authors (and contributors)**.
I don't know the exact name of the license, but it's seems like a permissive MIT-style license (read COPYING) (thanks Lord that isn't GPL'd).

# What is this?
From the original website:
> Scsh is an open-source Unix shell embedded within Scheme, running on all major Unix platforms including AIX, Cygwin, Linux, FreeBSD, GNU Hurd, HP-UX, Irix, Mac OS X, Solaris, and some others.
> Scsh is designed for writing real-life standalone Unix programs and shell scripts. Scsh spans a wide range of application, from “script” applications usually handled with perl or sh, to more standard systems applications usually written in C.

# Scsh as a scripting language.
Again, from the original website:
> Scsh has a high-level process notation for doing shell-script like tasks: running programs, establishing pipelines and I/O redirection.
> For example, the shell pipeline:
```sh
gunzip < paper.tex.gz | detex | spell | lpr -Ppulp &
```
> would be written in scsh as:
```lisp
(& (| (gunzip) (detex) (spell) (lpr -Ppulp)) ; background a pipeline 
   (< paper.tex.gz))                         ; with this redirection
```
> Scsh embeds this process notation within a full Scheme implementation.
> The process notation is realised as a set of macro definitions, and is carefully designed to allow full integration with standard Scheme code. 
> **Scsh isn't Scheme-like; it is Scheme**.
> At the scripting level, scsh also has an Awk design, also implemented as a macro that can be embedded inside general Scheme code.

# Scsh as a systems-programming language.
eh... i need to say again that is from the original website?
> Scsh additionally provides the low-level access to the operating system normally associated with C. 
> With the exception of signal handlers, the current release provids full access to Posix, plus important non-Posix extensions, such as complete sockets support.
> “Complete Posix” means: fork, exec & wait, sockets, full read, write, open & close, seek & tell, complete file-system access, including stat, chmod/chgrp/chown, symlink, FIFO & directory access, tty & pty support, file locking, pipes, select, file-name pattern-matching, time & date, environment variables, and more. 
> In brief, **you can now write Unix systems programs in Scheme instead of C**.
> For example, we have implemented an extensible HTTP server at MIT **entirely in scsh**. As important as full access to the OS is the manner in which it is provided.
> Scsh integrates the OS support into Scheme in a manner which respects the general structure of the language.
> The details of the design are discussed in a joint MIT Lab for Computer Science/University of Hong Kong technical report, [“A Scheme shell” *(archived)*](http://web.archive.org/web/20070709091351/http://www.scsh.net/docu/dessous.html), also to appear in a revised format in the Journal of Lisp and Symbolic Computation. This paper is also available by ftp.

