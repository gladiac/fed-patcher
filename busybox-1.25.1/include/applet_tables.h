/* This is a generated file, don't edit */

#define NUM_APPLETS 95
#define KNOWN_APPNAME_OFFSETS 4

const uint16_t applet_nameofs[] ALIGN2 = {
117,
248,
391,
};

const char applet_names[] ALIGN1 = ""
"[" "\0"
"[[" "\0"
"ar" "\0"
"base64" "\0"
"basename" "\0"
"bunzip2" "\0"
"bzcat" "\0"
"bzip2" "\0"
"cal" "\0"
"cat" "\0"
"catv" "\0"
"chgrp" "\0"
"chmod" "\0"
"chown" "\0"
"cp" "\0"
"cpio" "\0"
"cut" "\0"
"dd" "\0"
"echo" "\0"
"egrep" "\0"
"env" "\0"
"expand" "\0"
"expr" "\0"
"false" "\0"
"fgrep" "\0"
"find" "\0"
"fold" "\0"
"fsync" "\0"
"grep" "\0"
"gunzip" "\0"
"gzip" "\0"
"head" "\0"
"install" "\0"
"ln" "\0"
"ls" "\0"
"lzcat" "\0"
"lzma" "\0"
"lzop" "\0"
"lzopcat" "\0"
"md5sum" "\0"
"mkdir" "\0"
"mkfifo" "\0"
"mknod" "\0"
"mv" "\0"
"nice" "\0"
"nohup" "\0"
"od" "\0"
"printf" "\0"
"pwd" "\0"
"readlink" "\0"
"realpath" "\0"
"rm" "\0"
"rmdir" "\0"
"sed" "\0"
"seq" "\0"
"sha1sum" "\0"
"sha256sum" "\0"
"sha3sum" "\0"
"sha512sum" "\0"
"sleep" "\0"
"sort" "\0"
"split" "\0"
"strings" "\0"
"stty" "\0"
"sum" "\0"
"sync" "\0"
"tac" "\0"
"tail" "\0"
"tar" "\0"
"tee" "\0"
"test" "\0"
"touch" "\0"
"tr" "\0"
"true" "\0"
"truncate" "\0"
"uname" "\0"
"uncompress" "\0"
"unexpand" "\0"
"uniq" "\0"
"unlink" "\0"
"unlzma" "\0"
"unlzop" "\0"
"unxz" "\0"
"unzip" "\0"
"usleep" "\0"
"uudecode" "\0"
"uuencode" "\0"
"wc" "\0"
"which" "\0"
"whoami" "\0"
"xargs" "\0"
"xz" "\0"
"xzcat" "\0"
"yes" "\0"
"zcat" "\0"
;

