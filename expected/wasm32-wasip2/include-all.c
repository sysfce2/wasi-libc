#include <__errno.h>
#include <__errno_values.h>
#include <__fd_set.h>
#include <__function___isatty.h>
#include <__functions_malloc.h>
#include <__functions_memcpy.h>
#include <__header_dirent.h>
#include <__header_fcntl.h>
#include <__header_inttypes.h>
#include <__header_netinet_in.h>
#include <__header_poll.h>
#include <__header_stdlib.h>
#include <__header_string.h>
#include <__header_sys_ioctl.h>
#include <__header_sys_resource.h>
#include <__header_sys_socket.h>
#include <__header_sys_stat.h>
#include <__header_time.h>
#include <__header_unistd.h>
#include <__macro_FD_SETSIZE.h>
#include <__macro_PAGESIZE.h>
#include <__mode_t.h>
#include <__seek.h>
#include <__struct_dirent.h>
#include <__struct_in6_addr.h>
#include <__struct_in_addr.h>
#include <__struct_iovec.h>
#include <__struct_msghdr.h>
#include <__struct_pollfd.h>
#include <__struct_rusage.h>
#include <__struct_sockaddr.h>
#include <__struct_sockaddr_in.h>
#include <__struct_sockaddr_in6.h>
#include <__struct_sockaddr_storage.h>
#include <__struct_sockaddr_un.h>
#include <__struct_stat.h>
#include <__struct_timespec.h>
#include <__struct_timeval.h>
#include <__struct_tm.h>
#include <__struct_tms.h>
#include <__typedef_DIR.h>
#include <__typedef_blkcnt_t.h>
#include <__typedef_blksize_t.h>
#include <__typedef_clock_t.h>
#include <__typedef_clockid_t.h>
#include <__typedef_dev_t.h>
#include <__typedef_fd_set.h>
#include <__typedef_gid_t.h>
#include <__typedef_in_addr_t.h>
#include <__typedef_in_port_t.h>
#include <__typedef_ino_t.h>
#include <__typedef_mode_t.h>
#include <__typedef_nfds_t.h>
#include <__typedef_nlink_t.h>
#include <__typedef_off_t.h>
#include <__typedef_sa_family_t.h>
#include <__typedef_sigset_t.h>
#include <__typedef_socklen_t.h>
#include <__typedef_ssize_t.h>
#include <__typedef_suseconds_t.h>
#include <__typedef_time_t.h>
#include <__typedef_uid_t.h>
#include <__wasi_snapshot.h>
#include <alloca.h>
#include <ar.h>
#include <arpa/ftp.h>
#include <arpa/inet.h>
#include <arpa/nameser.h>
#include <arpa/nameser_compat.h>
#include <arpa/telnet.h>
#include <arpa/tftp.h>
#include <assert.h>
#include <byteswap.h>
#include <complex.h>
#include <cpio.h>
#include <crypt.h>
#include <ctype.h>
#include <dirent.h>
#include <dlfcn.h>
#include <endian.h>
#include <err.h>
#include <errno.h>
#include <fcntl.h>
#include <features.h>
#include <fenv.h>
#include <float.h>
#include <fmtmsg.h>
#include <fnmatch.h>
#include <ftw.h>
#include <getopt.h>
#include <glob.h>
#include <iconv.h>
#include <ifaddrs.h>
#include <inttypes.h>
#include <iso646.h>
#include <langinfo.h>
#include <libgen.h>
#include <limits.h>
#include <locale.h>
#include <malloc.h>
#include <math.h>
#include <memory.h>
#include <monetary.h>
#include <mqueue.h>
#include <netdb.h>
#include <netinet/icmp6.h>
#include <netinet/igmp.h>
#include <netinet/in.h>
#include <netinet/in_systm.h>
#include <netinet/ip.h>
#include <netinet/ip6.h>
#include <netinet/ip_icmp.h>
#include <netinet/tcp.h>
#include <netinet/udp.h>
#include <netpacket/packet.h>
#include <nl_types.h>
#include <poll.h>
#include <regex.h>
#include <sched.h>
#include <search.h>
#include <semaphore.h>
#include <stdalign.h>
#include <stdbool.h>
#include <stdc-predef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>
#include <strings.h>
#include <stropts.h>
#include <sys/dir.h>
#include <sys/errno.h>
#include <sys/eventfd.h>
#include <sys/fcntl.h>
#include <sys/file.h>
#include <sys/ioctl.h>
#include <sys/param.h>
#include <sys/poll.h>
#include <sys/random.h>
#include <sys/reg.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/statvfs.h>
#include <sys/stropts.h>
#include <sys/syscall.h>
#include <sys/sysinfo.h>
#include <sys/time.h>
#include <sys/timeb.h>
#include <sys/timex.h>
#include <sys/ttydefaults.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <sys/un.h>
#include <sys/utsname.h>
#include <syscall.h>
#include <sysexits.h>
#include <tar.h>
#include <tgmath.h>
#include <threads.h>
#include <time.h>
#include <uchar.h>
#include <unistd.h>
#include <utime.h>
#include <values.h>
#include <wasi/api.h>
#include <wasi/libc-environ.h>
#include <wasi/libc-find-relpath.h>
#include <wasi/libc-nocwd.h>
#include <wasi/libc.h>
#include <wasi/wasip2.h>
#include <wchar.h>
#include <wctype.h>