#define APPLET_NO_ar 2
#define APPLET_NO_base64 3
#define APPLET_NO_basename 4
#define APPLET_NO_bunzip2 5
#define APPLET_NO_bzcat 6
#define APPLET_NO_bzip2 7
#define APPLET_NO_cal 8
#define APPLET_NO_cat 9
#define APPLET_NO_catv 10
#define APPLET_NO_chgrp 11
#define APPLET_NO_chmod 12
#define APPLET_NO_chown 13
#define APPLET_NO_cp 14
#define APPLET_NO_cpio 15
#define APPLET_NO_cut 16
#define APPLET_NO_dd 17
#define APPLET_NO_echo 18
#define APPLET_NO_egrep 19
#define APPLET_NO_env 20
#define APPLET_NO_expand 21
#define APPLET_NO_expr 22
#define APPLET_NO_false 23
#define APPLET_NO_fgrep 24
#define APPLET_NO_find 25
#define APPLET_NO_fold 26
#define APPLET_NO_fsync 27
#define APPLET_NO_grep 28
#define APPLET_NO_gunzip 29
#define APPLET_NO_gzip 30
#define APPLET_NO_head 31
#define APPLET_NO_install 32
#define APPLET_NO_ln 33
#define APPLET_NO_ls 34
#define APPLET_NO_lzcat 35
#define APPLET_NO_lzma 36
#define APPLET_NO_lzop 37
#define APPLET_NO_lzopcat 38
#define APPLET_NO_md5sum 39
#define APPLET_NO_mkdir 40
#define APPLET_NO_mkfifo 41
#define APPLET_NO_mknod 42
#define APPLET_NO_mv 43
#define APPLET_NO_nice 44
#define APPLET_NO_nohup 45
#define APPLET_NO_od 46
#define APPLET_NO_printf 47
#define APPLET_NO_pwd 48
#define APPLET_NO_readlink 49
#define APPLET_NO_realpath 50
#define APPLET_NO_rm 51
#define APPLET_NO_rmdir 52
#define APPLET_NO_sed 53
#define APPLET_NO_seq 54
#define APPLET_NO_sha1sum 55
#define APPLET_NO_sha256sum 56
#define APPLET_NO_sha3sum 57
#define APPLET_NO_sha512sum 58
#define APPLET_NO_sleep 59
#define APPLET_NO_sort 60
#define APPLET_NO_split 61
#define APPLET_NO_strings 62
#define APPLET_NO_stty 63
#define APPLET_NO_sum 64
#define APPLET_NO_sync 65
#define APPLET_NO_tac 66
#define APPLET_NO_tail 67
#define APPLET_NO_tar 68
#define APPLET_NO_tee 69
#define APPLET_NO_test 70
#define APPLET_NO_touch 71
#define APPLET_NO_tr 72
#define APPLET_NO_true 73
#define APPLET_NO_truncate 74
#define APPLET_NO_uname 75
#define APPLET_NO_uncompress 76
#define APPLET_NO_unexpand 77
#define APPLET_NO_uniq 78
#define APPLET_NO_unlink 79
#define APPLET_NO_unlzma 80
#define APPLET_NO_unlzop 81
#define APPLET_NO_unxz 82
#define APPLET_NO_unzip 83
#define APPLET_NO_usleep 84
#define APPLET_NO_uudecode 85
#define APPLET_NO_uuencode 86
#define APPLET_NO_wc 87
#define APPLET_NO_which 88
#define APPLET_NO_whoami 89
#define APPLET_NO_xargs 90
#define APPLET_NO_xz 91
#define APPLET_NO_xzcat 92
#define APPLET_NO_yes 93
#define APPLET_NO_zcat 94

#ifndef SKIP_applet_main
int (*const applet_main[])(int argc, char **argv) = {
test_main,
test_main,
ar_main,
base64_main,
basename_main,
bunzip2_main,
bunzip2_main,
bzip2_main,
cal_main,
cat_main,
catv_main,
chgrp_main,
chmod_main,
chown_main,
cp_main,
cpio_main,
cut_main,
dd_main,
echo_main,
grep_main,
env_main,
expand_main,
expr_main,
false_main,
grep_main,
find_main,
fold_main,
fsync_main,
grep_main,
gunzip_main,
gzip_main,
head_main,
install_main,
ln_main,
ls_main,
unlzma_main,
unlzma_main,
lzop_main,
lzop_main,
md5_sha1_sum_main,
mkdir_main,
mkfifo_main,
mknod_main,
mv_main,
nice_main,
nohup_main,
od_main,
printf_main,
pwd_main,
readlink_main,
realpath_main,
rm_main,
rmdir_main,
sed_main,
seq_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
md5_sha1_sum_main,
sleep_main,
sort_main,
split_main,
strings_main,
stty_main,
sum_main,
sync_main,
tac_main,
tail_main,
tar_main,
tee_main,
test_main,
touch_main,
tr_main,
true_main,
truncate_main,
uname_main,
uncompress_main,
expand_main,
uniq_main,
unlink_main,
unlzma_main,
lzop_main,
unxz_main,
unzip_main,
usleep_main,
uudecode_main,
uuencode_main,
wc_main,
which_main,
whoami_main,
xargs_main,
unxz_main,
unxz_main,
yes_main,
gunzip_main,
};
#endif

const uint8_t applet_install_loc[] ALIGN1 = {
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x11,
0x01,
};
