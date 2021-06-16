# 1 "y_openpl.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "y_openpl.c"
# 32 "y_openpl.c"
# 1 "./../include/sys-defines.h" 1
# 22 "./../include/sys-defines.h"
# 1 "../config.h" 1
# 23 "./../include/sys-defines.h" 2
# 79 "./../include/sys-defines.h"
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 1 3
# 9 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt_stdio_config.h" 1 3
# 10 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt_stdio_config.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt.h" 1 3
# 10 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/_mingw.h" 1 3
# 10 "C:/msys32/mingw32/i686-w64-mingw32/include/_mingw.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/_mingw_mac.h" 1 3
# 11 "C:/msys32/mingw32/i686-w64-mingw32/include/_mingw.h" 2 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/_mingw_secapi.h" 1 3
# 12 "C:/msys32/mingw32/i686-w64-mingw32/include/_mingw.h" 2 3
# 283 "C:/msys32/mingw32/i686-w64-mingw32/include/_mingw.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/vadefs.h" 1 3
# 9 "C:/msys32/mingw32/i686-w64-mingw32/include/vadefs.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/_mingw.h" 1 3
# 609 "C:/msys32/mingw32/i686-w64-mingw32/include/_mingw.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
# 610 "C:/msys32/mingw32/i686-w64-mingw32/include/_mingw.h" 2 3
# 10 "C:/msys32/mingw32/i686-w64-mingw32/include/vadefs.h" 2 3




#pragma pack(push,_CRT_PACKING)
# 24 "C:/msys32/mingw32/i686-w64-mingw32/include/vadefs.h" 3
  
# 24 "C:/msys32/mingw32/i686-w64-mingw32/include/vadefs.h" 3
 typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 103 "C:/msys32/mingw32/i686-w64-mingw32/include/vadefs.h" 3
#pragma pack(pop)
# 284 "C:/msys32/mingw32/i686-w64-mingw32/include/_mingw.h" 2 3
# 580 "C:/msys32/mingw32/i686-w64-mingw32/include/_mingw.h" 3
void __attribute__((__cdecl__)) __debugbreak(void);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void __attribute__((__cdecl__)) __debugbreak(void)
{
  __asm__ __volatile__("int {$}3":);
}




const char *__mingw_get_crt_info (void);
# 11 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt.h" 2 3




#pragma pack(push,_CRT_PACKING)
# 42 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt.h" 3
typedef unsigned int size_t;
# 52 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt.h" 3
typedef int ssize_t;




typedef size_t rsize_t;
# 69 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt.h" 3
typedef int intptr_t;
# 82 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt.h" 3
typedef unsigned int uintptr_t;
# 95 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt.h" 3
typedef int ptrdiff_t;







typedef unsigned short wchar_t;







typedef unsigned short wint_t;
typedef unsigned short wctype_t;





typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;
# 141 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt.h" 3
typedef __time32_t time_t;
# 435 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt.h" 3
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {





  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;

} threadlocinfo;
# 506 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt.h" 3
#pragma pack(pop)
# 11 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt_stdio_config.h" 2 3
# 10 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 2 3

#pragma pack(push,_CRT_PACKING)
# 24 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
  struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;
# 78 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/_mingw_off_t.h" 1 3




  typedef long _off_t;

  typedef long off32_t;





  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;
# 26 "C:/msys32/mingw32/i686-w64-mingw32/include/_mingw_off_t.h" 3
typedef off32_t off_t;
# 79 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 2 3

__attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) __acrt_iob_func(unsigned index);
# 90 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
extern FILE (* _imp___iob)[];
# 102 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __extension__ typedef long long fpos_t;
# 142 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_scanf(const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vscanf(const char * __restrict__ Format, va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);

extern
  __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
                               va_list _ArgList);
extern
  __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
extern
  __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__((nonnull (1,2)))
  int __attribute__((__cdecl__)) __mingw_asprintf(char ** __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__((nonnull (1,2)))
  int __attribute__((__cdecl__)) __mingw_vasprintf(char ** __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));

extern
  __attribute__((__format__ (ms_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (ms_scanf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_scanf(const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (ms_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);

extern
  __attribute__((__format__ (ms_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (ms_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (ms_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (ms_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (ms_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (ms_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
# 274 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
int sscanf(const char *__source, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsscanf( __source, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 1, 2))) __attribute__ ((__nonnull__ (1)))
int scanf(const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfscanf( (__acrt_iob_func(0)), __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
int fscanf(FILE *__stream, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfscanf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"


static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
int vsscanf (const char *__source, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vsscanf( __source, __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 1, 0))) __attribute__ ((__nonnull__ (1)))
int vscanf(const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfscanf( (__acrt_iob_func(0)), __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
int vfscanf (FILE *__stream, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfscanf( __stream, __format, __local_argv );
}


#pragma GCC diagnostic pop





static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
int fprintf (FILE *__stream, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
int printf (const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfprintf( (__acrt_iob_func(1)), __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}
# 380 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
int sprintf (char *__stream, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}



static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
int vfprintf (FILE *__stream, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfprintf( __stream, __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
int vprintf (const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfprintf( (__acrt_iob_func(1)), __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
int vsprintf (char *__stream, const char *__format, __builtin_va_list __local_argv)
{
# 419 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
  return __mingw_vsprintf( __stream, __format, __local_argv );
}
# 435 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
int snprintf (char *__stream, size_t __n, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsnprintf( __stream, __n, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}



static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
int vsnprintf (char *__stream, size_t __n, const char *__format, __builtin_va_list __local_argv)
{



  return __mingw_vsnprintf( __stream, __n, __format, __local_argv );
}
# 625 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _flsbuf(int _Ch,FILE *_File);



  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);

  void __attribute__((__cdecl__)) clearerr(FILE *_File);
  int __attribute__((__cdecl__)) fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fcloseall(void);



  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _fdopen(int _FileHandle,const char *_Mode);

  int __attribute__((__cdecl__)) feof(FILE *_File);
  int __attribute__((__cdecl__)) ferror(FILE *_File);
  int __attribute__((__cdecl__)) fflush(FILE *_File);
  int __attribute__((__cdecl__)) fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fgetchar(void);
  int __attribute__((__cdecl__)) fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  int __attribute__((__cdecl__)) fgetpos64(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char *__attribute__((__cdecl__)) fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fileno(FILE *_File);



  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _flushall(void);
  FILE *__attribute__((__cdecl__)) fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int __attribute__((__cdecl__)) fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fputchar(int _Ch);
  int __attribute__((__cdecl__)) fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t __attribute__((__cdecl__)) fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE *__attribute__((__cdecl__)) freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int __attribute__((__cdecl__)) fsetpos(FILE *_File,const fpos_t *_Pos);
  int __attribute__((__cdecl__)) fsetpos64(FILE *_File,const fpos_t *_Pos);
  int __attribute__((__cdecl__)) fseek(FILE *_File,long _Offset,int _Origin);
  long __attribute__((__cdecl__)) ftell(FILE *_File);



  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _ftelli64(FILE *_File);
# 684 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  int fseeko(FILE* stream, _off_t offset, int whence);

  _off_t ftello(FILE * stream);
  _off64_t ftello64(FILE * stream);
# 705 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
  size_t __attribute__((__cdecl__)) fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) getc(FILE *_File);
  int __attribute__((__cdecl__)) getchar(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _getmaxstdio(void);
  char *__attribute__((__cdecl__)) gets(char *_Buffer) ;
  int __attribute__((__cdecl__)) _getw(FILE *_File);


  void __attribute__((__cdecl__)) perror(const char *_ErrMsg);


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _popen(const char *_Command,const char *_Mode);





  int __attribute__((__cdecl__)) putc(int _Ch,FILE *_File);
  int __attribute__((__cdecl__)) putchar(int _Ch);
  int __attribute__((__cdecl__)) puts(const char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putw(int _Word,FILE *_File);


  int __attribute__((__cdecl__)) remove(const char *_Filename);
  int __attribute__((__cdecl__)) rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _unlink(const char *_Filename);

  int __attribute__((__cdecl__)) unlink(const char *_Filename) ;


  void __attribute__((__cdecl__)) rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _rmtmp(void);
  void __attribute__((__cdecl__)) setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _get_output_format(void);
  int __attribute__((__cdecl__)) setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
# 765 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf(const char * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;

  FILE *__attribute__((__cdecl__)) tmpfile(void) ;
  char *__attribute__((__cdecl__)) tmpnam(char *_Buffer);
  int __attribute__((__cdecl__)) ungetc(int _Ch,FILE *_File);
# 787 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__((__format__ (ms_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
  __attribute__((__format__ (ms_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
# 952 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf(const char * __restrict__ _Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _get_printf_count_output(void);




                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vswscanf (const wchar_t * __restrict__ _Str,const wchar_t * __restrict__ Format,va_list argp);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_wscanf(const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vwscanf(const wchar_t * __restrict__ Format, va_list argp);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfwscanf (FILE * __restrict__ fp, const wchar_t * __restrict__ Format,va_list argp);

                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
                                                      __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_wprintf(const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                      __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
                                                      __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...);
                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list);

                                                    __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...);
                                                    __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_wscanf(const wchar_t * __restrict__ _Format,...);
                                                    __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);

                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_wprintf(const wchar_t * __restrict__ _Format,...);
                                                    __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                    __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list);
# 1022 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (2)))
int swscanf(const wchar_t *__source, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vswscanf( __source, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (1)))
int wscanf(const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwscanf( (__acrt_iob_func(0)), __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (2)))
int fwscanf(FILE *__stream, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwscanf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}


static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (2)))
int vswscanf (const wchar_t * __restrict__ __source, const wchar_t * __restrict__ __format, __builtin_va_list __local_argv)
{
  return __mingw_vswscanf( __source, __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (1)))
int vwscanf(const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwscanf( (__acrt_iob_func(0)), __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (2)))
int vfwscanf (FILE *__stream, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwscanf( __stream, __format, __local_argv );
}




static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (2)))
int fwprintf (FILE *__stream, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (1)))
int wprintf (const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwprintf( (__acrt_iob_func(1)), __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (2)))
int vfwprintf (FILE *__stream, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwprintf( __stream, __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (1)))
int vwprintf (const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwprintf( (__acrt_iob_func(1)), __format, __local_argv );
}
# 1130 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int snwprintf (wchar_t *__stream, size_t __n, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsnwprintf( __stream, __n, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}



static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int vsnwprintf (wchar_t *__stream, size_t __n, const wchar_t *__format, __builtin_va_list __local_argv)
{



  return __mingw_vsnwprintf( __stream, __n, __format, __local_argv );
}
# 1283 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t __attribute__((__cdecl__)) fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwchar(void);
  wint_t __attribute__((__cdecl__)) fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) getwc(FILE *_File);
  wint_t __attribute__((__cdecl__)) getwchar(void);
  wint_t __attribute__((__cdecl__)) putwc(wchar_t _Ch,FILE *_File);
  wint_t __attribute__((__cdecl__)) putwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) ungetwc(wint_t _Ch,FILE *_File);
  wchar_t *__attribute__((__cdecl__)) fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putws(const wchar_t *_Str);
# 1365 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
# 1401 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);



# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/swprintf.inl" 1 3
# 25 "C:/msys32/mingw32/i686-w64-mingw32/include/swprintf.inl" 3
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int vswprintf (wchar_t *__stream, size_t __count, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return vsnwprintf( __stream, __count, __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int swprintf (wchar_t *__stream, size_t __count, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv;

  __builtin_va_start( __local_argv, __format );
  __retval = vswprintf( __stream, __count, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}
# 1407 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 2 3
# 1416 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wpopen(const wchar_t *_Command,const wchar_t *_Mode);




  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 1472 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _unlock_file(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _ungetc_nolock(int _Ch,FILE *_File);





  char *__attribute__((__cdecl__)) tempnam(const char *_Directory,const char *_FilePrefix) ;
  int __attribute__((__cdecl__)) fcloseall(void) ;
  FILE *__attribute__((__cdecl__)) fdopen(int _FileHandle,const char *_Format) ;
  int __attribute__((__cdecl__)) fgetchar(void) ;
  int __attribute__((__cdecl__)) fileno(FILE *_File) ;
  int __attribute__((__cdecl__)) flushall(void) ;
  int __attribute__((__cdecl__)) fputchar(int _Ch) ;
  int __attribute__((__cdecl__)) getw(FILE *_File) ;
  int __attribute__((__cdecl__)) putw(int _Ch,FILE *_File) ;
  int __attribute__((__cdecl__)) rmtmp(void) ;
# 1514 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
int __attribute__((__cdecl__)) __mingw_str_wide_utf8 (const wchar_t * const wptr, char **mbptr, size_t * buflen);
# 1528 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
int __attribute__((__cdecl__)) __mingw_str_utf8_wide (const char *const mbptr, wchar_t ** wptr, size_t * buflen);
# 1537 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
void __attribute__((__cdecl__)) __mingw_str_free(void *ptr);






  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnl(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnle(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnlp(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnlpe(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnv(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnve(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnvp(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnvpe(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
# 1568 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 3
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnv(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnve(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnvp(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnvpe(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);







#pragma pack(pop)

# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/stdio_s.h" 1 3
# 9 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/stdio_s.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 1 3
# 10 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/stdio_s.h" 2 3
# 29 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/stdio_s.h" 3
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) clearerr_s(FILE *_File);

  size_t __attribute__((__cdecl__)) fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);
# 494 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/stdio_s.h" 3
  int __attribute__((__cdecl__)) fprintf_s(FILE *_File,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fscanf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) fscanf_s(FILE *_File, const char *_Format, ...);
  int __attribute__((__cdecl__)) printf_s(const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scanf_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scanf_s_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) scanf_s(const char *_Format, ...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_c(char *_DstBuf,size_t _MaxCount,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_c(char *_DstBuf,size_t _MaxCount,const char *_Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fscanf_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sscanf_l(const char *_Src,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sscanf_s_l(const char *_Src,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) sscanf_s(const char *_Src,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf_s(const char *_Src,size_t _MaxCount,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf_l(const char *_Src,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf_s_l(const char *_Src,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  int __attribute__((__cdecl__)) vfprintf_s(FILE *_File,const char *_Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vprintf_s(const char *_Format,va_list _ArgList);

  int __attribute__((__cdecl__)) vsnprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,va_list _ArgList);

  __attribute__((dllimport)) int __attribute__((__cdecl__)) vsprintf_s(char *_DstBuf,size_t _Size,const char *_Format,va_list _ArgList);

  __attribute__((dllimport)) int __attribute__((__cdecl__)) sprintf_s(char *_DstBuf,size_t _DstSize,const char *_Format,...);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,...);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_p(FILE *_File,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_p(const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_p(char *_Dst,size_t _MaxCount,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_p(FILE *_File,const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_p(const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_p(char *_Dst,size_t _MaxCount,const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf_p(const char *_Format,...);
  __attribute__((dllimport)) int __attribute__((__cdecl__)) _vscprintf_p(const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_p_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_p_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_p_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_p_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_l(char *_DstBuf,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_p_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_l(char *_DstBuf,const char *_Format,_locale_t,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_p_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf_p_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf_p_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_s_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_s_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_s_l(char *_DstBuf,size_t _DstSize,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_s_l(char *_DstBuf,size_t _DstSize,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_c_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_c_l(char *_DstBuf,size_t _MaxCount,const char *,_locale_t _Locale,va_list _ArgList);


 
 
 
 
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) fopen_s(FILE **_File,const char *_Filename,const char *_Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) freopen_s(FILE** _File, const char *_Filename, const char *_Mode, FILE *_Stream);

  __attribute__ ((__dllimport__)) char* __attribute__((__cdecl__)) gets_s(char*,rsize_t);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) tmpnam_s(char*,rsize_t);
 




  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws_s(wchar_t *_Str,size_t _SizeInWords);
 
# 786 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/stdio_s.h" 3
  int __attribute__((__cdecl__)) fwprintf_s(FILE *_File,const wchar_t *_Format,...);
  int __attribute__((__cdecl__)) wprintf_s(const wchar_t *_Format,...);
  int __attribute__((__cdecl__)) vfwprintf_s(FILE *_File,const wchar_t *_Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vwprintf_s(const wchar_t *_Format,va_list _ArgList);

  int __attribute__((__cdecl__)) vswprintf_s(wchar_t *_Dst,size_t _SizeInWords,const wchar_t *_Format,va_list _ArgList);

  int __attribute__((__cdecl__)) swprintf_s(wchar_t *_Dst,size_t _SizeInWords,const wchar_t *_Format,...);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_s(wchar_t *_DstBuf,size_t _DstSizeInWords,size_t _MaxCount,const wchar_t *_Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_s(wchar_t *_DstBuf,size_t _DstSizeInWords,size_t _MaxCount,const wchar_t *_Format,...);


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_s_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_s_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwscanf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) fwscanf_s(FILE *_File, const wchar_t *_Format, ...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swscanf_s_l(const wchar_t *_Src,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) swscanf_s(const wchar_t *_Src,const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_s(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_s_l(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wscanf_s_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) wscanf_s(const wchar_t *_Format, ...);


 
 
 
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wfopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wfreopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode,FILE *_OldFile);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wtmpnam_s(wchar_t *_DstBuf,size_t _SizeInWords);
 


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_p(FILE *_File,const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_p(const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_p(FILE *_File,const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_p(const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_p(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,...);
  __attribute__((dllimport)) int __attribute__((__cdecl__)) _vswprintf_p(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_p(const wchar_t *_Format,...);
  __attribute__((dllimport)) int __attribute__((__cdecl__)) _vscwprintf_p(const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_p_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_p_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_p_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_p_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_c_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_p_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_c_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_p_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_p_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_p_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __swprintf_l(wchar_t *_Dest,const wchar_t *_Format,_locale_t _Plocinfo,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __vswprintf_l(wchar_t *_Dest,const wchar_t *_Format,_locale_t _Plocinfo,va_list _Args);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwscanf_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swscanf_l(const wchar_t *_Src,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_l(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wscanf_l(const wchar_t *_Format,_locale_t _Locale,...);





  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _fread_nolock_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);
# 1582 "C:/msys32/mingw32/i686-w64-mingw32/include/stdio.h" 2 3
# 80 "./../include/sys-defines.h" 2
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/ctype.h" 1 3
# 9 "C:/msys32/mingw32/i686-w64-mingw32/include/ctype.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/crtdefs.h" 1 3
# 10 "C:/msys32/mingw32/i686-w64-mingw32/include/ctype.h" 2 3
# 43 "C:/msys32/mingw32/i686-w64-mingw32/include/ctype.h" 3
  extern unsigned short ** _imp___pctype;
# 59 "C:/msys32/mingw32/i686-w64-mingw32/include/ctype.h" 3
  extern unsigned short ** _imp___wctype;
# 71 "C:/msys32/mingw32/i686-w64-mingw32/include/ctype.h" 3
  extern unsigned short ** _imp___pwctype;
# 80 "C:/msys32/mingw32/i686-w64-mingw32/include/ctype.h" 3
  extern const unsigned char __newclmap[];
  extern const unsigned char __newcumap[];
  extern pthreadlocinfo __ptlocinfo;
  extern pthreadmbcinfo __ptmbcinfo;
  extern int __globallocalestatus;
  extern int __locale_changed;
  extern struct threadlocaleinfostruct __initiallocinfo;
  extern _locale_tstruct __initiallocalestructinfo;
  pthreadlocinfo __attribute__((__cdecl__)) __updatetlocinfo(void);
  pthreadmbcinfo __attribute__((__cdecl__)) __updatetmbcinfo(void);
# 108 "C:/msys32/mingw32/i686-w64-mingw32/include/ctype.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isctype(int _C,int _Type);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isctype_l(int _C,int _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isalpha(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isalpha_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isupper(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) islower(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _islower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isdigit(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isxdigit(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isxdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isspace(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isspace_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) ispunct(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _ispunct_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isalnum(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isalnum_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isprint(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isprint_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) isgraph(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isgraph_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) iscntrl(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iscntrl_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) toupper(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) tolower(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _tolower(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _tolower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _toupper(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _toupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __isascii(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __toascii(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iscsymf(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iscsym(int _C);


int __attribute__((__cdecl__)) isblank(int _C);






  int __attribute__((__cdecl__)) iswalpha(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswalpha_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswupper(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswupper_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswlower(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswlower_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswdigit_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswxdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswxdigit_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswspace(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswspace_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswpunct(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswpunct_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswalnum(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswalnum_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswprint(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswprint_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswgraph(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswgraph_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswcntrl(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswcntrl_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswascii(wint_t _C);

  int __attribute__((__cdecl__)) isleadbyte(int _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isleadbyte_l(int _C,_locale_t _Locale);

  wint_t __attribute__((__cdecl__)) towupper(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _towupper_l(wint_t _C,_locale_t _Locale);
  wint_t __attribute__((__cdecl__)) towlower(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _towlower_l(wint_t _C,_locale_t _Locale);
  int __attribute__((__cdecl__)) iswctype(wint_t _C,wctype_t _Type);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iswcsymf(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswcsymf_l(wint_t _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __iswcsym(wint_t _C);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _iswcsym_l(wint_t _C,_locale_t _Locale);

  int __attribute__((__cdecl__)) is_wctype(wint_t _C,wctype_t _Type);



int __attribute__((__cdecl__)) iswblank(wint_t _C);
# 207 "C:/msys32/mingw32/i686-w64-mingw32/include/ctype.h" 3
  extern int * _imp____mb_cur_max;




__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) ___mb_cur_max_func(void);
# 81 "./../include/sys-defines.h" 2
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/errno.h" 1 3
# 17 "C:/msys32/mingw32/i686-w64-mingw32/include/errno.h" 3
__attribute__ ((__dllimport__)) extern int *__attribute__((__cdecl__)) _errno(void);


errno_t __attribute__((__cdecl__)) _set_errno(int _Value);
errno_t __attribute__((__cdecl__)) _get_errno(int *_Value);
# 82 "./../include/sys-defines.h" 2
# 105 "./../include/sys-defines.h"
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 1 3
# 10 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
       
# 11 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3




struct _exception;

#pragma pack(push,_CRT_PACKING)
# 119 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  typedef union __mingw_dbl_type_t {
    double x;
    unsigned long long val;
    __extension__ struct {
      unsigned int low, high;
    } lh;
  } __mingw_dbl_type_t;

  typedef union __mingw_flt_type_t {
    float x;
    unsigned int val;
  } __mingw_flt_type_t;

  typedef union __mingw_ldbl_type_t
  {
    long double x;
    __extension__ struct {
      unsigned int low, high;
      int sign_exponent : 16;
      int res1 : 16;
      int res0 : 32;
    } lh;
  } __mingw_ldbl_type_t;




  extern double * _imp___HUGE;
# 158 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  struct _exception {
    int type;
    const char *name;
    double arg1;
    double arg2;
    double retval;
  };

  void __mingw_raise_matherr (int typ, const char *name, double a1, double a2,
         double rslt);
  void __mingw_setusermatherr (int (__attribute__((__cdecl__)) *)(struct _exception *));
  __attribute__ ((__dllimport__)) void __setusermatherr(int (__attribute__((__cdecl__)) *)(struct _exception *));



  double __attribute__((__cdecl__)) sin(double _X);
  double __attribute__((__cdecl__)) cos(double _X);
  double __attribute__((__cdecl__)) tan(double _X);
  double __attribute__((__cdecl__)) sinh(double _X);
  double __attribute__((__cdecl__)) cosh(double _X);
  double __attribute__((__cdecl__)) tanh(double _X);
  double __attribute__((__cdecl__)) asin(double _X);
  double __attribute__((__cdecl__)) acos(double _X);
  double __attribute__((__cdecl__)) atan(double _X);
  double __attribute__((__cdecl__)) atan2(double _Y,double _X);
  double __attribute__((__cdecl__)) exp(double _X);
  double __attribute__((__cdecl__)) log(double _X);
  double __attribute__((__cdecl__)) log10(double _X);
  double __attribute__((__cdecl__)) pow(double _X,double _Y);
  double __attribute__((__cdecl__)) sqrt(double _X);
  double __attribute__((__cdecl__)) ceil(double _X);
  double __attribute__((__cdecl__)) floor(double _X);


  extern float __attribute__((__cdecl__)) fabsf (float x);
  extern long double __attribute__((__cdecl__)) fabsl (long double);
  extern double __attribute__((__cdecl__)) fabs (double _X);
# 233 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  double __attribute__((__cdecl__)) ldexp(double _X,int _Y);
  double __attribute__((__cdecl__)) frexp(double _X,int *_Y);
  double __attribute__((__cdecl__)) modf(double _X,double *_Y);
  double __attribute__((__cdecl__)) fmod(double _X,double _Y);

  void __attribute__((__cdecl__)) sincos (double __x, double *p_sin, double *p_cos);
  void __attribute__((__cdecl__)) sincosl (long double __x, long double *p_sin, long double *p_cos);
  void __attribute__((__cdecl__)) sincosf (float __x, float *p_sin, float *p_cos);



  int __attribute__((__cdecl__)) abs(int _X);
  long __attribute__((__cdecl__)) labs(long _X);



  double __attribute__((__cdecl__)) atof(const char *_String);
  double __attribute__((__cdecl__)) _atof_l(const char *_String,_locale_t _Locale);
# 260 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  struct _complex {
    double x;
    double y;
  };


  double __attribute__((__cdecl__)) _cabs(struct _complex _ComplexA);
  double __attribute__((__cdecl__)) _hypot(double _X,double _Y);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _j0(double _X);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _j1(double _X);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _jn(int _X,double _Y);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _y0(double _X);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _y1(double _X);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _yn(int _X,double _Y);


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _matherr (struct _exception *);
# 287 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _chgsign (double _X);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _copysign (double _Number,double _Sign);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _logb (double);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _nextafter (double, double);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _scalb (double, long);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _finite (double);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fpclass (double);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isnan (double);






__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) j0 (double) ;
__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) j1 (double) ;
__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) jn (int, double) ;
__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) y0 (double) ;
__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) y1 (double) ;
__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) yn (int, double) ;

__attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) chgsign (double);
# 317 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) finite (double);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) fpclass (double);
# 334 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_SSE2_enable(int _Flag);
# 368 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
typedef long double float_t;
typedef long double double_t;
# 397 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  extern int __attribute__((__cdecl__)) __fpclassifyl (long double);
  extern int __attribute__((__cdecl__)) __fpclassifyf (float);
  extern int __attribute__((__cdecl__)) __fpclassify (double);
# 510 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  extern int __attribute__((__cdecl__)) __isnan (double);
  extern int __attribute__((__cdecl__)) __isnanf (float);
  extern int __attribute__((__cdecl__)) __isnanl (long double);
# 597 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  extern int __attribute__((__cdecl__)) __signbit (double);
  extern int __attribute__((__cdecl__)) __signbitf (float);
  extern int __attribute__((__cdecl__)) __signbitl (long double);
# 654 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  extern float __attribute__((__cdecl__)) sinf(float _X);
  extern long double __attribute__((__cdecl__)) sinl(long double);

  extern float __attribute__((__cdecl__)) cosf(float _X);
  extern long double __attribute__((__cdecl__)) cosl(long double);

  extern float __attribute__((__cdecl__)) tanf(float _X);
  extern long double __attribute__((__cdecl__)) tanl(long double);
  extern float __attribute__((__cdecl__)) asinf(float _X);
  extern long double __attribute__((__cdecl__)) asinl(long double);

  extern float __attribute__((__cdecl__)) acosf (float);
  extern long double __attribute__((__cdecl__)) acosl (long double);

  extern float __attribute__((__cdecl__)) atanf (float);
  extern long double __attribute__((__cdecl__)) atanl (long double);

  extern float __attribute__((__cdecl__)) atan2f (float, float);
  extern long double __attribute__((__cdecl__)) atan2l (long double, long double);


  extern float __attribute__((__cdecl__)) sinhf(float _X);



  extern long double __attribute__((__cdecl__)) sinhl(long double);

  extern float __attribute__((__cdecl__)) coshf(float _X);



  extern long double __attribute__((__cdecl__)) coshl(long double);

  extern float __attribute__((__cdecl__)) tanhf(float _X);



  extern long double __attribute__((__cdecl__)) tanhl(long double);



  extern double __attribute__((__cdecl__)) acosh (double);
  extern float __attribute__((__cdecl__)) acoshf (float);
  extern long double __attribute__((__cdecl__)) acoshl (long double);


  extern double __attribute__((__cdecl__)) asinh (double);
  extern float __attribute__((__cdecl__)) asinhf (float);
  extern long double __attribute__((__cdecl__)) asinhl (long double);


  extern double __attribute__((__cdecl__)) atanh (double);
  extern float __attribute__((__cdecl__)) atanhf (float);
  extern long double __attribute__((__cdecl__)) atanhl (long double);



  extern float __attribute__((__cdecl__)) expf(float _X);



  extern long double __attribute__((__cdecl__)) expl(long double);


  extern double __attribute__((__cdecl__)) exp2(double);
  extern float __attribute__((__cdecl__)) exp2f(float);
  extern long double __attribute__((__cdecl__)) exp2l(long double);



  extern double __attribute__((__cdecl__)) expm1(double);
  extern float __attribute__((__cdecl__)) expm1f(float);
  extern long double __attribute__((__cdecl__)) expm1l(long double);


  extern float frexpf(float _X,int *_Y);



  extern long double __attribute__((__cdecl__)) frexpl(long double,int *);




  extern int __attribute__((__cdecl__)) ilogb (double);
  extern int __attribute__((__cdecl__)) ilogbf (float);
  extern int __attribute__((__cdecl__)) ilogbl (long double);


  extern float __attribute__((__cdecl__)) ldexpf(float _X,int _Y);



  extern long double __attribute__((__cdecl__)) ldexpl (long double, int);


  extern float __attribute__((__cdecl__)) logf (float);
  extern long double __attribute__((__cdecl__)) logl(long double);


  extern float __attribute__((__cdecl__)) log10f (float);
  extern long double __attribute__((__cdecl__)) log10l(long double);


  extern double __attribute__((__cdecl__)) log1p(double);
  extern float __attribute__((__cdecl__)) log1pf(float);
  extern long double __attribute__((__cdecl__)) log1pl(long double);


  extern double __attribute__((__cdecl__)) log2 (double);
  extern float __attribute__((__cdecl__)) log2f (float);
  extern long double __attribute__((__cdecl__)) log2l (long double);


  extern double __attribute__((__cdecl__)) logb (double);
  extern float __attribute__((__cdecl__)) logbf (float);
  extern long double __attribute__((__cdecl__)) logbl (long double);
# 857 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  extern float __attribute__((__cdecl__)) modff (float, float*);
  extern long double __attribute__((__cdecl__)) modfl (long double, long double*);


  extern double __attribute__((__cdecl__)) scalbn (double, int);
  extern float __attribute__((__cdecl__)) scalbnf (float, int);
  extern long double __attribute__((__cdecl__)) scalbnl (long double, int);

  extern double __attribute__((__cdecl__)) scalbln (double, long);
  extern float __attribute__((__cdecl__)) scalblnf (float, long);
  extern long double __attribute__((__cdecl__)) scalblnl (long double, long);



  extern double __attribute__((__cdecl__)) cbrt (double);
  extern float __attribute__((__cdecl__)) cbrtf (float);
  extern long double __attribute__((__cdecl__)) cbrtl (long double);


  extern double __attribute__((__cdecl__)) hypot (double, double) ;
  extern float __attribute__((__cdecl__)) hypotf (float x, float y);



  extern long double __attribute__((__cdecl__)) hypotl (long double, long double);


  extern float __attribute__((__cdecl__)) powf(float _X,float _Y);



  extern long double __attribute__((__cdecl__)) powl (long double, long double);


  extern float __attribute__((__cdecl__)) sqrtf (float);
  extern long double sqrtl(long double);


  extern double __attribute__((__cdecl__)) erf (double);
  extern float __attribute__((__cdecl__)) erff (float);
  extern long double __attribute__((__cdecl__)) erfl (long double);


  extern double __attribute__((__cdecl__)) erfc (double);
  extern float __attribute__((__cdecl__)) erfcf (float);
  extern long double __attribute__((__cdecl__)) erfcl (long double);


  extern double __attribute__((__cdecl__)) lgamma (double);
  extern float __attribute__((__cdecl__)) lgammaf (float);
  extern long double __attribute__((__cdecl__)) lgammal (long double);

  extern int signgam;


  extern double __attribute__((__cdecl__)) tgamma (double);
  extern float __attribute__((__cdecl__)) tgammaf (float);
  extern long double __attribute__((__cdecl__)) tgammal (long double);


  extern float __attribute__((__cdecl__)) ceilf (float);
  extern long double __attribute__((__cdecl__)) ceill (long double);


  extern float __attribute__((__cdecl__)) floorf (float);
  extern long double __attribute__((__cdecl__)) floorl (long double);


  extern double __attribute__((__cdecl__)) nearbyint ( double);
  extern float __attribute__((__cdecl__)) nearbyintf (float);
  extern long double __attribute__((__cdecl__)) nearbyintl (long double);



extern double __attribute__((__cdecl__)) rint (double);
extern float __attribute__((__cdecl__)) rintf (float);
extern long double __attribute__((__cdecl__)) rintl (long double);


extern long __attribute__((__cdecl__)) lrint (double);
extern long __attribute__((__cdecl__)) lrintf (float);
extern long __attribute__((__cdecl__)) lrintl (long double);

__extension__ long long __attribute__((__cdecl__)) llrint (double);
__extension__ long long __attribute__((__cdecl__)) llrintf (float);
__extension__ long long __attribute__((__cdecl__)) llrintl (long double);
# 1024 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  extern double __attribute__((__cdecl__)) round (double);
  extern float __attribute__((__cdecl__)) roundf (float);
  extern long double __attribute__((__cdecl__)) roundl (long double);


  extern long __attribute__((__cdecl__)) lround (double);
  extern long __attribute__((__cdecl__)) lroundf (float);
  extern long __attribute__((__cdecl__)) lroundl (long double);
  __extension__ long long __attribute__((__cdecl__)) llround (double);
  __extension__ long long __attribute__((__cdecl__)) llroundf (float);
  __extension__ long long __attribute__((__cdecl__)) llroundl (long double);



  extern double __attribute__((__cdecl__)) trunc (double);
  extern float __attribute__((__cdecl__)) truncf (float);
  extern long double __attribute__((__cdecl__)) truncl (long double);


  extern float __attribute__((__cdecl__)) fmodf (float, float);
  extern long double __attribute__((__cdecl__)) fmodl (long double, long double);


  extern double __attribute__((__cdecl__)) remainder (double, double);
  extern float __attribute__((__cdecl__)) remainderf (float, float);
  extern long double __attribute__((__cdecl__)) remainderl (long double, long double);


  extern double __attribute__((__cdecl__)) remquo(double, double, int *);
  extern float __attribute__((__cdecl__)) remquof(float, float, int *);
  extern long double __attribute__((__cdecl__)) remquol(long double, long double, int *);


  extern double __attribute__((__cdecl__)) copysign (double, double);
  extern float __attribute__((__cdecl__)) copysignf (float, float);
  extern long double __attribute__((__cdecl__)) copysignl (long double, long double);
# 1081 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  extern double __attribute__((__cdecl__)) nan(const char *tagp);
  extern float __attribute__((__cdecl__)) nanf(const char *tagp);
  extern long double __attribute__((__cdecl__)) nanl(const char *tagp);
# 1092 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  extern double __attribute__((__cdecl__)) nextafter (double, double);
  extern float __attribute__((__cdecl__)) nextafterf (float, float);
  extern long double __attribute__((__cdecl__)) nextafterl (long double, long double);


  extern double __attribute__((__cdecl__)) nexttoward (double, long double);
  extern float __attribute__((__cdecl__)) nexttowardf (float, long double);
  extern long double __attribute__((__cdecl__)) nexttowardl (long double, long double);



  extern double __attribute__((__cdecl__)) fdim (double x, double y);
  extern float __attribute__((__cdecl__)) fdimf (float x, float y);
  extern long double __attribute__((__cdecl__)) fdiml (long double x, long double y);







  extern double __attribute__((__cdecl__)) fmax (double, double);
  extern float __attribute__((__cdecl__)) fmaxf (float, float);
  extern long double __attribute__((__cdecl__)) fmaxl (long double, long double);


  extern double __attribute__((__cdecl__)) fmin (double, double);
  extern float __attribute__((__cdecl__)) fminf (float, float);
  extern long double __attribute__((__cdecl__)) fminl (long double, long double);



  extern double __attribute__((__cdecl__)) fma (double, double, double);
  extern float __attribute__((__cdecl__)) fmaf (float, float, float);
  extern long double __attribute__((__cdecl__)) fmal (long double, long double, long double);
# 1171 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
  __attribute__ ((__dllimport__)) float __attribute__((__cdecl__)) _hypotf(float _X,float _Y);



   __attribute__ ((__dllimport__)) float __attribute__((__cdecl__)) _copysignf (float _Number,float _Sign);
   __attribute__ ((__dllimport__)) float __attribute__((__cdecl__)) _chgsignf (float _X);
   __attribute__ ((__dllimport__)) float __attribute__((__cdecl__)) _logbf(float _X);
   __attribute__ ((__dllimport__)) float __attribute__((__cdecl__)) _nextafterf(float _X,float _Y);
   __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _finitef(float _X);
   __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _isnanf(float _X);
   __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fpclassf(float _X);



   extern long double __attribute__((__cdecl__)) _chgsignl (long double);
# 1575 "C:/msys32/mingw32/i686-w64-mingw32/include/math.h" 3
#pragma pack(pop)
# 106 "./../include/sys-defines.h" 2

# 1 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include/float.h" 1 3 4
# 543 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include/float.h" 3 4
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/float.h" 1 3 4
# 260 "C:/msys32/mingw32/i686-w64-mingw32/include/float.h" 3 4
__attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _controlfp (unsigned int unNew, unsigned int unMask) ;
__attribute__((dllimport)) errno_t __attribute__((__cdecl__)) _controlfp_s(unsigned int *_CurrentState, unsigned int _NewValue, unsigned int _Mask);
__attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _control87 (unsigned int unNew, unsigned int unMask);


__attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _clearfp (void);
__attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _statusfp (void);
# 280 "C:/msys32/mingw32/i686-w64-mingw32/include/float.h" 3 4
void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _fpreset (void);
void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) fpreset (void);


__attribute__ ((__dllimport__)) int * __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) __fpecode(void);
# 544 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include/float.h" 2 3 4
# 108 "./../include/sys-defines.h" 2


# 1 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include-fixed/limits.h" 1 3 4
# 34 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include-fixed/limits.h" 3 4
# 1 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include-fixed/syslimits.h" 1 3 4






# 1 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include-fixed/limits.h" 1 3 4
# 195 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include-fixed/limits.h" 3 4
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/limits.h" 1 3 4
# 196 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include-fixed/limits.h" 2 3 4
# 8 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include-fixed/syslimits.h" 2 3 4
# 35 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include-fixed/limits.h" 2 3 4
# 111 "./../include/sys-defines.h" 2
# 180 "./../include/sys-defines.h"
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 1 3
# 10 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt_wstdlib.h" 1 3
# 15 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt_wstdlib.h" 3
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _itow_s (int _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ltow_s (long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ultow_s (unsigned long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wgetenv_s(size_t *_ReturnSize,wchar_t *_DstBuf,size_t _DstSizeInWords,const wchar_t *_VarName);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wdupenv_s(wchar_t **_Buffer,size_t *_BufferSizeInWords,const wchar_t *_VarName);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _i64tow_s(long long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ui64tow_s(unsigned long long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wmakepath_s(wchar_t *_PathResult,size_t _SizeInWords,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wputenv_s(const wchar_t *_Name,const wchar_t *_Value);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wsearchenv_s(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath,size_t _SizeInWords);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wsplitpath_s(const wchar_t *_FullPath,wchar_t *_Drive,size_t _DriveSizeInWords,wchar_t *_Dir,size_t _DirSizeInWords,wchar_t *_Filename,size_t _FilenameSizeInWords,wchar_t *_Ext,size_t _ExtSizeInWords);
 
# 11 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 2 3
# 1 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include-fixed/limits.h" 1 3 4
# 12 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 2 3
# 26 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 3
#pragma pack(push,_CRT_PACKING)
# 50 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  typedef int (__attribute__((__cdecl__)) *_onexit_t)(void);
# 60 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  typedef struct _div_t {
    int quot;
    int rem;
  } div_t;

  typedef struct _ldiv_t {
    long quot;
    long rem;
  } ldiv_t;





#pragma pack(4)
  typedef struct {
    unsigned char ld[10];
  } _LDOUBLE;
#pragma pack()



  typedef struct {
    double x;
  } _CRT_DOUBLE;

  typedef struct {
    float f;
  } _CRT_FLOAT;

       


  typedef struct {
    long double x;
  } _LONGDOUBLE;

       

#pragma pack(4)
  typedef struct {
    unsigned char ld12[12];
  } _LDBL12;
#pragma pack()
# 143 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  typedef void (__attribute__((__cdecl__)) *_purecall_handler)(void);

  __attribute__ ((__dllimport__)) _purecall_handler __attribute__((__cdecl__)) _set_purecall_handler(_purecall_handler _Handler);
  __attribute__ ((__dllimport__)) _purecall_handler __attribute__((__cdecl__)) _get_purecall_handler(void);

  typedef void (__attribute__((__cdecl__)) *_invalid_parameter_handler)(const wchar_t *,const wchar_t *,const wchar_t *,unsigned int,uintptr_t);
  __attribute__ ((__dllimport__)) _invalid_parameter_handler __attribute__((__cdecl__)) _set_invalid_parameter_handler(_invalid_parameter_handler _Handler);
  __attribute__ ((__dllimport__)) _invalid_parameter_handler __attribute__((__cdecl__)) _get_invalid_parameter_handler(void);
# 159 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  __attribute__ ((__dllimport__)) unsigned long *__attribute__((__cdecl__)) __doserrno(void);

  errno_t __attribute__((__cdecl__)) _set_doserrno(unsigned long _Value);
  errno_t __attribute__((__cdecl__)) _get_doserrno(unsigned long *_Value);
# 173 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  extern __attribute__((dllimport)) char *_sys_errlist[1];
  extern __attribute__((dllimport)) int _sys_nerr;





  __attribute__ ((__dllimport__)) char ***__attribute__((__cdecl__)) __p___argv(void);
  __attribute__ ((__dllimport__)) int *__attribute__((__cdecl__)) __p__fmode(void);

  __attribute__ ((__dllimport__)) int *__attribute__((__cdecl__)) __p___argc(void);
  __attribute__ ((__dllimport__)) wchar_t ***__attribute__((__cdecl__)) __p___wargv(void);
  __attribute__ ((__dllimport__)) char ***__attribute__((__cdecl__)) __p__environ(void);
  __attribute__ ((__dllimport__)) wchar_t ***__attribute__((__cdecl__)) __p__wenviron(void);
  __attribute__ ((__dllimport__)) char **__attribute__((__cdecl__)) __p__pgmptr(void);
  __attribute__ ((__dllimport__)) wchar_t **__attribute__((__cdecl__)) __p__wpgmptr(void);


  errno_t __attribute__((__cdecl__)) _get_pgmptr(char **_Value);
  errno_t __attribute__((__cdecl__)) _get_wpgmptr(wchar_t **_Value);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _set_fmode(int _Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_fmode(int *_PMode);
# 282 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  extern int * _imp____argc;



  extern char *** _imp____argv;



  extern wchar_t *** _imp____wargv;
# 322 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  extern char *** _imp___environ;




  extern wchar_t *** _imp___wenviron;






  extern char ** _imp___pgmptr;




  extern wchar_t ** _imp___wpgmptr;




  extern unsigned int * _imp___osplatform;




  extern unsigned int * _imp___osver;




  extern unsigned int * _imp___winver;




  extern unsigned int * _imp___winmajor;




  extern unsigned int * _imp___winminor;





  errno_t __attribute__((__cdecl__)) _get_osplatform(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_osver(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_winver(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_winmajor(unsigned int *_Value);
  errno_t __attribute__((__cdecl__)) _get_winminor(unsigned int *_Value);
# 388 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) exit(int _Code) __attribute__ ((__noreturn__));
  void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _exit(int _Code) __attribute__ ((__noreturn__));



  void __attribute__((__cdecl__)) _Exit(int) __attribute__ ((__noreturn__));






       

  void __attribute__((__cdecl__)) __attribute__ ((__noreturn__)) abort(void);
       



  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _set_abort_behavior(unsigned int _Flags,unsigned int _Mask);







  __extension__ long long __attribute__((__cdecl__)) _abs64(long long);

  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) long long __attribute__((__cdecl__)) _abs64(long long x) {
    return __builtin_llabs(x);
  }


  int __attribute__((__cdecl__)) atexit(void (__attribute__((__cdecl__)) *)(void));





  int __attribute__((__cdecl__)) atoi(const char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoi_l(const char *_Str,_locale_t _Locale);
  long __attribute__((__cdecl__)) atol(const char *_Str);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _atol_l(const char *_Str,_locale_t _Locale);


  void *__attribute__((__cdecl__)) bsearch(const void *_Key,const void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__attribute__((__cdecl__)) *_PtFuncCompare)(const void *,const void *));
  void __attribute__((__cdecl__)) qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__attribute__((__cdecl__)) *_PtFuncCompare)(const void *,const void *));

  unsigned short __attribute__((__cdecl__)) _byteswap_ushort(unsigned short _Short);
  unsigned long __attribute__((__cdecl__)) _byteswap_ulong (unsigned long _Long);
  __extension__ unsigned long long __attribute__((__cdecl__)) _byteswap_uint64(unsigned long long _Int64);
  div_t __attribute__((__cdecl__)) div(int _Numerator,int _Denominator);
  char *__attribute__((__cdecl__)) getenv(const char *_VarName) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _itoa(int _Value,char *_Dest,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _i64toa(long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ui64toa(unsigned long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _atoi64(const char *_String);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _atoi64_l(const char *_String,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _strtoi64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _strtoi64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __attribute__((__cdecl__)) _strtoui64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __attribute__((__cdecl__)) _strtoui64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  ldiv_t __attribute__((__cdecl__)) ldiv(long _Numerator,long _Denominator);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ltoa(long _Value,char *_Dest,int _Radix) ;
  int __attribute__((__cdecl__)) mblen(const char *_Ch,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _mblen_l(const char *_Ch,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrlen(const char *_Str);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrlen_l(const char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrnlen(const char *_Str,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstrnlen_l(const char *_Str,size_t _MaxCount,_locale_t _Locale);
  int __attribute__((__cdecl__)) mbtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _mbtowc_l(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
  size_t __attribute__((__cdecl__)) mbstowcs(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _mbstowcs_l(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale);
  int __attribute__((__cdecl__)) mkstemp(char *template_name);
  int __attribute__((__cdecl__)) rand(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_error_mode(int _Mode);
  void __attribute__((__cdecl__)) srand(unsigned int _Seed);
# 477 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 3
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtod(const char * __restrict__ _Str,char ** __restrict__ _EndPtr)
{
  double __attribute__((__cdecl__)) __mingw_strtod (const char * __restrict__, char ** __restrict__);
  return __mingw_strtod( _Str, _EndPtr);
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
float __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtof(const char * __restrict__ _Str,char ** __restrict__ _EndPtr)
{
  float __attribute__((__cdecl__)) __mingw_strtof (const char * __restrict__, char ** __restrict__);
  return __mingw_strtof( _Str, _EndPtr);
}






  long double __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) strtold(const char * __restrict__ , char ** __restrict__ );


  extern double __attribute__((__cdecl__)) __attribute__ ((__nothrow__))
  __strtod (const char * __restrict__ , char ** __restrict__);







  float __attribute__((__cdecl__)) __mingw_strtof (const char * __restrict__, char ** __restrict__);
  double __attribute__((__cdecl__)) __mingw_strtod (const char * __restrict__, char ** __restrict__);
  long double __attribute__((__cdecl__)) __mingw_strtold(const char * __restrict__, char ** __restrict__);

  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _strtod_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,_locale_t _Locale);
  long __attribute__((__cdecl__)) strtol(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _strtol_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __attribute__((__cdecl__)) strtoul(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _strtoul_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);


  int __attribute__((__cdecl__)) system(const char *_Command);

  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ultoa(unsigned long _Value,char *_Dest,int _Radix) ;
  int __attribute__((__cdecl__)) wctomb(char *_MbCh,wchar_t _WCh) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale) ;
  size_t __attribute__((__cdecl__)) wcstombs(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _wcstombs_l(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale) ;



  void *__attribute__((__cdecl__)) calloc(size_t _NumOfElements,size_t _SizeOfElements);
  void __attribute__((__cdecl__)) free(void *_Memory);
  void *__attribute__((__cdecl__)) malloc(size_t _Size);
  void *__attribute__((__cdecl__)) realloc(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _recalloc(void *_Memory,size_t _Count,size_t _Size);


       
       


  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _aligned_free(void *_Memory);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_malloc(size_t _Size,size_t _Alignment);
       
       

  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_realloc(void *_Memory,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_offset_realloc(void *_Memory,size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _aligned_offset_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment,size_t _Offset);





  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _itow(int _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _ltow(long _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) ;

  double __attribute__((__cdecl__)) __mingw_wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  float __attribute__((__cdecl__)) __mingw_wcstof(const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);
  long double __attribute__((__cdecl__)) __mingw_wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);


  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  double __attribute__((__cdecl__)) wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr){
    return __mingw_wcstod(_Str,_EndPtr);
  }
  static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
  float __attribute__((__cdecl__)) wcstof(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr){
    return __mingw_wcstof(_Str,_EndPtr);
  }






  long double __attribute__((__cdecl__)) wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);

  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  long __attribute__((__cdecl__)) wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __attribute__((__cdecl__)) wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wgetenv(const wchar_t *_VarName) ;


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wsystem(const wchar_t *_Command);

  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _wtof(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wtoi(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wtol(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) long __attribute__((__cdecl__)) _wtol_l(const wchar_t *_Str,_locale_t _Locale);

  __extension__ __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _i64tow(long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _ui64tow(unsigned long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _wtoi64(const wchar_t *_Str);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __attribute__((__cdecl__)) _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long __attribute__((__cdecl__)) _wcstoui64_l(const wchar_t *_Str ,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putenv(const char *_EnvString);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wputenv(const wchar_t *_EnvString);



  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _fullpath(char *_FullPath,const char *_Path,size_t _SizeInBytes);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atodbl(_CRT_DOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoldbl(_LDOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoflt(_CRT_FLOAT *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atodbl_l(_CRT_DOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);
# 637 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 3
unsigned long __attribute__((__cdecl__)) _lrotl(unsigned long,int);
unsigned long __attribute__((__cdecl__)) _lrotr(unsigned long,int);





  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _makepath(char *_Path,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  _onexit_t __attribute__((__cdecl__)) _onexit(_onexit_t _Func);





       
       


  __extension__ unsigned long long __attribute__((__cdecl__)) _rotl64(unsigned long long _Val,int _Shift);
  __extension__ unsigned long long __attribute__((__cdecl__)) _rotr64(unsigned long long Value,int Shift);
       
       
       
       


  unsigned int __attribute__((__cdecl__)) _rotr(unsigned int _Val,int _Shift);
  unsigned int __attribute__((__cdecl__)) _rotl(unsigned int _Val,int _Shift);
       
       
  __extension__ unsigned long long __attribute__((__cdecl__)) _rotr64(unsigned long long _Val,int _Shift);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _searchenv(const char *_Filename,const char *_EnvVar,char *_ResultPath) ;
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _splitpath(const char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext) ;
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _swab(char *_Buf1,char *_Buf2,int _SizeInBytes);



  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);




  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) ;
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) ;


  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _beep(unsigned _Frequency,unsigned _Duration) __attribute__ ((__deprecated__));

  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _seterrormode(int _Mode) __attribute__ ((__deprecated__));
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _sleep(unsigned long _Duration) __attribute__ ((__deprecated__));
# 708 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 3
  char *__attribute__((__cdecl__)) ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  char *__attribute__((__cdecl__)) fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  char *__attribute__((__cdecl__)) gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  char *__attribute__((__cdecl__)) itoa(int _Val,char *_DstBuf,int _Radix) ;
  char *__attribute__((__cdecl__)) ltoa(long _Val,char *_DstBuf,int _Radix) ;
  int __attribute__((__cdecl__)) putenv(const char *_EnvString) ;



  void __attribute__((__cdecl__)) swab(char *_Buf1,char *_Buf2,int _SizeInBytes) ;


  char *__attribute__((__cdecl__)) ultoa(unsigned long _Val,char *_Dstbuf,int _Radix) ;
  _onexit_t __attribute__((__cdecl__)) onexit(_onexit_t _Func);





  typedef struct { __extension__ long long quot, rem; } lldiv_t;

  __extension__ lldiv_t __attribute__((__cdecl__)) lldiv(long long, long long);

  __extension__ long long __attribute__((__cdecl__)) llabs(long long);




  __extension__ long long __attribute__((__cdecl__)) strtoll(const char * __restrict__, char ** __restrict, int);
  __extension__ unsigned long long __attribute__((__cdecl__)) strtoull(const char * __restrict__, char ** __restrict__, int);


  __extension__ long long __attribute__((__cdecl__)) atoll (const char *);


  __extension__ long long __attribute__((__cdecl__)) wtoll (const wchar_t *);
  __extension__ char *__attribute__((__cdecl__)) lltoa (long long, char *, int);
  __extension__ char *__attribute__((__cdecl__)) ulltoa (unsigned long long , char *, int);
  __extension__ wchar_t *__attribute__((__cdecl__)) lltow (long long, wchar_t *, int);
  __extension__ wchar_t *__attribute__((__cdecl__)) ulltow (unsigned long long, wchar_t *, int);
# 766 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 3
#pragma pack(pop)

# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/stdlib_s.h" 1 3
# 9 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/stdlib_s.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 1 3
# 10 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/stdlib_s.h" 2 3





  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _dupenv_s(char **_PBuffer,size_t *_PBufferSizeInBytes,const char *_VarName);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _i64toa_s(long long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ui64toa_s(unsigned long long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ltoa_s(long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) mbstowcs_s(size_t *_PtNumOfCharConverted,wchar_t *_DstBuf,size_t _SizeInWords,const char *_SrcBuf,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _mbstowcs_s_l(size_t *_PtNumOfCharConverted,wchar_t *_DstBuf,size_t _SizeInWords,const char *_SrcBuf,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ultoa_s(unsigned long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcstombs_s(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,const wchar_t *_Src,size_t _MaxCountInBytes);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcstombs_s_l(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,const wchar_t *_Src,size_t _MaxCountInBytes,_locale_t _Locale);


  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ecvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDights,int *_PtDec,int *_PtSign);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _fcvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDec,int *_PtDec,int *_PtSign);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _gcvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDigits);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _makepath_s(char *_PathResult,size_t _Size,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _putenv_s(const char *_Name,const char *_Value);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _searchenv_s(const char *_Filename,const char *_EnvVar,char *_ResultPath,size_t _SizeInBytes);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _splitpath_s(const char *_FullPath,char *_Drive,size_t _DriveSize,char *_Dir,size_t _DirSize,char *_Filename,size_t _FilenameSize,char *_Ext,size_t _ExtSize);
 



  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) qsort_s(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__attribute__((__cdecl__)) *_PtFuncCompare)(void *,const void *,const void *),void *_Context);
# 769 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 2 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/malloc.h" 1 3
# 11 "C:/msys32/mingw32/i686-w64-mingw32/include/malloc.h" 3
#pragma pack(push,_CRT_PACKING)
# 46 "C:/msys32/mingw32/i686-w64-mingw32/include/malloc.h" 3
  typedef struct _heapinfo {
    int *_pentry;
    size_t _size;
    int _useflag;
  } _HEAPINFO;


  extern unsigned int _amblksiz;
# 65 "C:/msys32/mingw32/i686-w64-mingw32/include/malloc.h" 3
       
       
# 97 "C:/msys32/mingw32/i686-w64-mingw32/include/malloc.h" 3
       
       




void * __mingw_aligned_malloc (size_t _Size, size_t _Alignment);
void __mingw_aligned_free (void *_Memory);
void * __mingw_aligned_offset_realloc (void *_Memory, size_t _Size, size_t _Alignment, size_t _Offset);
void * __mingw_aligned_realloc (void *_Memory, size_t _Size, size_t _Offset);




  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _resetstkoflw (void);

  __attribute__ ((__dllimport__)) unsigned long __attribute__((__cdecl__)) _set_malloc_crt_max_wait(unsigned long _NewValue);

  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _expand(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _msize(void *_Memory);






  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _get_sbh_threshold(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_sbh_threshold(size_t _NewValue);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _set_amblksiz(size_t _Value);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_amblksiz(size_t *_Value);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapadd(void *_Memory,size_t _Size);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapchk(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapmin(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapset(unsigned int _Fill);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _heapwalk(_HEAPINFO *_EntryInfo);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _heapused(size_t *_Used,size_t *_Commit);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _get_heap_handle(void);
# 146 "C:/msys32/mingw32/i686-w64-mingw32/include/malloc.h" 3
  static __inline void *_MarkAllocaS(void *_Ptr,unsigned int _Marker) {
    if(_Ptr) {
      *((unsigned int*)_Ptr) = _Marker;
      _Ptr = (char*)_Ptr + 8;
    }
    return _Ptr;
  }
# 165 "C:/msys32/mingw32/i686-w64-mingw32/include/malloc.h" 3
  static __inline void __attribute__((__cdecl__)) _freea(void *_Memory) {
    unsigned int _Marker;
    if(_Memory) {
      _Memory = (char*)_Memory - 8;
      _Marker = *(unsigned int *)_Memory;
      if(_Marker==0xDDDD) {
 free(_Memory);
      }





    }
  }
# 211 "C:/msys32/mingw32/i686-w64-mingw32/include/malloc.h" 3
#pragma pack(pop)
# 770 "C:/msys32/mingw32/i686-w64-mingw32/include/stdlib.h" 2 3
# 181 "./../include/sys-defines.h" 2
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/string.h" 1 3
# 45 "C:/msys32/mingw32/i686-w64-mingw32/include/string.h" 3
  __attribute__ ((__dllimport__)) void *__attribute__((__cdecl__)) _memccpy(void *_Dst,const void *_Src,int _Val,size_t _MaxCount);
  void *__attribute__((__cdecl__)) memchr(const void *_Buf ,int _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _memicmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _memicmp_l(const void *_Buf1,const void *_Buf2,size_t _Size,_locale_t _Locale);
  int __attribute__((__cdecl__)) memcmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  void * __attribute__((__cdecl__)) memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _Size) ;
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) memcpy_s (void *_dest,size_t _numberOfElements,const void *_src,size_t _count);
  void * __attribute__((__cdecl__)) mempcpy (void *_Dst, const void *_Src, size_t _Size);
  void * __attribute__((__cdecl__)) memset(void *_Dst,int _Val,size_t _Size);

  void * __attribute__((__cdecl__)) memccpy(void *_Dst,const void *_Src,int _Val,size_t _Size) ;
  int __attribute__((__cdecl__)) memicmp(const void *_Buf1,const void *_Buf2,size_t _Size) ;


  char * __attribute__((__cdecl__)) _strset(char *_Str,int _Val) ;
  char * __attribute__((__cdecl__)) _strset_l(char *_Str,int _Val,_locale_t _Locale) ;
  char * __attribute__((__cdecl__)) strcpy(char * __restrict__ _Dest,const char * __restrict__ _Source);
  char * __attribute__((__cdecl__)) strcat(char * __restrict__ _Dest,const char * __restrict__ _Source);
  int __attribute__((__cdecl__)) strcmp(const char *_Str1,const char *_Str2);
  size_t __attribute__((__cdecl__)) strlen(const char *_Str);
  size_t __attribute__((__cdecl__)) strnlen(const char *_Str,size_t _MaxCount);
  void *__attribute__((__cdecl__)) memmove(void *_Dst,const void *_Src,size_t _Size) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strdup(const char *_Src);
  char *__attribute__((__cdecl__)) strchr(const char *_Str,int _Val);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _stricmp(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strcmpi(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _stricmp_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  int __attribute__((__cdecl__)) strcoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strcoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _stricoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _stricoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strncoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strncoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strnicoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strnicoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  size_t __attribute__((__cdecl__)) strcspn(const char *_Str,const char *_Control);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strerror(const char *_ErrMsg) ;
  char *__attribute__((__cdecl__)) strerror(int) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strlwr(char *_String) ;
  char *strlwr_l(char *_String,_locale_t _Locale) ;
  char *__attribute__((__cdecl__)) strncat(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  int __attribute__((__cdecl__)) strncmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strnicmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _strnicmp_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  char *strncpy(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strnset(char *_Str,int _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strnset_l(char *str,int c,size_t count,_locale_t _Locale) ;
  char *__attribute__((__cdecl__)) strpbrk(const char *_Str,const char *_Control);
  char *__attribute__((__cdecl__)) strrchr(const char *_Str,int _Ch);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strrev(char *_Str);
  size_t __attribute__((__cdecl__)) strspn(const char *_Str,const char *_Control);
  char *__attribute__((__cdecl__)) strstr(const char *_Str,const char *_SubStr);
  char *__attribute__((__cdecl__)) strtok(char * __restrict__ _Str,const char * __restrict__ _Delim) ;
       

  char *strtok_r(char * __restrict__ _Str, const char * __restrict__ _Delim, char ** __restrict__ __last);
       
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strupr(char *_String) ;
  __attribute__ ((__dllimport__)) char *_strupr_l(char *_String,_locale_t _Locale) ;
  size_t __attribute__((__cdecl__)) strxfrm(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _strxfrm_l(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);


  char *__attribute__((__cdecl__)) strdup(const char *_Src) ;
  int __attribute__((__cdecl__)) strcmpi(const char *_Str1,const char *_Str2) ;
  int __attribute__((__cdecl__)) stricmp(const char *_Str1,const char *_Str2) ;
  char *__attribute__((__cdecl__)) strlwr(char *_Str) ;
  int __attribute__((__cdecl__)) strnicmp(const char *_Str1,const char *_Str,size_t _MaxCount) ;
  int __attribute__((__cdecl__)) strncasecmp (const char *, const char *, size_t);
  int __attribute__((__cdecl__)) strcasecmp (const char *, const char *);







  char *__attribute__((__cdecl__)) strnset(char *_Str,int _Val,size_t _MaxCount) ;
  char *__attribute__((__cdecl__)) strrev(char *_Str) ;
  char *__attribute__((__cdecl__)) strset(char *_Str,int _Val) ;
  char *__attribute__((__cdecl__)) strupr(char *_Str) ;





  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsdup(const wchar_t *_Str);
  wchar_t *__attribute__((__cdecl__)) wcscat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  wchar_t *__attribute__((__cdecl__)) wcschr(const wchar_t *_Str,wchar_t _Ch);
  int __attribute__((__cdecl__)) wcscmp(const wchar_t *_Str1,const wchar_t *_Str2);
  wchar_t *__attribute__((__cdecl__)) wcscpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  size_t __attribute__((__cdecl__)) wcscspn(const wchar_t *_Str,const wchar_t *_Control);
  size_t __attribute__((__cdecl__)) wcslen(const wchar_t *_Str);
  size_t __attribute__((__cdecl__)) wcsnlen(const wchar_t *_Src,size_t _MaxCount);
  wchar_t *wcsncat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  int __attribute__((__cdecl__)) wcsncmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  wchar_t *wcsncpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  wchar_t *__attribute__((__cdecl__)) _wcsncpy_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count,_locale_t _Locale) ;
  wchar_t *__attribute__((__cdecl__)) wcspbrk(const wchar_t *_Str,const wchar_t *_Control);
  wchar_t *__attribute__((__cdecl__)) wcsrchr(const wchar_t *_Str,wchar_t _Ch);
  size_t __attribute__((__cdecl__)) wcsspn(const wchar_t *_Str,const wchar_t *_Control);
  wchar_t *__attribute__((__cdecl__)) wcsstr(const wchar_t *_Str,const wchar_t *_SubStr);
  wchar_t *__attribute__((__cdecl__)) wcstok(wchar_t * __restrict__ _Str,const wchar_t * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcserror(int _ErrNum) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) __wcserror(const wchar_t *_Str) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsrev(wchar_t *_Str);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsset(wchar_t *_Str,wchar_t _Val) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcslwr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcslwr_l(wchar_t *_String,_locale_t _Locale) ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcsupr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcsupr_l(wchar_t *_String,_locale_t _Locale) ;
  size_t __attribute__((__cdecl__)) wcsxfrm(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _wcsxfrm_l(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
  int __attribute__((__cdecl__)) wcscoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcscoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsncoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsncoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wcsnicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);


  wchar_t *__attribute__((__cdecl__)) wcsdup(const wchar_t *_Str) ;

  int __attribute__((__cdecl__)) wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2) ;
  int __attribute__((__cdecl__)) wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount) ;
  wchar_t *__attribute__((__cdecl__)) wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  wchar_t *__attribute__((__cdecl__)) wcsrev(wchar_t *_Str) ;
  wchar_t *__attribute__((__cdecl__)) wcsset(wchar_t *_Str,wchar_t _Val) ;
  wchar_t *__attribute__((__cdecl__)) wcslwr(wchar_t *_Str) ;
  wchar_t *__attribute__((__cdecl__)) wcsupr(wchar_t *_Str) ;
  int __attribute__((__cdecl__)) wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2) ;







# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/string_s.h" 1 3
# 9 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/string_s.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/string.h" 1 3
# 10 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/string_s.h" 2 3
# 24 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/string_s.h" 3
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strset_s(char *_Dst,size_t _DstSize,int _Value);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strerror_s(char *_Buf,size_t _SizeInBytes,const char *_ErrMsg);
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) strerror_s(char *_Buf,size_t _SizeInBytes,int _ErrNum);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strlwr_s(char *_Str,size_t _Size);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strlwr_s_l(char *_Str,size_t _Size,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strnset_s(char *_Str,size_t _Size,int _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strupr_s(char *_Str,size_t _Size);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strupr_s_l(char *_Str,size_t _Size,_locale_t _Locale);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) strncat_s(char *_Dst,size_t _DstSizeInChars,const char *_Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strncat_s_l(char *_Dst,size_t _DstSizeInChars,const char *_Src,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) strcpy_s(char *_Dst, rsize_t _SizeInBytes, const char *_Src);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) strncpy_s(char *_Dst, size_t _DstSizeInChars, const char *_Src, size_t _MaxCount);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _strncpy_s_l(char *_Dst, size_t _DstSizeInChars, const char *_Src, size_t _MaxCount, _locale_t _Locale);
  ;
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) strtok_s(char *_Str,const char *_Delim,char **_Context);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strtok_s_l(char *_Str,const char *_Delim,char **_Context,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) strcat_s(char *_Dst, rsize_t _SizeInBytes, const char * _Src);
 

  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) memmove_s(void *_dest,size_t _numberOfElements,const void *_src,size_t _count);


  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) wcstok_s(wchar_t *_Str,const wchar_t *_Delim,wchar_t **_Context);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcserror_s(wchar_t *_Buf,size_t _SizeInWords,int _ErrNum);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) __wcserror_s(wchar_t *_Buffer,size_t _SizeInWords,const wchar_t *_ErrMsg);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsnset_s(wchar_t *_Dst,size_t _DstSizeInWords,wchar_t _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsset_s(wchar_t *_Str,size_t _SizeInWords,wchar_t _Val);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcslwr_s(wchar_t *_Str,size_t _SizeInWords);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcslwr_s_l(wchar_t *_Str,size_t _SizeInWords,_locale_t _Locale);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsupr_s(wchar_t *_Str,size_t _Size);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsupr_s_l(wchar_t *_Str,size_t _Size,_locale_t _Locale);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcscpy_s(wchar_t *_Dst, rsize_t _SizeInWords, const wchar_t *_Src);
 
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcscat_s(wchar_t * _Dst, rsize_t _SizeInWords, const wchar_t *_Src);
 

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcsncat_s(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsncat_s_l(wchar_t *_Dst,size_t _DstSizeInChars,const wchar_t *_Src,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) wcsncpy_s(wchar_t *_Dst, size_t _DstSizeInChars, const wchar_t *_Src, size_t _MaxCount);
  ;
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsncpy_s_l(wchar_t *_Dst, size_t _DstSizeInChars, const wchar_t *_Src, size_t _MaxCount, _locale_t _Locale);
  ;
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wcstok_s_l(wchar_t *_Str,const wchar_t *_Delim,wchar_t **_Context,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsset_s_l(wchar_t *_Str,size_t _SizeInChars,unsigned int _Val,_locale_t _Locale);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wcsnset_s_l(wchar_t *_Str,size_t _SizeInChars,unsigned int _Val, size_t _Count,_locale_t _Locale);

  extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) size_t __attribute__((__cdecl__)) wcsnlen_s(const wchar_t * _src, size_t _count) {
    return _src ? wcsnlen(_src, _count) : 0;
  }
# 191 "C:/msys32/mingw32/i686-w64-mingw32/include/string.h" 2 3
# 182 "./../include/sys-defines.h" 2
# 258 "./../include/sys-defines.h"

# 258 "./../include/sys-defines.h"
typedef enum { false = 0, true = 1 } bool;
# 33 "y_openpl.c" 2
# 1 "extern.h" 1
# 63 "extern.h"
# 1 "./../include/plotter.h" 1
# 61 "./../include/plotter.h"
extern const char pl_libplot_ver[8];






# 1 "C:/msys32/usr/X11R6/include/X11/Xlib.h" 1
# 52 "C:/msys32/usr/X11R6/include/X11/Xlib.h"
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/types.h" 1 3
# 43 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/types.h" 3

# 43 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/types.h" 3
typedef unsigned short _ino_t;

typedef unsigned short ino_t;





typedef unsigned int _dev_t;

typedef unsigned int dev_t;






typedef int _pid_t;







typedef _pid_t pid_t;





typedef unsigned short _mode_t;


typedef _mode_t mode_t;






typedef unsigned int useconds_t;




struct timespec {
  time_t tv_sec;
  long tv_nsec;
};

struct itimerspec {
  struct timespec it_interval;
  struct timespec it_value;
};
# 106 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/types.h" 3
typedef unsigned long _sigset_t;
# 53 "C:/msys32/usr/X11R6/include/X11/Xlib.h" 2







# 1 "C:/msys32/usr/X11R6/include/X11/X.h" 1
# 71 "C:/msys32/usr/X11R6/include/X11/X.h"

# 71 "C:/msys32/usr/X11R6/include/X11/X.h"
typedef unsigned long XID;



typedef unsigned long Mask;



typedef unsigned long Atom;

typedef unsigned long VisualID;
typedef unsigned long Time;
# 101 "C:/msys32/usr/X11R6/include/X11/X.h"
typedef XID Window;
typedef XID Drawable;


typedef XID Font;

typedef XID Pixmap;
typedef XID Cursor;
typedef XID Colormap;
typedef XID GContext;
typedef XID KeySym;

typedef unsigned char KeyCode;
# 61 "C:/msys32/usr/X11R6/include/X11/Xlib.h" 2


# 1 "C:/msys32/usr/X11R6/include/X11/Xfuncproto.h" 1
# 64 "C:/msys32/usr/X11R6/include/X11/Xlib.h" 2
# 1 "C:/msys32/usr/X11R6/include/X11/Xosdefs.h" 1
# 65 "C:/msys32/usr/X11R6/include/X11/Xlib.h" 2
# 77 "C:/msys32/usr/X11R6/include/X11/Xlib.h"
# 1 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include/stddef.h" 1 3 4
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/stddef.h" 1 3 4
# 24 "C:/msys32/mingw32/i686-w64-mingw32/include/stddef.h" 3 4
  
# 24 "C:/msys32/mingw32/i686-w64-mingw32/include/stddef.h" 3
 __attribute__ ((__dllimport__)) extern unsigned long __attribute__((__cdecl__)) __threadid(void);

  __attribute__ ((__dllimport__)) extern uintptr_t __attribute__((__cdecl__)) __threadhandle(void);
# 424 "C:/msys32/mingw32/i686-w64-mingw32/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 2 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include/stddef.h" 2 3 4
# 78 "C:/msys32/usr/X11R6/include/X11/Xlib.h" 2
# 95 "C:/msys32/usr/X11R6/include/X11/Xlib.h"

# 95 "C:/msys32/usr/X11R6/include/X11/Xlib.h"
extern int
_Xmblen(




    char *str,
    int len

    );





typedef char *XPointer;
# 182 "C:/msys32/usr/X11R6/include/X11/Xlib.h"
typedef struct _XExtData {
 int number;
 struct _XExtData *next;
 int (*free_private)(
 struct _XExtData *extension
 );
 XPointer private_data;
} XExtData;




typedef struct {
 int extension;
 int major_opcode;
 int first_event;
 int first_error;
} XExtCodes;





typedef struct {
    int depth;
    int bits_per_pixel;
    int scanline_pad;
} XPixmapFormatValues;





typedef struct {
 int function;
 unsigned long plane_mask;
 unsigned long foreground;
 unsigned long background;
 int line_width;
 int line_style;
 int cap_style;

 int join_style;
 int fill_style;

 int fill_rule;
 int arc_mode;
 Pixmap tile;
 Pixmap stipple;
 int ts_x_origin;
 int ts_y_origin;
        Font font;
 int subwindow_mode;
 int graphics_exposures;
 int clip_x_origin;
 int clip_y_origin;
 Pixmap clip_mask;
 int dash_offset;
 char dashes;
} XGCValues;






typedef struct _XGC







*GC;




typedef struct {
 XExtData *ext_data;
 VisualID visualid;



 int class;

 unsigned long red_mask, green_mask, blue_mask;
 int bits_per_rgb;
 int map_entries;
} Visual;




typedef struct {
 int depth;
 int nvisuals;
 Visual *visuals;
} Depth;







struct _XDisplay;

typedef struct {
 XExtData *ext_data;
 struct _XDisplay *display;
 Window root;
 int width, height;
 int mwidth, mheight;
 int ndepths;
 Depth *depths;
 int root_depth;
 Visual *root_visual;
 GC default_gc;
 Colormap cmap;
 unsigned long white_pixel;
 unsigned long black_pixel;
 int max_maps, min_maps;
 int backing_store;
 int save_unders;
 long root_input_mask;
} Screen;




typedef struct {
 XExtData *ext_data;
 int depth;
 int bits_per_pixel;
 int scanline_pad;
} ScreenFormat;




typedef struct {
    Pixmap background_pixmap;
    unsigned long background_pixel;
    Pixmap border_pixmap;
    unsigned long border_pixel;
    int bit_gravity;
    int win_gravity;
    int backing_store;
    unsigned long backing_planes;
    unsigned long backing_pixel;
    int save_under;
    long event_mask;
    long do_not_propagate_mask;
    int override_redirect;
    Colormap colormap;
    Cursor cursor;
} XSetWindowAttributes;

typedef struct {
    int x, y;
    int width, height;
    int border_width;
    int depth;
    Visual *visual;
    Window root;



    int class;

    int bit_gravity;
    int win_gravity;
    int backing_store;
    unsigned long backing_planes;
    unsigned long backing_pixel;
    int save_under;
    Colormap colormap;
    int map_installed;
    int map_state;
    long all_event_masks;
    long your_event_mask;
    long do_not_propagate_mask;
    int override_redirect;
    Screen *screen;
} XWindowAttributes;






typedef struct {
 int family;
 int length;
 char *address;
} XHostAddress;




typedef struct {
 int typelength;
 int valuelength;
 char *type;
 char *value;
} XServerInterpretedAddress;




typedef struct _XImage {
    int width, height;
    int xoffset;
    int format;
    char *data;
    int byte_order;
    int bitmap_unit;
    int bitmap_bit_order;
    int bitmap_pad;
    int depth;
    int bytes_per_line;
    int bits_per_pixel;
    unsigned long red_mask;
    unsigned long green_mask;
    unsigned long blue_mask;
    XPointer obdata;
    struct funcs {
 struct _XImage *(*create_image)(
  struct _XDisplay* ,
  Visual* ,
  unsigned int ,
  int ,
  int ,
  char* ,
  unsigned int ,
  unsigned int ,
  int ,
  int );
 int (*destroy_image) (struct _XImage *);
 unsigned long (*get_pixel) (struct _XImage *, int, int);
 int (*put_pixel) (struct _XImage *, int, int, unsigned long);
 struct _XImage *(*sub_image)(struct _XImage *, int, int, unsigned int, unsigned int);
 int (*add_pixel) (struct _XImage *, long);
 } f;
} XImage;




typedef struct {
    int x, y;
    int width, height;
    int border_width;
    Window sibling;
    int stack_mode;
} XWindowChanges;




typedef struct {
 unsigned long pixel;
 unsigned short red, green, blue;
 char flags;
 char pad;
} XColor;






typedef struct {
    short x1, y1, x2, y2;
} XSegment;

typedef struct {
    short x, y;
} XPoint;

typedef struct {
    short x, y;
    unsigned short width, height;
} XRectangle;

typedef struct {
    short x, y;
    unsigned short width, height;
    short angle1, angle2;
} XArc;




typedef struct {
        int key_click_percent;
        int bell_percent;
        int bell_pitch;
        int bell_duration;
        int led;
        int led_mode;
        int key;
        int auto_repeat_mode;
} XKeyboardControl;



typedef struct {
        int key_click_percent;
 int bell_percent;
 unsigned int bell_pitch, bell_duration;
 unsigned long led_mask;
 int global_auto_repeat;
 char auto_repeats[32];
} XKeyboardState;



typedef struct {
        Time time;
 short x, y;
} XTimeCoord;



typedef struct {
  int max_keypermod;
  KeyCode *modifiermap;
} XModifierKeymap;
# 521 "C:/msys32/usr/X11R6/include/X11/Xlib.h"
typedef struct _XDisplay Display;


struct _XPrivate;
struct _XrmHashBucketRec;

typedef struct



{
 XExtData *ext_data;
 struct _XPrivate *private1;
 int fd;
 int private2;
 int proto_major_version;
 int proto_minor_version;
 char *vendor;
        XID private3;
 XID private4;
 XID private5;
 int private6;
 XID (*resource_alloc)(
  struct _XDisplay*
 );
 int byte_order;
 int bitmap_unit;
 int bitmap_pad;
 int bitmap_bit_order;
 int nformats;
 ScreenFormat *pixmap_format;
 int private8;
 int release;
 struct _XPrivate *private9, *private10;
 int qlen;
 unsigned long last_request_read;
 unsigned long request;
 XPointer private11;
 XPointer private12;
 XPointer private13;
 XPointer private14;
 unsigned max_request_size;
 struct _XrmHashBucketRec *db;
 int (*private15)(
  struct _XDisplay*
  );
 char *display_name;
 int default_screen;
 int nscreens;
 Screen *screens;
 unsigned long motion_buffer;
 unsigned long private16;
 int min_keycode;
 int max_keycode;
 XPointer private17;
 XPointer private18;
 int private19;
 char *xdefaults;

}



*_XPrivDisplay;






typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 Window root;
 Window subwindow;
 Time time;
 int x, y;
 int x_root, y_root;
 unsigned int state;
 unsigned int keycode;
 int same_screen;
} XKeyEvent;
typedef XKeyEvent XKeyPressedEvent;
typedef XKeyEvent XKeyReleasedEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 Window root;
 Window subwindow;
 Time time;
 int x, y;
 int x_root, y_root;
 unsigned int state;
 unsigned int button;
 int same_screen;
} XButtonEvent;
typedef XButtonEvent XButtonPressedEvent;
typedef XButtonEvent XButtonReleasedEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 Window root;
 Window subwindow;
 Time time;
 int x, y;
 int x_root, y_root;
 unsigned int state;
 char is_hint;
 int same_screen;
} XMotionEvent;
typedef XMotionEvent XPointerMovedEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 Window root;
 Window subwindow;
 Time time;
 int x, y;
 int x_root, y_root;
 int mode;
 int detail;




 int same_screen;
 int focus;
 unsigned int state;
} XCrossingEvent;
typedef XCrossingEvent XEnterWindowEvent;
typedef XCrossingEvent XLeaveWindowEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 int mode;
 int detail;





} XFocusChangeEvent;
typedef XFocusChangeEvent XFocusInEvent;
typedef XFocusChangeEvent XFocusOutEvent;


typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 char key_vector[32];
} XKeymapEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 int x, y;
 int width, height;
 int count;
} XExposeEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Drawable drawable;
 int x, y;
 int width, height;
 int count;
 int major_code;
 int minor_code;
} XGraphicsExposeEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Drawable drawable;
 int major_code;
 int minor_code;
} XNoExposeEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 int state;
} XVisibilityEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window parent;
 Window window;
 int x, y;
 int width, height;
 int border_width;
 int override_redirect;
} XCreateWindowEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window event;
 Window window;
} XDestroyWindowEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window event;
 Window window;
 int from_configure;
} XUnmapEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window event;
 Window window;
 int override_redirect;
} XMapEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window parent;
 Window window;
} XMapRequestEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window event;
 Window window;
 Window parent;
 int x, y;
 int override_redirect;
} XReparentEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window event;
 Window window;
 int x, y;
 int width, height;
 int border_width;
 Window above;
 int override_redirect;
} XConfigureEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window event;
 Window window;
 int x, y;
} XGravityEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 int width, height;
} XResizeRequestEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window parent;
 Window window;
 int x, y;
 int width, height;
 int border_width;
 Window above;
 int detail;
 unsigned long value_mask;
} XConfigureRequestEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window event;
 Window window;
 int place;
} XCirculateEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window parent;
 Window window;
 int place;
} XCirculateRequestEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 Atom atom;
 Time time;
 int state;
} XPropertyEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 Atom selection;
 Time time;
} XSelectionClearEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window owner;
 Window requestor;
 Atom selection;
 Atom target;
 Atom property;
 Time time;
} XSelectionRequestEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window requestor;
 Atom selection;
 Atom target;
 Atom property;
 Time time;
} XSelectionEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 Colormap colormap;



 int new;

 int state;
} XColormapEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 Atom message_type;
 int format;
 union {
  char b[20];
  short s[10];
  long l[5];
  } data;
} XClientMessageEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
 int request;

 int first_keycode;
 int count;
} XMappingEvent;

typedef struct {
 int type;
 Display *display;
 XID resourceid;
 unsigned long serial;
 unsigned char error_code;
 unsigned char request_code;
 unsigned char minor_code;
} XErrorEvent;

typedef struct {
 int type;
 unsigned long serial;
 int send_event;
 Display *display;
 Window window;
} XAnyEvent;





typedef union _XEvent {
        int type;
 XAnyEvent xany;
 XKeyEvent xkey;
 XButtonEvent xbutton;
 XMotionEvent xmotion;
 XCrossingEvent xcrossing;
 XFocusChangeEvent xfocus;
 XExposeEvent xexpose;
 XGraphicsExposeEvent xgraphicsexpose;
 XNoExposeEvent xnoexpose;
 XVisibilityEvent xvisibility;
 XCreateWindowEvent xcreatewindow;
 XDestroyWindowEvent xdestroywindow;
 XUnmapEvent xunmap;
 XMapEvent xmap;
 XMapRequestEvent xmaprequest;
 XReparentEvent xreparent;
 XConfigureEvent xconfigure;
 XGravityEvent xgravity;
 XResizeRequestEvent xresizerequest;
 XConfigureRequestEvent xconfigurerequest;
 XCirculateEvent xcirculate;
 XCirculateRequestEvent xcirculaterequest;
 XPropertyEvent xproperty;
 XSelectionClearEvent xselectionclear;
 XSelectionRequestEvent xselectionrequest;
 XSelectionEvent xselection;
 XColormapEvent xcolormap;
 XClientMessageEvent xclient;
 XMappingEvent xmapping;
 XErrorEvent xerror;
 XKeymapEvent xkeymap;
 long pad[24];
} XEvent;







typedef struct {
    short lbearing;
    short rbearing;
    short width;
    short ascent;
    short descent;
    unsigned short attributes;
} XCharStruct;





typedef struct {
    Atom name;
    unsigned long card32;
} XFontProp;

typedef struct {
    XExtData *ext_data;
    Font fid;
    unsigned direction;
    unsigned min_char_or_byte2;
    unsigned max_char_or_byte2;
    unsigned min_byte1;
    unsigned max_byte1;
    int all_chars_exist;
    unsigned default_char;
    int n_properties;
    XFontProp *properties;
    XCharStruct min_bounds;
    XCharStruct max_bounds;
    XCharStruct *per_char;
    int ascent;
    int descent;
} XFontStruct;




typedef struct {
    char *chars;
    int nchars;
    int delta;
    Font font;
} XTextItem;

typedef struct {
    unsigned char byte1;
    unsigned char byte2;
} XChar2b;

typedef struct {
    XChar2b *chars;
    int nchars;
    int delta;
    Font font;
} XTextItem16;


typedef union { Display *display;
  GC gc;
  Visual *visual;
  Screen *screen;
  ScreenFormat *pixmap_format;
  XFontStruct *font; } XEDataObject;

typedef struct {
    XRectangle max_ink_extent;
    XRectangle max_logical_extent;
} XFontSetExtents;





typedef struct _XOM *XOM;
typedef struct _XOC *XOC, *XFontSet;

typedef struct {
    char *chars;
    int nchars;
    int delta;
    XFontSet font_set;
} XmbTextItem;

typedef struct {
    wchar_t *chars;
    int nchars;
    int delta;
    XFontSet font_set;
} XwcTextItem;
# 1125 "C:/msys32/usr/X11R6/include/X11/Xlib.h"
typedef struct {
    int charset_count;
    char **charset_list;
} XOMCharSetList;

typedef enum {
    XOMOrientation_LTR_TTB,
    XOMOrientation_RTL_TTB,
    XOMOrientation_TTB_LTR,
    XOMOrientation_TTB_RTL,
    XOMOrientation_Context
} XOrientation;

typedef struct {
    int num_orientation;
    XOrientation *orientation;
} XOMOrientation;

typedef struct {
    int num_font;
    XFontStruct **font_struct_list;
    char **font_name_list;
} XOMFontInfo;

typedef struct _XIM *XIM;
typedef struct _XIC *XIC;

typedef void (*XIMProc)(
    XIM,
    XPointer,
    XPointer
);

typedef int (*XICProc)(
    XIC,
    XPointer,
    XPointer
);

typedef void (*XIDProc)(
    Display*,
    XPointer,
    XPointer
);

typedef unsigned long XIMStyle;

typedef struct {
    unsigned short count_styles;
    XIMStyle *supported_styles;
} XIMStyles;
# 1237 "C:/msys32/usr/X11R6/include/X11/Xlib.h"
typedef void *XVaNestedList;

typedef struct {
    XPointer client_data;
    XIMProc callback;
} XIMCallback;

typedef struct {
    XPointer client_data;
    XICProc callback;
} XICCallback;

typedef unsigned long XIMFeedback;
# 1261 "C:/msys32/usr/X11R6/include/X11/Xlib.h"
typedef struct _XIMText {
    unsigned short length;
    XIMFeedback *feedback;
    int encoding_is_wchar;
    union {
 char *multi_byte;
 wchar_t *wide_char;
    } string;
} XIMText;

typedef unsigned long XIMPreeditState;





typedef struct _XIMPreeditStateNotifyCallbackStruct {
    XIMPreeditState state;
} XIMPreeditStateNotifyCallbackStruct;

typedef unsigned long XIMResetState;




typedef unsigned long XIMStringConversionFeedback;
# 1295 "C:/msys32/usr/X11R6/include/X11/Xlib.h"
typedef struct _XIMStringConversionText {
    unsigned short length;
    XIMStringConversionFeedback *feedback;
    int encoding_is_wchar;
    union {
 char *mbs;
 wchar_t *wcs;
    } string;
} XIMStringConversionText;

typedef unsigned short XIMStringConversionPosition;

typedef unsigned short XIMStringConversionType;






typedef unsigned short XIMStringConversionOperation;




typedef enum {
    XIMForwardChar, XIMBackwardChar,
    XIMForwardWord, XIMBackwardWord,
    XIMCaretUp, XIMCaretDown,
    XIMNextLine, XIMPreviousLine,
    XIMLineStart, XIMLineEnd,
    XIMAbsolutePosition,
    XIMDontChange
} XIMCaretDirection;

typedef struct _XIMStringConversionCallbackStruct {
    XIMStringConversionPosition position;
    XIMCaretDirection direction;
    XIMStringConversionOperation operation;
    unsigned short factor;
    XIMStringConversionText *text;
} XIMStringConversionCallbackStruct;

typedef struct _XIMPreeditDrawCallbackStruct {
    int caret;
    int chg_first;
    int chg_length;
    XIMText *text;
} XIMPreeditDrawCallbackStruct;

typedef enum {
    XIMIsInvisible,
    XIMIsPrimary,
    XIMIsSecondary
} XIMCaretStyle;

typedef struct _XIMPreeditCaretCallbackStruct {
    int position;
    XIMCaretDirection direction;
    XIMCaretStyle style;
} XIMPreeditCaretCallbackStruct;

typedef enum {
    XIMTextType,
    XIMBitmapType
} XIMStatusDataType;

typedef struct _XIMStatusDrawCallbackStruct {
    XIMStatusDataType type;
    union {
 XIMText *text;
 Pixmap bitmap;
    } data;
} XIMStatusDrawCallbackStruct;

typedef struct _XIMHotKeyTrigger {
    KeySym keysym;
    int modifier;
    int modifier_mask;
} XIMHotKeyTrigger;

typedef struct _XIMHotKeyTriggers {
    int num_hot_key;
    XIMHotKeyTrigger *key;
} XIMHotKeyTriggers;

typedef unsigned long XIMHotKeyState;




typedef struct {
    unsigned short count_values;
    char **supported_values;
} XIMValuesList;







extern int (*_Xdebug_p);

extern XFontStruct *XLoadQueryFont(
    Display* ,
    const char*
);

extern XFontStruct *XQueryFont(
    Display* ,
    XID
);


extern XTimeCoord *XGetMotionEvents(
    Display* ,
    Window ,
    Time ,
    Time ,
    int*
);

extern XModifierKeymap *XDeleteModifiermapEntry(
    XModifierKeymap* ,

    unsigned int ,



    int
);

extern XModifierKeymap *XGetModifierMapping(
    Display*
);

extern XModifierKeymap *XInsertModifiermapEntry(
    XModifierKeymap* ,

    unsigned int ,



    int
);

extern XModifierKeymap *XNewModifiermap(
    int
);

extern XImage *XCreateImage(
    Display* ,
    Visual* ,
    unsigned int ,
    int ,
    int ,
    char* ,
    unsigned int ,
    unsigned int ,
    int ,
    int
);
extern int XInitImage(
    XImage*
);
extern XImage *XGetImage(
    Display* ,
    Drawable ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    unsigned long ,
    int
);
extern XImage *XGetSubImage(
    Display* ,
    Drawable ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    unsigned long ,
    int ,
    XImage* ,
    int ,
    int
);




extern Display *XOpenDisplay(
    const char*
);

extern void XrmInitialize(
    void
);

extern char *XFetchBytes(
    Display* ,
    int*
);
extern char *XFetchBuffer(
    Display* ,
    int* ,
    int
);
extern char *XGetAtomName(
    Display* ,
    Atom
);
extern int XGetAtomNames(
    Display* ,
    Atom* ,
    int ,
    char**
);
extern char *XGetDefault(
    Display* ,
    const char* ,
    const char*
);
extern char *XDisplayName(
    const char*
);
extern char *XKeysymToString(
    KeySym
);

extern int (*XSynchronize(
    Display* ,
    int
))(
    Display*
);
extern int (*XSetAfterFunction(
    Display* ,
    int (*) (
      Display*
            )
))(
    Display*
);
extern Atom XInternAtom(
    Display* ,
    const char* ,
    int
);
extern int XInternAtoms(
    Display* ,
    char** ,
    int ,
    int ,
    Atom*
);
extern Colormap XCopyColormapAndFree(
    Display* ,
    Colormap
);
extern Colormap XCreateColormap(
    Display* ,
    Window ,
    Visual* ,
    int
);
extern Cursor XCreatePixmapCursor(
    Display* ,
    Pixmap ,
    Pixmap ,
    XColor* ,
    XColor* ,
    unsigned int ,
    unsigned int
);
extern Cursor XCreateGlyphCursor(
    Display* ,
    Font ,
    Font ,
    unsigned int ,
    unsigned int ,
    XColor const * ,
    XColor const *
);
extern Cursor XCreateFontCursor(
    Display* ,
    unsigned int
);
extern Font XLoadFont(
    Display* ,
    const char*
);
extern GC XCreateGC(
    Display* ,
    Drawable ,
    unsigned long ,
    XGCValues*
);
extern GContext XGContextFromGC(
    GC
);
extern void XFlushGC(
    Display* ,
    GC
);
extern Pixmap XCreatePixmap(
    Display* ,
    Drawable ,
    unsigned int ,
    unsigned int ,
    unsigned int
);
extern Pixmap XCreateBitmapFromData(
    Display* ,
    Drawable ,
    const char* ,
    unsigned int ,
    unsigned int
);
extern Pixmap XCreatePixmapFromBitmapData(
    Display* ,
    Drawable ,
    char* ,
    unsigned int ,
    unsigned int ,
    unsigned long ,
    unsigned long ,
    unsigned int
);
extern Window XCreateSimpleWindow(
    Display* ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    unsigned int ,
    unsigned long ,
    unsigned long
);
extern Window XGetSelectionOwner(
    Display* ,
    Atom
);
extern Window XCreateWindow(
    Display* ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    unsigned int ,
    int ,
    unsigned int ,
    Visual* ,
    unsigned long ,
    XSetWindowAttributes*
);
extern Colormap *XListInstalledColormaps(
    Display* ,
    Window ,
    int*
);
extern char **XListFonts(
    Display* ,
    const char* ,
    int ,
    int*
);
extern char **XListFontsWithInfo(
    Display* ,
    const char* ,
    int ,
    int* ,
    XFontStruct**
);
extern char **XGetFontPath(
    Display* ,
    int*
);
extern char **XListExtensions(
    Display* ,
    int*
);
extern Atom *XListProperties(
    Display* ,
    Window ,
    int*
);
extern XHostAddress *XListHosts(
    Display* ,
    int* ,
    int*
);
extern KeySym XKeycodeToKeysym(
    Display* ,

    unsigned int ,



    int
);
extern KeySym XLookupKeysym(
    XKeyEvent* ,
    int
);
extern KeySym *XGetKeyboardMapping(
    Display* ,

    unsigned int ,



    int ,
    int*
);
extern KeySym XStringToKeysym(
    const char*
);
extern long XMaxRequestSize(
    Display*
);
extern long XExtendedMaxRequestSize(
    Display*
);
extern char *XResourceManagerString(
    Display*
);
extern char *XScreenResourceString(
 Screen*
);
extern unsigned long XDisplayMotionBufferSize(
    Display*
);
extern VisualID XVisualIDFromVisual(
    Visual*
);



extern int XInitThreads(
    void
);

extern void XLockDisplay(
    Display*
);

extern void XUnlockDisplay(
    Display*
);



extern XExtCodes *XInitExtension(
    Display* ,
    const char*
);

extern XExtCodes *XAddExtension(
    Display*
);
extern XExtData *XFindOnExtensionList(
    XExtData** ,
    int
);
extern XExtData **XEHeadOfExtensionList(
    XEDataObject
);


extern Window XRootWindow(
    Display* ,
    int
);
extern Window XDefaultRootWindow(
    Display*
);
extern Window XRootWindowOfScreen(
    Screen*
);
extern Visual *XDefaultVisual(
    Display* ,
    int
);
extern Visual *XDefaultVisualOfScreen(
    Screen*
);
extern GC XDefaultGC(
    Display* ,
    int
);
extern GC XDefaultGCOfScreen(
    Screen*
);
extern unsigned long XBlackPixel(
    Display* ,
    int
);
extern unsigned long XWhitePixel(
    Display* ,
    int
);
extern unsigned long XAllPlanes(
    void
);
extern unsigned long XBlackPixelOfScreen(
    Screen*
);
extern unsigned long XWhitePixelOfScreen(
    Screen*
);
extern unsigned long XNextRequest(
    Display*
);
extern unsigned long XLastKnownRequestProcessed(
    Display*
);
extern char *XServerVendor(
    Display*
);
extern char *XDisplayString(
    Display*
);
extern Colormap XDefaultColormap(
    Display* ,
    int
);
extern Colormap XDefaultColormapOfScreen(
    Screen*
);
extern Display *XDisplayOfScreen(
    Screen*
);
extern Screen *XScreenOfDisplay(
    Display* ,
    int
);
extern Screen *XDefaultScreenOfDisplay(
    Display*
);
extern long XEventMaskOfScreen(
    Screen*
);

extern int XScreenNumberOfScreen(
    Screen*
);

typedef int (*XErrorHandler) (
    Display* ,
    XErrorEvent*
);

extern XErrorHandler XSetErrorHandler (
    XErrorHandler
);


typedef int (*XIOErrorHandler) (
    Display*
);

extern XIOErrorHandler XSetIOErrorHandler (
    XIOErrorHandler
);


extern XPixmapFormatValues *XListPixmapFormats(
    Display* ,
    int*
);
extern int *XListDepths(
    Display* ,
    int ,
    int*
);



extern int XReconfigureWMWindow(
    Display* ,
    Window ,
    int ,
    unsigned int ,
    XWindowChanges*
);

extern int XGetWMProtocols(
    Display* ,
    Window ,
    Atom** ,
    int*
);
extern int XSetWMProtocols(
    Display* ,
    Window ,
    Atom* ,
    int
);
extern int XIconifyWindow(
    Display* ,
    Window ,
    int
);
extern int XWithdrawWindow(
    Display* ,
    Window ,
    int
);
extern int XGetCommand(
    Display* ,
    Window ,
    char*** ,
    int*
);
extern int XGetWMColormapWindows(
    Display* ,
    Window ,
    Window** ,
    int*
);
extern int XSetWMColormapWindows(
    Display* ,
    Window ,
    Window* ,
    int
);
extern void XFreeStringList(
    char**
);
extern int XSetTransientForHint(
    Display* ,
    Window ,
    Window
);



extern int XActivateScreenSaver(
    Display*
);

extern int XAddHost(
    Display* ,
    XHostAddress*
);

extern int XAddHosts(
    Display* ,
    XHostAddress* ,
    int
);

extern int XAddToExtensionList(
    struct _XExtData** ,
    XExtData*
);

extern int XAddToSaveSet(
    Display* ,
    Window
);

extern int XAllocColor(
    Display* ,
    Colormap ,
    XColor*
);

extern int XAllocColorCells(
    Display* ,
    Colormap ,
    int ,
    unsigned long* ,
    unsigned int ,
    unsigned long* ,
    unsigned int
);

extern int XAllocColorPlanes(
    Display* ,
    Colormap ,
    int ,
    unsigned long* ,
    int ,
    int ,
    int ,
    int ,
    unsigned long* ,
    unsigned long* ,
    unsigned long*
);

extern int XAllocNamedColor(
    Display* ,
    Colormap ,
    const char* ,
    XColor* ,
    XColor*
);

extern int XAllowEvents(
    Display* ,
    int ,
    Time
);

extern int XAutoRepeatOff(
    Display*
);

extern int XAutoRepeatOn(
    Display*
);

extern int XBell(
    Display* ,
    int
);

extern int XBitmapBitOrder(
    Display*
);

extern int XBitmapPad(
    Display*
);

extern int XBitmapUnit(
    Display*
);

extern int XCellsOfScreen(
    Screen*
);

extern int XChangeActivePointerGrab(
    Display* ,
    unsigned int ,
    Cursor ,
    Time
);

extern int XChangeGC(
    Display* ,
    GC ,
    unsigned long ,
    XGCValues*
);

extern int XChangeKeyboardControl(
    Display* ,
    unsigned long ,
    XKeyboardControl*
);

extern int XChangeKeyboardMapping(
    Display* ,
    int ,
    int ,
    KeySym* ,
    int
);

extern int XChangePointerControl(
    Display* ,
    int ,
    int ,
    int ,
    int ,
    int
);

extern int XChangeProperty(
    Display* ,
    Window ,
    Atom ,
    Atom ,
    int ,
    int ,
    const unsigned char* ,
    int
);

extern int XChangeSaveSet(
    Display* ,
    Window ,
    int
);

extern int XChangeWindowAttributes(
    Display* ,
    Window ,
    unsigned long ,
    XSetWindowAttributes*
);

extern int XCheckIfEvent(
    Display* ,
    XEvent* ,
    int (*) (
        Display* ,
               XEvent* ,
               XPointer
             ) ,
    XPointer
);

extern int XCheckMaskEvent(
    Display* ,
    long ,
    XEvent*
);

extern int XCheckTypedEvent(
    Display* ,
    int ,
    XEvent*
);

extern int XCheckTypedWindowEvent(
    Display* ,
    Window ,
    int ,
    XEvent*
);

extern int XCheckWindowEvent(
    Display* ,
    Window ,
    long ,
    XEvent*
);

extern int XCirculateSubwindows(
    Display* ,
    Window ,
    int
);

extern int XCirculateSubwindowsDown(
    Display* ,
    Window
);

extern int XCirculateSubwindowsUp(
    Display* ,
    Window
);

extern int XClearArea(
    Display* ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int
);

extern int XClearWindow(
    Display* ,
    Window
);

extern int XCloseDisplay(
    Display*
);

extern int XConfigureWindow(
    Display* ,
    Window ,
    unsigned int ,
    XWindowChanges*
);

extern int XConnectionNumber(
    Display*
);

extern int XConvertSelection(
    Display* ,
    Atom ,
    Atom ,
    Atom ,
    Window ,
    Time
);

extern int XCopyArea(
    Display* ,
    Drawable ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int ,
    int
);

extern int XCopyGC(
    Display* ,
    GC ,
    unsigned long ,
    GC
);

extern int XCopyPlane(
    Display* ,
    Drawable ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int ,
    int ,
    unsigned long
);

extern int XDefaultDepth(
    Display* ,
    int
);

extern int XDefaultDepthOfScreen(
    Screen*
);

extern int XDefaultScreen(
    Display*
);

extern int XDefineCursor(
    Display* ,
    Window ,
    Cursor
);

extern int XDeleteProperty(
    Display* ,
    Window ,
    Atom
);

extern int XDestroyWindow(
    Display* ,
    Window
);

extern int XDestroySubwindows(
    Display* ,
    Window
);

extern int XDoesBackingStore(
    Screen*
);

extern int XDoesSaveUnders(
    Screen*
);

extern int XDisableAccessControl(
    Display*
);


extern int XDisplayCells(
    Display* ,
    int
);

extern int XDisplayHeight(
    Display* ,
    int
);

extern int XDisplayHeightMM(
    Display* ,
    int
);

extern int XDisplayKeycodes(
    Display* ,
    int* ,
    int*
);

extern int XDisplayPlanes(
    Display* ,
    int
);

extern int XDisplayWidth(
    Display* ,
    int
);

extern int XDisplayWidthMM(
    Display* ,
    int
);

extern int XDrawArc(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int ,
    int
);

extern int XDrawArcs(
    Display* ,
    Drawable ,
    GC ,
    XArc* ,
    int
);

extern int XDrawImageString(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    const char* ,
    int
);

extern int XDrawImageString16(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    const XChar2b* ,
    int
);

extern int XDrawLine(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    int ,
    int
);

extern int XDrawLines(
    Display* ,
    Drawable ,
    GC ,
    XPoint* ,
    int ,
    int
);

extern int XDrawPoint(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int
);

extern int XDrawPoints(
    Display* ,
    Drawable ,
    GC ,
    XPoint* ,
    int ,
    int
);

extern int XDrawRectangle(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int
);

extern int XDrawRectangles(
    Display* ,
    Drawable ,
    GC ,
    XRectangle* ,
    int
);

extern int XDrawSegments(
    Display* ,
    Drawable ,
    GC ,
    XSegment* ,
    int
);

extern int XDrawString(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    const char* ,
    int
);

extern int XDrawString16(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    const XChar2b* ,
    int
);

extern int XDrawText(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    XTextItem* ,
    int
);

extern int XDrawText16(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    XTextItem16* ,
    int
);

extern int XEnableAccessControl(
    Display*
);

extern int XEventsQueued(
    Display* ,
    int
);

extern int XFetchName(
    Display* ,
    Window ,
    char**
);

extern int XFillArc(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int ,
    int
);

extern int XFillArcs(
    Display* ,
    Drawable ,
    GC ,
    XArc* ,
    int
);

extern int XFillPolygon(
    Display* ,
    Drawable ,
    GC ,
    XPoint* ,
    int ,
    int ,
    int
);

extern int XFillRectangle(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int
);

extern int XFillRectangles(
    Display* ,
    Drawable ,
    GC ,
    XRectangle* ,
    int
);

extern int XFlush(
    Display*
);

extern int XForceScreenSaver(
    Display* ,
    int
);

extern int XFree(
    void*
);

extern int XFreeColormap(
    Display* ,
    Colormap
);

extern int XFreeColors(
    Display* ,
    Colormap ,
    unsigned long* ,
    int ,
    unsigned long
);

extern int XFreeCursor(
    Display* ,
    Cursor
);

extern int XFreeExtensionList(
    char**
);

extern int XFreeFont(
    Display* ,
    XFontStruct*
);

extern int XFreeFontInfo(
    char** ,
    XFontStruct* ,
    int
);

extern int XFreeFontNames(
    char**
);

extern int XFreeFontPath(
    char**
);

extern int XFreeGC(
    Display* ,
    GC
);

extern int XFreeModifiermap(
    XModifierKeymap*
);

extern int XFreePixmap(
    Display* ,
    Pixmap
);

extern int XGeometry(
    Display* ,
    int ,
    const char* ,
    const char* ,
    unsigned int ,
    unsigned int ,
    unsigned int ,
    int ,
    int ,
    int* ,
    int* ,
    int* ,
    int*
);

extern int XGetErrorDatabaseText(
    Display* ,
    const char* ,
    const char* ,
    const char* ,
    char* ,
    int
);

extern int XGetErrorText(
    Display* ,
    int ,
    char* ,
    int
);

extern int XGetFontProperty(
    XFontStruct* ,
    Atom ,
    unsigned long*
);

extern int XGetGCValues(
    Display* ,
    GC ,
    unsigned long ,
    XGCValues*
);

extern int XGetGeometry(
    Display* ,
    Drawable ,
    Window* ,
    int* ,
    int* ,
    unsigned int* ,
    unsigned int* ,
    unsigned int* ,
    unsigned int*
);

extern int XGetIconName(
    Display* ,
    Window ,
    char**
);

extern int XGetInputFocus(
    Display* ,
    Window* ,
    int*
);

extern int XGetKeyboardControl(
    Display* ,
    XKeyboardState*
);

extern int XGetPointerControl(
    Display* ,
    int* ,
    int* ,
    int*
);

extern int XGetPointerMapping(
    Display* ,
    unsigned char* ,
    int
);

extern int XGetScreenSaver(
    Display* ,
    int* ,
    int* ,
    int* ,
    int*
);

extern int XGetTransientForHint(
    Display* ,
    Window ,
    Window*
);

extern int XGetWindowProperty(
    Display* ,
    Window ,
    Atom ,
    long ,
    long ,
    int ,
    Atom ,
    Atom* ,
    int* ,
    unsigned long* ,
    unsigned long* ,
    unsigned char**
);

extern int XGetWindowAttributes(
    Display* ,
    Window ,
    XWindowAttributes*
);

extern int XGrabButton(
    Display* ,
    unsigned int ,
    unsigned int ,
    Window ,
    int ,
    unsigned int ,
    int ,
    int ,
    Window ,
    Cursor
);

extern int XGrabKey(
    Display* ,
    int ,
    unsigned int ,
    Window ,
    int ,
    int ,
    int
);

extern int XGrabKeyboard(
    Display* ,
    Window ,
    int ,
    int ,
    int ,
    Time
);

extern int XGrabPointer(
    Display* ,
    Window ,
    int ,
    unsigned int ,
    int ,
    int ,
    Window ,
    Cursor ,
    Time
);

extern int XGrabServer(
    Display*
);

extern int XHeightMMOfScreen(
    Screen*
);

extern int XHeightOfScreen(
    Screen*
);

extern int XIfEvent(
    Display* ,
    XEvent* ,
    int (*) (
        Display* ,
               XEvent* ,
               XPointer
             ) ,
    XPointer
);

extern int XImageByteOrder(
    Display*
);

extern int XInstallColormap(
    Display* ,
    Colormap
);

extern KeyCode XKeysymToKeycode(
    Display* ,
    KeySym
);

extern int XKillClient(
    Display* ,
    XID
);

extern int XLookupColor(
    Display* ,
    Colormap ,
    const char* ,
    XColor* ,
    XColor*
);

extern int XLowerWindow(
    Display* ,
    Window
);

extern int XMapRaised(
    Display* ,
    Window
);

extern int XMapSubwindows(
    Display* ,
    Window
);

extern int XMapWindow(
    Display* ,
    Window
);

extern int XMaskEvent(
    Display* ,
    long ,
    XEvent*
);

extern int XMaxCmapsOfScreen(
    Screen*
);

extern int XMinCmapsOfScreen(
    Screen*
);

extern int XMoveResizeWindow(
    Display* ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int
);

extern int XMoveWindow(
    Display* ,
    Window ,
    int ,
    int
);

extern int XNextEvent(
    Display* ,
    XEvent*
);

extern int XNoOp(
    Display*
);

extern int XParseColor(
    Display* ,
    Colormap ,
    const char* ,
    XColor*
);

extern int XParseGeometry(
    const char* ,
    int* ,
    int* ,
    unsigned int* ,
    unsigned int*
);

extern int XPeekEvent(
    Display* ,
    XEvent*
);

extern int XPeekIfEvent(
    Display* ,
    XEvent* ,
    int (*) (
        Display* ,
               XEvent* ,
               XPointer
             ) ,
    XPointer
);

extern int XPending(
    Display*
);

extern int XPlanesOfScreen(
    Screen*
);

extern int XProtocolRevision(
    Display*
);

extern int XProtocolVersion(
    Display*
);


extern int XPutBackEvent(
    Display* ,
    XEvent*
);

extern int XPutImage(
    Display* ,
    Drawable ,
    GC ,
    XImage* ,
    int ,
    int ,
    int ,
    int ,
    unsigned int ,
    unsigned int
);

extern int XQLength(
    Display*
);

extern int XQueryBestCursor(
    Display* ,
    Drawable ,
    unsigned int ,
    unsigned int ,
    unsigned int* ,
    unsigned int*
);

extern int XQueryBestSize(
    Display* ,
    int ,
    Drawable ,
    unsigned int ,
    unsigned int ,
    unsigned int* ,
    unsigned int*
);

extern int XQueryBestStipple(
    Display* ,
    Drawable ,
    unsigned int ,
    unsigned int ,
    unsigned int* ,
    unsigned int*
);

extern int XQueryBestTile(
    Display* ,
    Drawable ,
    unsigned int ,
    unsigned int ,
    unsigned int* ,
    unsigned int*
);

extern int XQueryColor(
    Display* ,
    Colormap ,
    XColor*
);

extern int XQueryColors(
    Display* ,
    Colormap ,
    XColor* ,
    int
);

extern int XQueryExtension(
    Display* ,
    const char* ,
    int* ,
    int* ,
    int*
);

extern int XQueryKeymap(
    Display* ,
    char [32]
);

extern int XQueryPointer(
    Display* ,
    Window ,
    Window* ,
    Window* ,
    int* ,
    int* ,
    int* ,
    int* ,
    unsigned int*
);

extern int XQueryTextExtents(
    Display* ,
    XID ,
    const char* ,
    int ,
    int* ,
    int* ,
    int* ,
    XCharStruct*
);

extern int XQueryTextExtents16(
    Display* ,
    XID ,
    const XChar2b* ,
    int ,
    int* ,
    int* ,
    int* ,
    XCharStruct*
);

extern int XQueryTree(
    Display* ,
    Window ,
    Window* ,
    Window* ,
    Window** ,
    unsigned int*
);

extern int XRaiseWindow(
    Display* ,
    Window
);

extern int XReadBitmapFile(
    Display* ,
    Drawable ,
    const char* ,
    unsigned int* ,
    unsigned int* ,
    Pixmap* ,
    int* ,
    int*
);

extern int XReadBitmapFileData(
    const char* ,
    unsigned int* ,
    unsigned int* ,
    unsigned char** ,
    int* ,
    int*
);

extern int XRebindKeysym(
    Display* ,
    KeySym ,
    KeySym* ,
    int ,
    const unsigned char* ,
    int
);

extern int XRecolorCursor(
    Display* ,
    Cursor ,
    XColor* ,
    XColor*
);

extern int XRefreshKeyboardMapping(
    XMappingEvent*
);

extern int XRemoveFromSaveSet(
    Display* ,
    Window
);

extern int XRemoveHost(
    Display* ,
    XHostAddress*
);

extern int XRemoveHosts(
    Display* ,
    XHostAddress* ,
    int
);

extern int XReparentWindow(
    Display* ,
    Window ,
    Window ,
    int ,
    int
);

extern int XResetScreenSaver(
    Display*
);

extern int XResizeWindow(
    Display* ,
    Window ,
    unsigned int ,
    unsigned int
);

extern int XRestackWindows(
    Display* ,
    Window* ,
    int
);

extern int XRotateBuffers(
    Display* ,
    int
);

extern int XRotateWindowProperties(
    Display* ,
    Window ,
    Atom* ,
    int ,
    int
);

extern int XScreenCount(
    Display*
);

extern int XSelectInput(
    Display* ,
    Window ,
    long
);

extern int XSendEvent(
    Display* ,
    Window ,
    int ,
    long ,
    XEvent*
);

extern int XSetAccessControl(
    Display* ,
    int
);

extern int XSetArcMode(
    Display* ,
    GC ,
    int
);

extern int XSetBackground(
    Display* ,
    GC ,
    unsigned long
);

extern int XSetClipMask(
    Display* ,
    GC ,
    Pixmap
);

extern int XSetClipOrigin(
    Display* ,
    GC ,
    int ,
    int
);

extern int XSetClipRectangles(
    Display* ,
    GC ,
    int ,
    int ,
    XRectangle* ,
    int ,
    int
);

extern int XSetCloseDownMode(
    Display* ,
    int
);

extern int XSetCommand(
    Display* ,
    Window ,
    char** ,
    int
);

extern int XSetDashes(
    Display* ,
    GC ,
    int ,
    const char* ,
    int
);

extern int XSetFillRule(
    Display* ,
    GC ,
    int
);

extern int XSetFillStyle(
    Display* ,
    GC ,
    int
);

extern int XSetFont(
    Display* ,
    GC ,
    Font
);

extern int XSetFontPath(
    Display* ,
    char** ,
    int
);

extern int XSetForeground(
    Display* ,
    GC ,
    unsigned long
);

extern int XSetFunction(
    Display* ,
    GC ,
    int
);

extern int XSetGraphicsExposures(
    Display* ,
    GC ,
    int
);

extern int XSetIconName(
    Display* ,
    Window ,
    const char*
);

extern int XSetInputFocus(
    Display* ,
    Window ,
    int ,
    Time
);

extern int XSetLineAttributes(
    Display* ,
    GC ,
    unsigned int ,
    int ,
    int ,
    int
);

extern int XSetModifierMapping(
    Display* ,
    XModifierKeymap*
);

extern int XSetPlaneMask(
    Display* ,
    GC ,
    unsigned long
);

extern int XSetPointerMapping(
    Display* ,
    const unsigned char* ,
    int
);

extern int XSetScreenSaver(
    Display* ,
    int ,
    int ,
    int ,
    int
);

extern int XSetSelectionOwner(
    Display* ,
    Atom ,
    Window ,
    Time
);

extern int XSetState(
    Display* ,
    GC ,
    unsigned long ,
    unsigned long ,
    int ,
    unsigned long
);

extern int XSetStipple(
    Display* ,
    GC ,
    Pixmap
);

extern int XSetSubwindowMode(
    Display* ,
    GC ,
    int
);

extern int XSetTSOrigin(
    Display* ,
    GC ,
    int ,
    int
);

extern int XSetTile(
    Display* ,
    GC ,
    Pixmap
);

extern int XSetWindowBackground(
    Display* ,
    Window ,
    unsigned long
);

extern int XSetWindowBackgroundPixmap(
    Display* ,
    Window ,
    Pixmap
);

extern int XSetWindowBorder(
    Display* ,
    Window ,
    unsigned long
);

extern int XSetWindowBorderPixmap(
    Display* ,
    Window ,
    Pixmap
);

extern int XSetWindowBorderWidth(
    Display* ,
    Window ,
    unsigned int
);

extern int XSetWindowColormap(
    Display* ,
    Window ,
    Colormap
);

extern int XStoreBuffer(
    Display* ,
    const char* ,
    int ,
    int
);

extern int XStoreBytes(
    Display* ,
    const char* ,
    int
);

extern int XStoreColor(
    Display* ,
    Colormap ,
    XColor*
);

extern int XStoreColors(
    Display* ,
    Colormap ,
    XColor* ,
    int
);

extern int XStoreName(
    Display* ,
    Window ,
    const char*
);

extern int XStoreNamedColor(
    Display* ,
    Colormap ,
    const char* ,
    unsigned long ,
    int
);

extern int XSync(
    Display* ,
    int
);

extern int XTextExtents(
    XFontStruct* ,
    const char* ,
    int ,
    int* ,
    int* ,
    int* ,
    XCharStruct*
);

extern int XTextExtents16(
    XFontStruct* ,
    const XChar2b* ,
    int ,
    int* ,
    int* ,
    int* ,
    XCharStruct*
);

extern int XTextWidth(
    XFontStruct* ,
    const char* ,
    int
);

extern int XTextWidth16(
    XFontStruct* ,
    const XChar2b* ,
    int
);

extern int XTranslateCoordinates(
    Display* ,
    Window ,
    Window ,
    int ,
    int ,
    int* ,
    int* ,
    Window*
);

extern int XUndefineCursor(
    Display* ,
    Window
);

extern int XUngrabButton(
    Display* ,
    unsigned int ,
    unsigned int ,
    Window
);

extern int XUngrabKey(
    Display* ,
    int ,
    unsigned int ,
    Window
);

extern int XUngrabKeyboard(
    Display* ,
    Time
);

extern int XUngrabPointer(
    Display* ,
    Time
);

extern int XUngrabServer(
    Display*
);

extern int XUninstallColormap(
    Display* ,
    Colormap
);

extern int XUnloadFont(
    Display* ,
    Font
);

extern int XUnmapSubwindows(
    Display* ,
    Window
);

extern int XUnmapWindow(
    Display* ,
    Window
);

extern int XVendorRelease(
    Display*
);

extern int XWarpPointer(
    Display* ,
    Window ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int ,
    int
);

extern int XWidthMMOfScreen(
    Screen*
);

extern int XWidthOfScreen(
    Screen*
);

extern int XWindowEvent(
    Display* ,
    Window ,
    long ,
    XEvent*
);

extern int XWriteBitmapFile(
    Display* ,
    const char* ,
    Pixmap ,
    unsigned int ,
    unsigned int ,
    int ,
    int
);

extern int XSupportsLocale (void);

extern char *XSetLocaleModifiers(
    const char*
);

extern XOM XOpenOM(
    Display* ,
    struct _XrmHashBucketRec* ,
    const char* ,
    const char*
);

extern int XCloseOM(
    XOM
);

extern char *XSetOMValues(
    XOM ,
    ...
);

extern char *XGetOMValues(
    XOM ,
    ...
);

extern Display *XDisplayOfOM(
    XOM
);

extern char *XLocaleOfOM(
    XOM
);

extern XOC XCreateOC(
    XOM ,
    ...
);

extern void XDestroyOC(
    XOC
);

extern XOM XOMOfOC(
    XOC
);

extern char *XSetOCValues(
    XOC ,
    ...
);

extern char *XGetOCValues(
    XOC ,
    ...
);

extern XFontSet XCreateFontSet(
    Display* ,
    const char* ,
    char*** ,
    int* ,
    char**
);

extern void XFreeFontSet(
    Display* ,
    XFontSet
);

extern int XFontsOfFontSet(
    XFontSet ,
    XFontStruct*** ,
    char***
);

extern char *XBaseFontNameListOfFontSet(
    XFontSet
);

extern char *XLocaleOfFontSet(
    XFontSet
);

extern int XContextDependentDrawing(
    XFontSet
);

extern int XDirectionalDependentDrawing(
    XFontSet
);

extern int XContextualDrawing(
    XFontSet
);

extern XFontSetExtents *XExtentsOfFontSet(
    XFontSet
);

extern int XmbTextEscapement(
    XFontSet ,
    const char* ,
    int
);

extern int XwcTextEscapement(
    XFontSet ,
    const wchar_t* ,
    int
);

extern int Xutf8TextEscapement(
    XFontSet ,
    const char* ,
    int
);

extern int XmbTextExtents(
    XFontSet ,
    const char* ,
    int ,
    XRectangle* ,
    XRectangle*
);

extern int XwcTextExtents(
    XFontSet ,
    const wchar_t* ,
    int ,
    XRectangle* ,
    XRectangle*
);

extern int Xutf8TextExtents(
    XFontSet ,
    const char* ,
    int ,
    XRectangle* ,
    XRectangle*
);

extern int XmbTextPerCharExtents(
    XFontSet ,
    const char* ,
    int ,
    XRectangle* ,
    XRectangle* ,
    int ,
    int* ,
    XRectangle* ,
    XRectangle*
);

extern int XwcTextPerCharExtents(
    XFontSet ,
    const wchar_t* ,
    int ,
    XRectangle* ,
    XRectangle* ,
    int ,
    int* ,
    XRectangle* ,
    XRectangle*
);

extern int Xutf8TextPerCharExtents(
    XFontSet ,
    const char* ,
    int ,
    XRectangle* ,
    XRectangle* ,
    int ,
    int* ,
    XRectangle* ,
    XRectangle*
);

extern void XmbDrawText(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    XmbTextItem* ,
    int
);

extern void XwcDrawText(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    XwcTextItem* ,
    int
);

extern void Xutf8DrawText(
    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    XmbTextItem* ,
    int
);

extern void XmbDrawString(
    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const char* ,
    int
);

extern void XwcDrawString(
    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const wchar_t* ,
    int
);

extern void Xutf8DrawString(
    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const char* ,
    int
);

extern void XmbDrawImageString(
    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const char* ,
    int
);

extern void XwcDrawImageString(
    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const wchar_t* ,
    int
);

extern void Xutf8DrawImageString(
    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const char* ,
    int
);

extern XIM XOpenIM(
    Display* ,
    struct _XrmHashBucketRec* ,
    char* ,
    char*
);

extern int XCloseIM(
    XIM
);

extern char *XGetIMValues(
    XIM , ...
);

extern char *XSetIMValues(
    XIM , ...
);

extern Display *XDisplayOfIM(
    XIM
);

extern char *XLocaleOfIM(
    XIM
);

extern XIC XCreateIC(
    XIM , ...
);

extern void XDestroyIC(
    XIC
);

extern void XSetICFocus(
    XIC
);

extern void XUnsetICFocus(
    XIC
);

extern wchar_t *XwcResetIC(
    XIC
);

extern char *XmbResetIC(
    XIC
);

extern char *Xutf8ResetIC(
    XIC
);

extern char *XSetICValues(
    XIC , ...
);

extern char *XGetICValues(
    XIC , ...
);

extern XIM XIMOfIC(
    XIC
);

extern int XFilterEvent(
    XEvent* ,
    Window
);

extern int XmbLookupString(
    XIC ,
    XKeyPressedEvent* ,
    char* ,
    int ,
    KeySym* ,
    int*
);

extern int XwcLookupString(
    XIC ,
    XKeyPressedEvent* ,
    wchar_t* ,
    int ,
    KeySym* ,
    int*
);

extern int Xutf8LookupString(
    XIC ,
    XKeyPressedEvent* ,
    char* ,
    int ,
    KeySym* ,
    int*
);

extern XVaNestedList XVaCreateNestedList(
    int , ...
);



extern int XRegisterIMInstantiateCallback(
    Display* ,
    struct _XrmHashBucketRec* ,
    char* ,
    char* ,
    XIDProc ,
    XPointer
);

extern int XUnregisterIMInstantiateCallback(
    Display* ,
    struct _XrmHashBucketRec* ,
    char* ,
    char* ,
    XIDProc ,
    XPointer
);

typedef void (*XConnectionWatchProc)(
    Display* ,
    XPointer ,
    int ,
    int ,
    XPointer*
);


extern int XInternalConnectionNumbers(
    Display* ,
    int** ,
    int*
);

extern void XProcessInternalConnection(
    Display* ,
    int
);

extern int XAddConnectionWatch(
    Display* ,
    XConnectionWatchProc ,
    XPointer
);

extern void XRemoveConnectionWatch(
    Display* ,
    XConnectionWatchProc ,
    XPointer
);

extern void XSetAuthorization(
    char * ,
    int ,
    char * ,
    int
);

extern int _Xmbtowc(
    wchar_t * ,




    char * ,
    int

);

extern int _Xwctomb(
    char * ,
    wchar_t
);


# 69 "./../include/plotter.h" 2
# 1 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h" 1
# 57 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h"
# 1 "C:/msys32/usr/X11R6/include/X11/Xutil.h" 1
# 74 "C:/msys32/usr/X11R6/include/X11/Xutil.h"
typedef struct {
     long flags;
 int x, y;
 int width, height;
 int min_width, min_height;
 int max_width, max_height;
     int width_inc, height_inc;
 struct {
  int x;
  int y;
 } min_aspect, max_aspect;
 int base_width, base_height;
 int win_gravity;
} XSizeHints;
# 112 "C:/msys32/usr/X11R6/include/X11/Xutil.h"
typedef struct {
 long flags;
 int input;

 int initial_state;
 Pixmap icon_pixmap;
 Window icon_window;
 int icon_x, icon_y;
 Pixmap icon_mask;
 XID window_group;

} XWMHints;
# 156 "C:/msys32/usr/X11R6/include/X11/Xutil.h"
typedef struct {
    unsigned char *value;
    Atom encoding;
    int format;
    unsigned long nitems;
} XTextProperty;





typedef enum {
    XStringStyle,
    XCompoundTextStyle,
    XTextStyle,
    XStdICCTextStyle,

    XUTF8StringStyle
} XICCEncodingStyle;

typedef struct {
 int min_width, min_height;
 int max_width, max_height;
 int width_inc, height_inc;
} XIconSize;

typedef struct {
 char *res_name;
 char *res_class;
} XClassHint;
# 224 "C:/msys32/usr/X11R6/include/X11/Xutil.h"
typedef struct _XComposeStatus {
    XPointer compose_ptr;
    int chars_matched;
} XComposeStatus;
# 266 "C:/msys32/usr/X11R6/include/X11/Xutil.h"
typedef struct _XRegion *Region;
# 280 "C:/msys32/usr/X11R6/include/X11/Xutil.h"
typedef struct {
  Visual *visual;
  VisualID visualid;
  int screen;
  int depth;



  int class;

  unsigned long red_mask;
  unsigned long green_mask;
  unsigned long blue_mask;
  int colormap_size;
  int bits_per_rgb;
} XVisualInfo;
# 313 "C:/msys32/usr/X11R6/include/X11/Xutil.h"
typedef struct {
 Colormap colormap;
 unsigned long red_max;
 unsigned long red_mult;
 unsigned long green_max;
 unsigned long green_mult;
 unsigned long blue_max;
 unsigned long blue_mult;
 unsigned long base_pixel;
 VisualID visualid;
 XID killid;
} XStandardColormap;
# 350 "C:/msys32/usr/X11R6/include/X11/Xutil.h"
typedef int XContext;








extern XClassHint *XAllocClassHint (
    void
);

extern XIconSize *XAllocIconSize (
    void
);

extern XSizeHints *XAllocSizeHints (
    void
);

extern XStandardColormap *XAllocStandardColormap (
    void
);

extern XWMHints *XAllocWMHints (
    void
);

extern int XClipBox(
    Region ,
    XRectangle*
);

extern Region XCreateRegion(
    void
);

extern const char *XDefaultString (void);

extern int XDeleteContext(
    Display* ,
    XID ,
    XContext
);

extern int XDestroyRegion(
    Region
);

extern int XEmptyRegion(
    Region
);

extern int XEqualRegion(
    Region ,
    Region
);

extern int XFindContext(
    Display* ,
    XID ,
    XContext ,
    XPointer*
);

extern int XGetClassHint(
    Display* ,
    Window ,
    XClassHint*
);

extern int XGetIconSizes(
    Display* ,
    Window ,
    XIconSize** ,
    int*
);

extern int XGetNormalHints(
    Display* ,
    Window ,
    XSizeHints*
);

extern int XGetRGBColormaps(
    Display* ,
    Window ,
    XStandardColormap** ,
    int* ,
    Atom
);

extern int XGetSizeHints(
    Display* ,
    Window ,
    XSizeHints* ,
    Atom
);

extern int XGetStandardColormap(
    Display* ,
    Window ,
    XStandardColormap* ,
    Atom
);

extern int XGetTextProperty(
    Display* ,
    Window ,
    XTextProperty* ,
    Atom
);

extern XVisualInfo *XGetVisualInfo(
    Display* ,
    long ,
    XVisualInfo* ,
    int*
);

extern int XGetWMClientMachine(
    Display* ,
    Window ,
    XTextProperty*
);

extern XWMHints *XGetWMHints(
    Display* ,
    Window
);

extern int XGetWMIconName(
    Display* ,
    Window ,
    XTextProperty*
);

extern int XGetWMName(
    Display* ,
    Window ,
    XTextProperty*
);

extern int XGetWMNormalHints(
    Display* ,
    Window ,
    XSizeHints* ,
    long*
);

extern int XGetWMSizeHints(
    Display* ,
    Window ,
    XSizeHints* ,
    long* ,
    Atom
);

extern int XGetZoomHints(
    Display* ,
    Window ,
    XSizeHints*
);

extern int XIntersectRegion(
    Region ,
    Region ,
    Region
);

extern void XConvertCase(
    KeySym ,
    KeySym* ,
    KeySym*
);

extern int XLookupString(
    XKeyEvent* ,
    char* ,
    int ,
    KeySym* ,
    XComposeStatus*
);

extern int XMatchVisualInfo(
    Display* ,
    int ,
    int ,
    int ,
    XVisualInfo*
);

extern int XOffsetRegion(
    Region ,
    int ,
    int
);

extern int XPointInRegion(
    Region ,
    int ,
    int
);

extern Region XPolygonRegion(
    XPoint* ,
    int ,
    int
);

extern int XRectInRegion(
    Region ,
    int ,
    int ,
    unsigned int ,
    unsigned int
);

extern int XSaveContext(
    Display* ,
    XID ,
    XContext ,
    const char*
);

extern int XSetClassHint(
    Display* ,
    Window ,
    XClassHint*
);

extern int XSetIconSizes(
    Display* ,
    Window ,
    XIconSize* ,
    int
);

extern int XSetNormalHints(
    Display* ,
    Window ,
    XSizeHints*
);

extern void XSetRGBColormaps(
    Display* ,
    Window ,
    XStandardColormap* ,
    int ,
    Atom
);

extern int XSetSizeHints(
    Display* ,
    Window ,
    XSizeHints* ,
    Atom
);

extern int XSetStandardProperties(
    Display* ,
    Window ,
    const char* ,
    const char* ,
    Pixmap ,
    char** ,
    int ,
    XSizeHints*
);

extern void XSetTextProperty(
    Display* ,
    Window ,
    XTextProperty* ,
    Atom
);

extern void XSetWMClientMachine(
    Display* ,
    Window ,
    XTextProperty*
);

extern int XSetWMHints(
    Display* ,
    Window ,
    XWMHints*
);

extern void XSetWMIconName(
    Display* ,
    Window ,
    XTextProperty*
);

extern void XSetWMName(
    Display* ,
    Window ,
    XTextProperty*
);

extern void XSetWMNormalHints(
    Display* ,
    Window ,
    XSizeHints*
);

extern void XSetWMProperties(
    Display* ,
    Window ,
    XTextProperty* ,
    XTextProperty* ,
    char** ,
    int ,
    XSizeHints* ,
    XWMHints* ,
    XClassHint*
);

extern void XmbSetWMProperties(
    Display* ,
    Window ,
    const char* ,
    const char* ,
    char** ,
    int ,
    XSizeHints* ,
    XWMHints* ,
    XClassHint*
);

extern void Xutf8SetWMProperties(
    Display* ,
    Window ,
    const char* ,
    const char* ,
    char** ,
    int ,
    XSizeHints* ,
    XWMHints* ,
    XClassHint*
);

extern void XSetWMSizeHints(
    Display* ,
    Window ,
    XSizeHints* ,
    Atom
);

extern int XSetRegion(
    Display* ,
    GC ,
    Region
);

extern void XSetStandardColormap(
    Display* ,
    Window ,
    XStandardColormap* ,
    Atom
);

extern int XSetZoomHints(
    Display* ,
    Window ,
    XSizeHints*
);

extern int XShrinkRegion(
    Region ,
    int ,
    int
);

extern int XStringListToTextProperty(
    char** ,
    int ,
    XTextProperty*
);

extern int XSubtractRegion(
    Region ,
    Region ,
    Region
);

extern int XmbTextListToTextProperty(
    Display* display,
    char** list,
    int count,
    XICCEncodingStyle style,
    XTextProperty* text_prop_return
);

extern int XwcTextListToTextProperty(
    Display* display,
    wchar_t** list,
    int count,
    XICCEncodingStyle style,
    XTextProperty* text_prop_return
);

extern int Xutf8TextListToTextProperty(
    Display* display,
    char** list,
    int count,
    XICCEncodingStyle style,
    XTextProperty* text_prop_return
);

extern void XwcFreeStringList(
    wchar_t** list
);

extern int XTextPropertyToStringList(
    XTextProperty* ,
    char*** ,
    int*
);

extern int XmbTextPropertyToTextList(
    Display* display,
    const XTextProperty* text_prop,
    char*** list_return,
    int* count_return
);

extern int XwcTextPropertyToTextList(
    Display* display,
    const XTextProperty* text_prop,
    wchar_t*** list_return,
    int* count_return
);

extern int Xutf8TextPropertyToTextList(
    Display* display,
    const XTextProperty* text_prop,
    char*** list_return,
    int* count_return
);

extern int XUnionRectWithRegion(
    XRectangle* ,
    Region ,
    Region
);

extern int XUnionRegion(
    Region ,
    Region ,
    Region
);

extern int XWMGeometry(
    Display* ,
    int ,
    const char* ,
    const char* ,
    unsigned int ,
    XSizeHints* ,
    int* ,
    int* ,
    int* ,
    int* ,
    int*
);

extern int XXorRegion(
    Region ,
    Region ,
    Region
);


# 58 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h" 2
# 1 "C:/msys32/usr/X11R6/include/X11/Xresource.h" 1
# 68 "C:/msys32/usr/X11R6/include/X11/Xresource.h"








extern char *Xpermalloc(
    unsigned int
);







typedef int XrmQuark, *XrmQuarkList;


typedef char *XrmString;



extern XrmQuark XrmStringToQuark(
    const char*
);

extern XrmQuark XrmPermStringToQuark(
    const char*
);


extern XrmString XrmQuarkToString(
    XrmQuark
);

extern XrmQuark XrmUniqueQuark(
    void
);
# 119 "C:/msys32/usr/X11R6/include/X11/Xresource.h"
typedef enum {XrmBindTightly, XrmBindLoosely} XrmBinding, *XrmBindingList;

extern void XrmStringToQuarkList(
    const char* ,
    XrmQuarkList
);

extern void XrmStringToBindingQuarkList(
    const char* ,
    XrmBindingList ,
    XrmQuarkList
);







typedef XrmQuark XrmName;
typedef XrmQuarkList XrmNameList;




typedef XrmQuark XrmClass;
typedef XrmQuarkList XrmClassList;
# 158 "C:/msys32/usr/X11R6/include/X11/Xresource.h"
typedef XrmQuark XrmRepresentation;



typedef struct {
    unsigned int size;
    XPointer addr;
} XrmValue, *XrmValuePtr;
# 174 "C:/msys32/usr/X11R6/include/X11/Xresource.h"
typedef struct _XrmHashBucketRec *XrmHashBucket;
typedef XrmHashBucket *XrmHashTable;
typedef XrmHashTable XrmSearchList[];
typedef struct _XrmHashBucketRec *XrmDatabase;


extern void XrmDestroyDatabase(
    XrmDatabase
);

extern void XrmQPutResource(
    XrmDatabase* ,
    XrmBindingList ,
    XrmQuarkList ,
    XrmRepresentation ,
    XrmValue*
);

extern void XrmPutResource(
    XrmDatabase* ,
    const char* ,
    const char* ,
    XrmValue*
);

extern void XrmQPutStringResource(
    XrmDatabase* ,
    XrmBindingList ,
    XrmQuarkList ,
    const char*
);

extern void XrmPutStringResource(
    XrmDatabase* ,
    const char* ,
    const char*
);

extern void XrmPutLineResource(
    XrmDatabase* ,
    const char*
);

extern int XrmQGetResource(
    XrmDatabase ,
    XrmNameList ,
    XrmClassList ,
    XrmRepresentation* ,
    XrmValue*
);

extern int XrmGetResource(
    XrmDatabase ,
    const char* ,
    const char* ,
    char** ,
    XrmValue*
);

extern int XrmQGetSearchList(
    XrmDatabase ,
    XrmNameList ,
    XrmClassList ,
    XrmSearchList ,
    int
);

extern int XrmQGetSearchResource(
    XrmSearchList ,
    XrmName ,
    XrmClass ,
    XrmRepresentation* ,
    XrmValue*
);
# 257 "C:/msys32/usr/X11R6/include/X11/Xresource.h"
extern void XrmSetDatabase(
    Display* ,
    XrmDatabase
);

extern XrmDatabase XrmGetDatabase(
    Display*
);



extern XrmDatabase XrmGetFileDatabase(
    const char*
);

extern int XrmCombineFileDatabase(
    const char* ,
    XrmDatabase* ,
    int
);

extern XrmDatabase XrmGetStringDatabase(
    const char*
);

extern void XrmPutFileDatabase(
    XrmDatabase ,
    const char*
);

extern void XrmMergeDatabases(
    XrmDatabase ,
    XrmDatabase*
);

extern void XrmCombineDatabase(
    XrmDatabase ,
    XrmDatabase* ,
    int
);




extern int XrmEnumerateDatabase(
    XrmDatabase ,
    XrmNameList ,
    XrmClassList ,
    int ,
    int (*)(
      XrmDatabase* ,
      XrmBindingList ,
      XrmQuarkList ,
      XrmRepresentation* ,
      XrmValue* ,
      XPointer
      ) ,
    XPointer
);

extern const char *XrmLocaleOfDatabase(
    XrmDatabase
);
# 328 "C:/msys32/usr/X11R6/include/X11/Xresource.h"
typedef enum {
    XrmoptionNoArg,
    XrmoptionIsArg,
    XrmoptionStickyArg,
    XrmoptionSepArg,
    XrmoptionResArg,
    XrmoptionSkipArg,
    XrmoptionSkipLine,
    XrmoptionSkipNArgs

} XrmOptionKind;

typedef struct {
    char *option;
    char *specifier;
    XrmOptionKind argKind;
    XPointer value;
} XrmOptionDescRec, *XrmOptionDescList;


extern void XrmParseCommand(
    XrmDatabase* ,
    XrmOptionDescList ,
    int ,
    const char* ,
    int* ,
    char**
);


# 59 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h" 2
# 69 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h"
typedef char *String;
# 93 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h"
# 1 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include/stddef.h" 1 3 4
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/stddef.h" 1 3 4
# 2 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include/stddef.h" 2 3 4
# 94 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h" 2
# 110 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h"
typedef struct _WidgetRec *Widget;
typedef Widget *WidgetList;
typedef struct _WidgetClassRec *WidgetClass;
typedef struct _CompositeRec *CompositeWidget;
typedef struct _XtActionsRec *XtActionList;
typedef struct _XtEventRec *XtEventTable;

typedef struct _XtAppStruct *XtAppContext;
typedef unsigned long XtValueMask;
typedef unsigned long XtIntervalId;
typedef unsigned long XtInputId;
typedef unsigned long XtWorkProcId;
typedef unsigned long XtSignalId;
typedef unsigned int XtGeometryMask;
typedef unsigned long XtGCMask;
typedef unsigned long Pixel;
typedef int XtCacheType;
# 158 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h"
typedef char Boolean;
typedef long XtArgVal;
typedef unsigned char XtEnum;


typedef unsigned int Cardinal;
typedef unsigned short Dimension;
typedef short Position;

typedef void* XtPointer;



typedef XtPointer Opaque;

# 1 "C:/msys32/usr/X11R6/include/X11/Core.h" 1
# 56 "C:/msys32/usr/X11R6/include/X11/Core.h"
typedef struct _WidgetClassRec *CoreWidgetClass;
typedef struct _WidgetRec *CoreWidget;
extern WidgetClass coreWidgetClass;


extern WidgetClass widgetClass;
# 174 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h" 2
# 1 "C:/msys32/usr/X11R6/include/X11/Composite.h" 1
# 54 "C:/msys32/usr/X11R6/include/X11/Composite.h"
typedef struct _CompositeClassRec *CompositeWidgetClass;

typedef Cardinal (*XtOrderProc)(
    Widget
);



extern void XtManageChildren(
    WidgetList ,
    Cardinal
);

extern void XtManageChild(
    Widget
);

extern void XtUnmanageChildren(
    WidgetList ,
    Cardinal
);

extern void XtUnmanageChild(
    Widget
);

typedef void (*XtDoChangeProc)(
    Widget ,
    WidgetList ,
    Cardinal * ,
    WidgetList ,
    Cardinal * ,
    XtPointer
);

extern void XtChangeManagedSet(
    WidgetList ,
    Cardinal ,
    XtDoChangeProc ,
    XtPointer ,
    WidgetList ,
    Cardinal
);




extern WidgetClass compositeWidgetClass;
# 175 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h" 2
# 1 "C:/msys32/usr/X11R6/include/X11/Constraint.h" 1
# 53 "C:/msys32/usr/X11R6/include/X11/Constraint.h"
typedef struct _ConstraintClassRec *ConstraintWidgetClass;


extern WidgetClass constraintWidgetClass;
# 176 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h" 2
# 1 "C:/msys32/usr/X11R6/include/X11/Object.h" 1
# 53 "C:/msys32/usr/X11R6/include/X11/Object.h"
typedef struct _ObjectRec *Object;
typedef struct _ObjectClassRec *ObjectClass;


extern WidgetClass objectClass;
# 177 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h" 2
# 1 "C:/msys32/usr/X11R6/include/X11/RectObj.h" 1
# 53 "C:/msys32/usr/X11R6/include/X11/RectObj.h"
typedef struct _RectObjRec *RectObj;
typedef struct _RectObjClassRec *RectObjClass;


extern WidgetClass rectObjClass;
# 178 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h" 2

typedef struct _TranslationData *XtTranslations;
typedef struct _TranslationData *XtAccelerators;
typedef unsigned int Modifiers;

typedef void (*XtActionProc)(
    Widget ,
    XEvent* ,
    String* ,
    Cardinal*
);

typedef XtActionProc* XtBoundActions;

typedef struct _XtActionsRec{
    String string;
    XtActionProc proc;
} XtActionsRec;

typedef enum {


    XtAddress,
    XtBaseOffset,
    XtImmediate,
    XtResourceString,
    XtResourceQuark,
    XtWidgetBaseOffset,
    XtProcedureArg
} XtAddressMode;

typedef struct {
    XtAddressMode address_mode;
    XtPointer address_id;
    Cardinal size;
} XtConvertArgRec, *XtConvertArgList;

typedef void (*XtConvertArgProc)(
    Widget ,
    Cardinal* ,
    XrmValue*
);

typedef struct {
    XtGeometryMask request_mode;
    Position x, y;
    Dimension width, height, border_width;
    Widget sibling;
    int stack_mode;
} XtWidgetGeometry;







typedef void (*XtConverter)(
    XrmValue* ,
    Cardinal* ,
    XrmValue* ,
    XrmValue*
);

typedef Boolean (*XtTypeConverter)(
    Display* ,
    XrmValue* ,
    Cardinal* ,
    XrmValue* ,
    XrmValue* ,
    XtPointer*
);

typedef void (*XtDestructor)(
    XtAppContext ,
    XrmValue* ,
    XtPointer ,
    XrmValue* ,
    Cardinal*
);

typedef Opaque XtCacheRef;

typedef Opaque XtActionHookId;

typedef void (*XtActionHookProc)(
    Widget ,
    XtPointer ,
    String ,
    XEvent* ,
    String* ,
    Cardinal*
);

typedef unsigned long XtBlockHookId;

typedef void (*XtBlockHookProc)(
    XtPointer
);

typedef void (*XtKeyProc)(
    Display* ,
    unsigned int ,
    Modifiers ,
    Modifiers* ,
    KeySym*
);

typedef void (*XtCaseProc)(
    Display* ,
    KeySym ,
    KeySym* ,
    KeySym*
);

typedef void (*XtEventHandler)(
    Widget ,
    XtPointer ,
    XEvent* ,
    Boolean*
);
typedef unsigned long EventMask;

typedef enum {XtListHead, XtListTail } XtListPosition;

typedef unsigned long XtInputMask;





typedef void (*XtTimerCallbackProc)(
    XtPointer ,
    XtIntervalId*
);

typedef void (*XtInputCallbackProc)(
    XtPointer ,
    int* ,
    XtInputId*
);

typedef void (*XtSignalCallbackProc)(
    XtPointer ,
    XtSignalId*
);

typedef struct {
    String name;
    XtArgVal value;
} Arg, *ArgList;

typedef XtPointer XtVarArgsList;

typedef void (*XtCallbackProc)(
    Widget ,
    XtPointer ,
    XtPointer
);

typedef struct _XtCallbackRec {
    XtCallbackProc callback;
    XtPointer closure;
} XtCallbackRec, *XtCallbackList;

typedef enum {
 XtCallbackNoList,
 XtCallbackHasNone,
 XtCallbackHasSome
} XtCallbackStatus;

typedef enum {
    XtGeometryYes,
    XtGeometryNo,
    XtGeometryAlmost,
    XtGeometryDone
} XtGeometryResult;

typedef enum {XtGrabNone, XtGrabNonexclusive, XtGrabExclusive} XtGrabKind;

typedef struct {
    Widget shell_widget;
    Widget enable_widget;
} XtPopdownIDRec, *XtPopdownID;

typedef struct _XtResource {
    String resource_name;
    String resource_class;
    String resource_type;
    Cardinal resource_size;
    Cardinal resource_offset;
    String default_type;
    XtPointer default_addr;
} XtResource, *XtResourceList;

typedef void (*XtResourceDefaultProc)(
    Widget ,
    int ,
    XrmValue*
);

typedef String (*XtLanguageProc)(
    Display* ,
    String ,
    XtPointer
);

typedef void (*XtErrorMsgHandler)(
    String ,
    String ,
    String ,
    String ,
    String* ,
    Cardinal*
);

typedef void (*XtErrorHandler)(
  String
);

typedef void (*XtCreatePopupChildProc)(
    Widget
);

typedef Boolean (*XtWorkProc)(
    XtPointer
);

typedef struct {
    char match;
    String substitution;
} SubstitutionRec, *Substitution;

typedef Boolean (*XtFilePredicate)(
   String
);

typedef XtPointer XtRequestId;

typedef Boolean (*XtConvertSelectionProc)(
    Widget ,
    Atom* ,
    Atom* ,
    Atom* ,
    XtPointer* ,
    unsigned long* ,
    int*
);

typedef void (*XtLoseSelectionProc)(
    Widget ,
    Atom*
);

typedef void (*XtSelectionDoneProc)(
    Widget ,
    Atom* ,
    Atom*
);

typedef void (*XtSelectionCallbackProc)(
    Widget ,
    XtPointer ,
    Atom* ,
    Atom* ,
    XtPointer ,
    unsigned long* ,
    int*
);

typedef void (*XtLoseSelectionIncrProc)(
    Widget ,
    Atom* ,
    XtPointer
);

typedef void (*XtSelectionDoneIncrProc)(
    Widget ,
    Atom* ,
    Atom* ,
    XtRequestId* ,
    XtPointer
);

typedef Boolean (*XtConvertSelectionIncrProc)(
    Widget ,
    Atom* ,
    Atom* ,
    Atom* ,
    XtPointer* ,
    unsigned long* ,
    int* ,
    unsigned long* ,
    XtPointer ,
    XtRequestId*
);

typedef void (*XtCancelConvertSelectionProc)(
    Widget ,
    Atom* ,
    Atom* ,
    XtRequestId* ,
    XtPointer
);

typedef Boolean (*XtEventDispatchProc)(
    XEvent*
);

typedef void (*XtExtensionSelectProc)(
    Widget ,
    int* ,
    XtPointer* ,
    int ,
    XtPointer
);









extern Boolean XtConvertAndStore(
    Widget ,
    const char* ,
    XrmValue* ,
    const char* ,
    XrmValue*
);

extern Boolean XtCallConverter(
    Display* ,
    XtTypeConverter ,
    XrmValuePtr ,
    Cardinal ,
    XrmValuePtr ,
    XrmValue* ,
    XtCacheRef*
);

extern Boolean XtDispatchEvent(
    XEvent*
);

extern Boolean XtCallAcceptFocus(
    Widget ,
    Time*
);

extern Boolean XtPeekEvent(
    XEvent*
);

extern Boolean XtAppPeekEvent(
    XtAppContext ,
    XEvent*
);

extern Boolean XtIsSubclass(
    Widget ,
    WidgetClass
);

extern Boolean XtIsObject(
    Widget
);

extern Boolean _XtCheckSubclassFlag(
    Widget ,
    unsigned int
);

extern Boolean _XtIsSubclassOf(
    Widget ,
    WidgetClass ,
    WidgetClass ,
    unsigned int
);

extern Boolean XtIsManaged(
    Widget
);

extern Boolean XtIsRealized(
    Widget
);

extern Boolean XtIsSensitive(
    Widget
);

extern Boolean XtOwnSelection(
    Widget ,
    Atom ,
    Time ,
    XtConvertSelectionProc ,
    XtLoseSelectionProc ,
    XtSelectionDoneProc
);

extern Boolean XtOwnSelectionIncremental(
    Widget ,
    Atom ,
    Time ,
    XtConvertSelectionIncrProc ,
    XtLoseSelectionIncrProc ,
    XtSelectionDoneIncrProc ,
    XtCancelConvertSelectionProc ,
    XtPointer
);

extern XtGeometryResult XtMakeResizeRequest(
    Widget ,
    unsigned int ,
    unsigned int ,
    Dimension* ,
    Dimension*
);

extern void XtTranslateCoords(
    Widget ,
    int ,
    int ,
    Position* ,
    Position*
);

extern KeySym* XtGetKeysymTable(
    Display* ,
    KeyCode* ,
    int*
);

extern void XtKeysymToKeycodeList(
    Display* ,
    KeySym ,
    KeyCode** ,
    Cardinal*
);

extern void XtStringConversionWarning(
    const char* ,
    const char*
);

extern void XtDisplayStringConversionWarning(
    Display* ,
    const char* ,
    const char*
);

extern XtConvertArgRec const colorConvertArgs[];
extern XtConvertArgRec const screenConvertArg[];

extern void XtAppAddConverter(
    XtAppContext ,
    const char* ,
    const char* ,
    XtConverter ,
    XtConvertArgList ,
    Cardinal
);

extern void XtAddConverter(
    const char* ,
    const char* ,
    XtConverter ,
    XtConvertArgList ,
    Cardinal
);

extern void XtSetTypeConverter(
    const char* ,
    const char* ,
    XtTypeConverter ,
    XtConvertArgList ,
    Cardinal ,
    XtCacheType ,
    XtDestructor
);

extern void XtAppSetTypeConverter(
    XtAppContext ,
    const char* ,
    const char* ,
    XtTypeConverter ,
    XtConvertArgList ,
    Cardinal ,
    XtCacheType ,
    XtDestructor
);

extern void XtConvert(
    Widget ,
    const char* ,
    XrmValue* ,
    const char* ,
    XrmValue*
);

extern void XtDirectConvert(
    XtConverter ,
    XrmValuePtr ,
    Cardinal ,
    XrmValuePtr ,
    XrmValue*
);







extern XtTranslations XtParseTranslationTable(
    const char*
);

extern XtAccelerators XtParseAcceleratorTable(
    const char*
);

extern void XtOverrideTranslations(
    Widget ,
    XtTranslations
);

extern void XtAugmentTranslations(
    Widget ,
    XtTranslations
);

extern void XtInstallAccelerators(
    Widget ,
    Widget
);

extern void XtInstallAllAccelerators(
    Widget ,
    Widget
);

extern void XtUninstallTranslations(
    Widget
);

extern void XtAppAddActions(
    XtAppContext ,
    XtActionList ,
    Cardinal
);

extern void XtAddActions(
    XtActionList ,
    Cardinal
);

extern XtActionHookId XtAppAddActionHook(
    XtAppContext ,
    XtActionHookProc ,
    XtPointer
);

extern void XtRemoveActionHook(
    XtActionHookId
);

extern void XtGetActionList(
    WidgetClass ,
    XtActionList* ,
    Cardinal*
);

extern void XtCallActionProc(
    Widget ,
    const char* ,
    XEvent* ,
    String* ,
    Cardinal
);

extern void XtRegisterGrabAction(
    XtActionProc ,
    int ,
    unsigned int ,
    int ,
    int
);

extern void XtSetMultiClickTime(
    Display* ,
    int
);

extern int XtGetMultiClickTime(
    Display*
);

extern KeySym XtGetActionKeysym(
    XEvent* ,
    Modifiers*
);







extern void XtTranslateKeycode(
    Display* ,
    unsigned int ,
    Modifiers ,
    Modifiers* ,
    KeySym*
);

extern void XtTranslateKey(
    Display* ,
    unsigned int ,
    Modifiers ,
    Modifiers* ,
    KeySym*
);

extern void XtSetKeyTranslator(
    Display* ,
    XtKeyProc
);

extern void XtRegisterCaseConverter(
    Display* ,
    XtCaseProc ,
    KeySym ,
    KeySym
);

extern void XtConvertCase(
    Display* ,
    KeySym ,
    KeySym* ,
    KeySym*
);
# 836 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h"
extern void XtAddEventHandler(
    Widget ,
    EventMask ,
    int ,
    XtEventHandler ,
    XtPointer
);

extern void XtRemoveEventHandler(
    Widget ,
    EventMask ,
    int ,
    XtEventHandler ,
    XtPointer
);

extern void XtAddRawEventHandler(
    Widget ,
    EventMask ,
    int ,
    XtEventHandler ,
    XtPointer
);

extern void XtRemoveRawEventHandler(
    Widget ,
    EventMask ,
    int ,
    XtEventHandler ,
    XtPointer
);

extern void XtInsertEventHandler(
    Widget ,
    EventMask ,
    int ,
    XtEventHandler ,
    XtPointer ,
    XtListPosition
);

extern void XtInsertRawEventHandler(
    Widget ,
    EventMask ,
    int ,
    XtEventHandler ,
    XtPointer ,
    XtListPosition
);

extern XtEventDispatchProc XtSetEventDispatcher(
    Display* ,
    int ,
    XtEventDispatchProc
);

extern Boolean XtDispatchEventToWidget(
    Widget ,
    XEvent*
);

extern void XtInsertEventTypeHandler(
    Widget ,
    int ,
    XtPointer ,
    XtEventHandler ,
    XtPointer ,
    XtListPosition
);

extern void XtRemoveEventTypeHandler(
    Widget ,
    int ,
    XtPointer ,
    XtEventHandler ,
    XtPointer
);

extern EventMask XtBuildEventMask(
    Widget
);

extern void XtRegisterExtensionSelector(
    Display* ,
    int ,
    int ,
    XtExtensionSelectProc ,
    XtPointer
);

extern void XtAddGrab(
    Widget ,
    int ,
    int
);

extern void XtRemoveGrab(
    Widget
);

extern void XtProcessEvent(
    XtInputMask
);

extern void XtAppProcessEvent(
    XtAppContext ,
    XtInputMask
);

extern void XtMainLoop(
    void
);

extern void XtAppMainLoop(
    XtAppContext
);

extern void XtAddExposureToRegion(
    XEvent* ,
    Region
);

extern void XtSetKeyboardFocus(
    Widget ,
    Widget
);

extern Widget XtGetKeyboardFocusWidget(
    Widget
);

extern XEvent* XtLastEventProcessed(
    Display*
);

extern Time XtLastTimestampProcessed(
    Display*
);







extern XtIntervalId XtAddTimeOut(
    unsigned long ,
    XtTimerCallbackProc ,
    XtPointer
);

extern XtIntervalId XtAppAddTimeOut(
    XtAppContext ,
    unsigned long ,
    XtTimerCallbackProc ,
    XtPointer
);

extern void XtRemoveTimeOut(
    XtIntervalId
);

extern XtInputId XtAddInput(
    int ,
    XtPointer ,
    XtInputCallbackProc ,
    XtPointer
);

extern XtInputId XtAppAddInput(
    XtAppContext ,
    int ,
    XtPointer ,
    XtInputCallbackProc ,
    XtPointer
);

extern void XtRemoveInput(
    XtInputId
);

extern XtSignalId XtAppAddSignal(
    XtAppContext ,
    XtSignalCallbackProc ,
    XtPointer
);

extern void XtRemoveSignal(
    XtSignalId
);

extern void XtNoticeSignal(
    XtSignalId
);

extern void XtNextEvent(
    XEvent*
);

extern void XtAppNextEvent(
    XtAppContext ,
    XEvent*
);







extern Boolean XtPending(
    void
);

extern XtInputMask XtAppPending(
    XtAppContext
);

extern XtBlockHookId XtAppAddBlockHook(
    XtAppContext ,
    XtBlockHookProc ,
    XtPointer
);

extern void XtRemoveBlockHook(
    XtBlockHookId
);
# 1093 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h"
extern void XtRealizeWidget(
    Widget
);

void XtUnrealizeWidget(
    Widget
);

extern void XtDestroyWidget(
    Widget
);

extern void XtSetSensitive(
    Widget ,
    int
);

extern void XtSetMappedWhenManaged(
    Widget ,
    int
);

extern Widget XtNameToWidget(
    Widget ,
    const char*
);

extern Widget XtWindowToWidget(
    Display* ,
    Window
);

extern XtPointer XtGetClassExtension(
    WidgetClass ,
    Cardinal ,
    XrmQuark ,
    long ,
    Cardinal
);
# 1143 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h"
extern ArgList XtMergeArgLists(
    ArgList ,
    Cardinal ,
    ArgList ,
    Cardinal
);
# 1159 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h"
extern XtVarArgsList XtVaCreateArgsList(
    XtPointer , ...
);
# 1173 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h"
extern Display *XtDisplay(
    Widget
);

extern Display *XtDisplayOfObject(
    Widget
);

extern Screen *XtScreen(
    Widget
);

extern Screen *XtScreenOfObject(
    Widget
);

extern Window XtWindow(
    Widget
);

extern Window XtWindowOfObject(
    Widget
);

extern String XtName(
    Widget
);

extern WidgetClass XtSuperclass(
    Widget
);

extern WidgetClass XtClass(
    Widget
);

extern Widget XtParent(
    Widget
);







extern void XtAddCallback(
    Widget ,
    const char* ,
    XtCallbackProc ,
    XtPointer
);

extern void XtRemoveCallback(
    Widget ,
    const char* ,
    XtCallbackProc ,
    XtPointer
);

extern void XtAddCallbacks(
    Widget ,
    const char* ,
    XtCallbackList
);

extern void XtRemoveCallbacks(
    Widget ,
    const char* ,
    XtCallbackList
);

extern void XtRemoveAllCallbacks(
    Widget ,
    const char*
);


extern void XtCallCallbacks(
    Widget ,
    const char* ,
    XtPointer
);

extern void XtCallCallbackList(
    Widget ,
    XtCallbackList ,
    XtPointer
);

extern XtCallbackStatus XtHasCallbacks(
    Widget ,
    const char*
);
# 1275 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h"
extern XtGeometryResult XtMakeGeometryRequest(
    Widget ,
    XtWidgetGeometry* ,
    XtWidgetGeometry*
);

extern XtGeometryResult XtQueryGeometry(
    Widget ,
    XtWidgetGeometry* ,
    XtWidgetGeometry*
);

extern Widget XtCreatePopupShell(
    const char* ,
    WidgetClass ,
    Widget ,
    ArgList ,
    Cardinal
);

extern Widget XtVaCreatePopupShell(
    const char* ,
    WidgetClass ,
    Widget ,
    ...
);

extern void XtPopup(
    Widget ,
    XtGrabKind
);

extern void XtPopupSpringLoaded(
    Widget
);

extern void XtCallbackNone(
    Widget ,
    XtPointer ,
    XtPointer
);

extern void XtCallbackNonexclusive(
    Widget ,
    XtPointer ,
    XtPointer
);

extern void XtCallbackExclusive(
    Widget ,
    XtPointer ,
    XtPointer
);

extern void XtPopdown(
    Widget
);

extern void XtCallbackPopdown(
    Widget ,
    XtPointer ,
    XtPointer
);

extern void XtMenuPopupAction(
    Widget ,
    XEvent* ,
    String* ,
    Cardinal*
);

extern Widget XtCreateWidget(
    const char* ,
    WidgetClass ,
    Widget ,
    ArgList ,
    Cardinal
);

extern Widget XtCreateManagedWidget(
    const char* ,
    WidgetClass ,
    Widget ,
    ArgList ,
    Cardinal
);

extern Widget XtVaCreateWidget(
    const char* ,
    WidgetClass ,
    Widget ,
    ...
);

extern Widget XtVaCreateManagedWidget(
    const char* ,
    WidgetClass ,
    Widget ,
    ...
);

extern Widget XtCreateApplicationShell(
    const char* ,
    WidgetClass ,
    ArgList ,
    Cardinal
);

extern Widget XtAppCreateShell(
    const char* ,
    const char* ,
    WidgetClass ,
    Display* ,
    ArgList ,
    Cardinal
);

extern Widget XtVaAppCreateShell(
    const char* ,
    const char* ,
    WidgetClass ,
    Display* ,
    ...
);







extern void XtToolkitInitialize(
    void
);

extern XtLanguageProc XtSetLanguageProc(
    XtAppContext ,
    XtLanguageProc ,
    XtPointer
);

extern void XtDisplayInitialize(
    XtAppContext ,
    Display* ,
    const char* ,
    const char* ,
    XrmOptionDescRec* ,
    Cardinal ,
    int* ,
    char**
);

extern Widget XtOpenApplication(
    XtAppContext* ,
    const char* ,
    XrmOptionDescList ,
    Cardinal ,
    int* ,
    String* ,
    String* ,
    WidgetClass ,
    ArgList ,
    Cardinal
);

extern Widget XtVaOpenApplication(
    XtAppContext* ,
    const char* ,
    XrmOptionDescList ,
    Cardinal ,
    int* ,
    String* ,
    String* ,
    WidgetClass ,
    ...
);

extern Widget XtAppInitialize(
    XtAppContext* ,
    const char* ,
    XrmOptionDescList ,
    Cardinal ,
    int* ,
    String* ,
    String* ,
    ArgList ,
    Cardinal
);

extern Widget XtVaAppInitialize(
    XtAppContext* ,
    const char* ,
    XrmOptionDescList ,
    Cardinal ,
    int* ,
    String* ,
    String* ,
    ...
);

extern Widget XtInitialize(
    const char* ,
    const char* ,
    XrmOptionDescRec* ,
    Cardinal ,
    int* ,
    char**
);

extern Display *XtOpenDisplay(
    XtAppContext ,
    const char* ,
    const char* ,
    const char* ,
    XrmOptionDescRec* ,
    Cardinal ,
    int* ,
    char**
);

extern XtAppContext XtCreateApplicationContext(
    void
);

extern void XtAppSetFallbackResources(
    XtAppContext ,
    String*
);

extern void XtDestroyApplicationContext(
    XtAppContext
);

extern void XtInitializeWidgetClass(
    WidgetClass
);

extern XtAppContext XtWidgetToApplicationContext(
    Widget
);

extern XtAppContext XtDisplayToApplicationContext(
    Display*
);

extern XrmDatabase XtDatabase(
    Display*
);

extern XrmDatabase XtScreenDatabase(
    Screen*
);

extern void XtCloseDisplay(
    Display*
);

extern void XtGetApplicationResources(
    Widget ,
    XtPointer ,
    XtResourceList ,
    Cardinal ,
    ArgList ,
    Cardinal
);

extern void XtVaGetApplicationResources(
    Widget ,
    XtPointer ,
    XtResourceList ,
    Cardinal ,
    ...
);

extern void XtGetSubresources(
    Widget ,
    XtPointer ,
    const char* ,
    const char* ,
    XtResourceList ,
    Cardinal ,
    ArgList ,
    Cardinal
);

extern void XtVaGetSubresources(
    Widget ,
    XtPointer ,
    const char* ,
    const char* ,
    XtResourceList ,
    Cardinal ,
    ...
);

extern void XtSetValues(
    Widget ,
    ArgList ,
    Cardinal
);

extern void XtVaSetValues(
    Widget ,
    ...
);

extern void XtGetValues(
    Widget ,
    ArgList ,
    Cardinal
);

extern void XtVaGetValues(
    Widget ,
    ...
);

extern void XtSetSubvalues(
    XtPointer ,
    XtResourceList ,
    Cardinal ,
    ArgList ,
    Cardinal
);

extern void XtVaSetSubvalues(
    XtPointer ,
    XtResourceList ,
    Cardinal ,
    ...
);

extern void XtGetSubvalues(
    XtPointer ,
    XtResourceList ,
    Cardinal ,
    ArgList ,
    Cardinal
);

extern void XtVaGetSubvalues(
    XtPointer ,
    XtResourceList ,
    Cardinal ,
    ...
);

extern void XtGetResourceList(
    WidgetClass ,
    XtResourceList* ,
    Cardinal*
);

extern void XtGetConstraintResourceList(
    WidgetClass ,
    XtResourceList* ,
    Cardinal*
);
# 1663 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h"
typedef struct _XtCheckpointTokenRec {
    int save_type;
    int interact_style;
    Boolean shutdown;
    Boolean fast;
    Boolean cancel_shutdown;
    int phase;
    int interact_dialog_type;
    Boolean request_cancel;
    Boolean request_next_phase;
    Boolean save_success;
    int type;
    Widget widget;
} XtCheckpointTokenRec, *XtCheckpointToken;

XtCheckpointToken XtSessionGetToken(
    Widget
);

void XtSessionReturnToken(
    XtCheckpointToken
);







extern XtErrorMsgHandler XtAppSetErrorMsgHandler(
    XtAppContext ,
    XtErrorMsgHandler
);

extern void XtSetErrorMsgHandler(
    XtErrorMsgHandler
);

extern XtErrorMsgHandler XtAppSetWarningMsgHandler(
    XtAppContext ,
    XtErrorMsgHandler
);

extern void XtSetWarningMsgHandler(
    XtErrorMsgHandler
);

extern void XtAppErrorMsg(
    XtAppContext ,
    const char* ,
    const char* ,
    const char* ,
    const char* ,
    String* ,
    Cardinal*
);

extern void XtErrorMsg(
    const char* ,
    const char* ,
    const char* ,
    const char* ,
    String* ,
    Cardinal*
);

extern void XtAppWarningMsg(
    XtAppContext ,
    const char* ,
    const char* ,
    const char* ,
    const char* ,
    String* ,
    Cardinal*
);

extern void XtWarningMsg(
    const char* ,
    const char* ,
    const char* ,
    const char* ,
    String* ,
    Cardinal*
);

extern XtErrorHandler XtAppSetErrorHandler(
    XtAppContext ,
    XtErrorHandler
);

extern void XtSetErrorHandler(
    XtErrorHandler
);

extern XtErrorHandler XtAppSetWarningHandler(
    XtAppContext ,
    XtErrorHandler
);

extern void XtSetWarningHandler(
    XtErrorHandler
);

extern void XtAppError(
    XtAppContext ,
    const char*
);

extern void XtError(
    const char*
);

extern void XtAppWarning(
    XtAppContext ,
    const char*
);

extern void XtWarning(
    const char*
);

extern XrmDatabase *XtAppGetErrorDatabase(
    XtAppContext
);

extern XrmDatabase *XtGetErrorDatabase(
    void
);

extern void XtAppGetErrorDatabaseText(
    XtAppContext ,
    const char* ,
    const char* ,
    const char* ,
    const char* ,
    String ,
    int ,
    XrmDatabase
);

extern void XtGetErrorDatabaseText(
    const char* ,
    const char* ,
    const char* ,
    const char* ,
    String ,
    int
);







extern char *XtMalloc(
    Cardinal
);

extern char *XtCalloc(
    Cardinal ,
    Cardinal
);

extern char *XtRealloc(
    char* ,
    Cardinal
);

extern void XtFree(
    char*
);
# 1879 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h"
extern XtWorkProcId XtAddWorkProc(
    XtWorkProc ,
    XtPointer
);

extern XtWorkProcId XtAppAddWorkProc(
    XtAppContext ,
    XtWorkProc ,
    XtPointer
);

extern void XtRemoveWorkProc(
    XtWorkProcId
);







extern GC XtGetGC(
    Widget ,
    XtGCMask ,
    XGCValues*
);

extern GC XtAllocateGC(
    Widget ,
    Cardinal ,
    XtGCMask ,
    XGCValues* ,
    XtGCMask ,
    XtGCMask
);





extern void XtDestroyGC(
    GC
);

extern void XtReleaseGC(
    Widget ,
    GC
);



extern void XtAppReleaseCacheRefs(
    XtAppContext ,
    XtCacheRef*
);

extern void XtCallbackReleaseCacheRef(
    Widget ,
    XtPointer ,
    XtPointer
);

extern void XtCallbackReleaseCacheRefList(
    Widget ,
    XtPointer ,
    XtPointer
);

extern void XtSetWMColormapWindows(
    Widget ,
    Widget* ,
    Cardinal
);

extern String XtFindFile(
    const char* ,
    Substitution ,
    Cardinal ,
    XtFilePredicate
);

extern String XtResolvePathname(
    Display* ,
    const char* ,
    const char* ,
    const char* ,
    const char* ,
    Substitution ,
    Cardinal ,
    XtFilePredicate
);
# 1979 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h"
extern void XtDisownSelection(
    Widget ,
    Atom ,
    Time
);

extern void XtGetSelectionValue(
    Widget ,
    Atom ,
    Atom ,
    XtSelectionCallbackProc ,
    XtPointer ,
    Time
);

extern void XtGetSelectionValues(
    Widget ,
    Atom ,
    Atom* ,
    int ,
    XtSelectionCallbackProc ,
    XtPointer* ,
    Time
);

extern void XtAppSetSelectionTimeout(
    XtAppContext ,
    unsigned long
);

extern void XtSetSelectionTimeout(
    unsigned long
);

extern unsigned long XtAppGetSelectionTimeout(
    XtAppContext
);

extern unsigned long XtGetSelectionTimeout(
    void
);

extern XSelectionRequestEvent *XtGetSelectionRequest(
    Widget ,
    Atom ,
    XtRequestId
);

extern void XtGetSelectionValueIncremental(
    Widget ,
    Atom ,
    Atom ,
    XtSelectionCallbackProc ,
    XtPointer ,
    Time
);

extern void XtGetSelectionValuesIncremental(
    Widget ,
    Atom ,
    Atom* ,
    int ,
    XtSelectionCallbackProc ,
    XtPointer* ,
    Time
);

extern void XtSetSelectionParameters(
    Widget ,
    Atom ,
    Atom ,
    XtPointer ,
    unsigned long ,
    int
);

extern void XtGetSelectionParameters(
    Widget ,
    Atom ,
    XtRequestId ,
    Atom* ,
    XtPointer* ,
    unsigned long* ,
    int*
);

extern void XtCreateSelectionRequest(
    Widget ,
    Atom
);

extern void XtSendSelectionRequest(
    Widget ,
    Atom ,
    Time
);

extern void XtCancelSelectionRequest(
    Widget ,
    Atom
);

extern Atom XtReservePropertyAtom(
    Widget
);

extern void XtReleasePropertyAtom(
    Widget ,
    Atom
);

extern void XtGrabKey(
    Widget ,
    unsigned int ,
    Modifiers ,
    int ,
    int ,
    int
);

extern void XtUngrabKey(
    Widget ,
    unsigned int ,
    Modifiers
);

extern int XtGrabKeyboard(
    Widget ,
    int ,
    int ,
    int ,
    Time
);

extern void XtUngrabKeyboard(
    Widget ,
    Time
);

extern void XtGrabButton(
    Widget ,
    int ,
    Modifiers ,
    int ,
    unsigned int ,
    int ,
    int ,
    Window ,
    Cursor
);

extern void XtUngrabButton(
    Widget ,
    unsigned int ,
    Modifiers
);

extern int XtGrabPointer(
    Widget ,
    int ,
    unsigned int ,
    int ,
    int ,
    Window ,
    Cursor ,
    Time
);

extern void XtUngrabPointer(
    Widget ,
    Time
);

extern void XtGetApplicationNameAndClass(
    Display* ,
    String* ,
    String*
);

extern void XtRegisterDrawable(
    Display* ,
    Drawable ,
    Widget
);

extern void XtUnregisterDrawable(
    Display* ,
    Drawable
);

extern Widget XtHooksOfDisplay(
    Display*
);

typedef struct {
    String type;
    Widget widget;
    ArgList args;
    Cardinal num_args;
} XtCreateHookDataRec, *XtCreateHookData;

typedef struct {
    String type;
    Widget widget;
    XtPointer event_data;
    Cardinal num_event_data;
} XtChangeHookDataRec, *XtChangeHookData;

typedef struct {
    Widget old, req;
    ArgList args;
    Cardinal num_args;
} XtChangeHookSetValuesDataRec, *XtChangeHookSetValuesData;

typedef struct {
    String type;
    Widget widget;
    XtGeometryMask changeMask;
    XWindowChanges changes;
} XtConfigureHookDataRec, *XtConfigureHookData;

typedef struct {
    String type;
    Widget widget;
    XtWidgetGeometry* request;
    XtWidgetGeometry* reply;
    XtGeometryResult result;
} XtGeometryHookDataRec, *XtGeometryHookData;

typedef struct {
    String type;
    Widget widget;
} XtDestroyHookDataRec, *XtDestroyHookData;

extern void XtGetDisplays(
    XtAppContext ,
    Display*** ,
    Cardinal*
);

extern Boolean XtToolkitThreadInitialize(
    void
);

extern void XtAppSetExitFlag(
    XtAppContext
);

extern Boolean XtAppGetExitFlag(
    XtAppContext
);

extern void XtAppLock(
    XtAppContext
);

extern void XtAppUnlock(
    XtAppContext
);
# 2246 "C:/msys32/usr/X11R6/include/X11/Intrinsic.h"
extern Boolean XtCvtStringToAcceleratorTable(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToAtom(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToBool(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToBoolean(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToCommandArgArray(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToCursor(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToDimension(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToDirectoryString(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToDisplay(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToFile(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToFloat(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToFont(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToFontSet(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToFontStruct(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToGravity(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToInitialState(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToInt(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToPixel(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);



extern Boolean XtCvtStringToRestartStyle(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToShort(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToTranslationTable(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToUnsignedChar(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtStringToVisual(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);



extern Boolean XtCvtIntToBool(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtIntToBoolean(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtIntToColor(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);



extern Boolean XtCvtIntToFloat(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtIntToFont(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtIntToPixel(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtIntToPixmap(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);



extern Boolean XtCvtIntToShort(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);

extern Boolean XtCvtIntToUnsignedChar(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);



extern Boolean XtCvtColorToPixel(
    Display* ,
    XrmValuePtr ,
    Cardinal* ,
    XrmValuePtr ,
    XrmValuePtr ,
    XtPointer*
);







# 70 "./../include/plotter.h" 2
# 92 "./../include/plotter.h"
typedef struct
{
  double x, y;
} plPoint;

typedef struct
{
  int x, y;
} plIntPoint;
# 121 "./../include/plotter.h"
typedef enum
{
  S_MOVETO, S_LINE, S_ARC, S_ELLARC, S_QUAD, S_CUBIC, S_CLOSEPATH
} plPathSegmentType;


typedef struct
{
  plPathSegmentType type;
  plPoint p;
  plPoint pc;
  plPoint pd;
} plPathSegment;


typedef enum
{
  PATH_SEGMENT_LIST,
  PATH_CIRCLE, PATH_ELLIPSE, PATH_BOX
} plPathType;
# 150 "./../include/plotter.h"
typedef struct
{
  plPathType type;
  double llx, lly, urx, ury;

  plPathSegment *segments;
  int num_segments;
  int segments_len;
  bool primitive;

  plPoint pc;
  double radius;
  double rx, ry;
  double angle;
  plPoint p0, p1;
  bool clockwise;
} plPath;




typedef struct
{
  plPathSegmentType type;
  plIntPoint p;
  plIntPoint pc;
  plIntPoint pd;
  double angle;
} plIntPathSegment;
# 205 "./../include/plotter.h"
typedef enum
{
  AS_NONE,
  AS_UNIFORM,
  AS_AXES_PRESERVED,
  AS_ANY
} plScalingType;
# 220 "./../include/plotter.h"
typedef struct
{
  int red;
  int green;
  int blue;
} plColor;
# 279 "./../include/plotter.h"
typedef struct
{
  const char *name;
  const char *alt_name;
  const char *fig_name;
  bool metric;
  double xsize, ysize;
  double default_viewport_size;
  double pcl_hpgl2_xorigin;
  double pcl_hpgl2_yorigin;
  double hpgl2_plot_length;
} plPageData;
# 303 "./../include/plotter.h"
typedef struct
{

  double m_user_to_ndc[6];


  double m[6];

  bool uniform;
  bool axes_preserved;
  bool nonreflection;
} plTransform;
# 326 "./../include/plotter.h"
typedef struct plDrawStateStruct
{



  plPoint pos;



  plTransform transform;


  plPath *path;
  plPath **paths;
  int num_paths;
  plPoint start_point;



  const char *fill_rule;
  int fill_rule_type;
  const char *line_mode;
  int line_type;
  bool points_are_connected;
  const char *cap_mode;
  int cap_type;
  const char *join_mode;
  int join_type;
  double miter_limit;
  double line_width;
  bool line_width_is_default;
  double device_line_width;
  int quantized_device_line_width;
  const double *dash_array;
  int dash_array_len;
  double dash_offset;
  bool dash_array_in_effect;
  int pen_type;
  int fill_type;
  int orientation;

  const char *font_name;
  double font_size;
  bool font_size_is_default;
  double text_rotation;
  const char *true_font_name;
  double true_font_size;
  double font_ascent;
  double font_descent;
  double font_cap_height;
  int font_type;
  int typeface_index;
  int font_index;
  bool font_is_iso8859_1;


  plColor fgcolor;
  plColor fillcolor_base;
  plColor fillcolor;
  plColor bgcolor;
  bool bgcolor_suppressed;



  double default_line_width;
  double default_font_size;




  double hpgl_pen_width;


  int fig_font_point_size;
  int fig_fill_level;
  int fig_fgcolor;
  int fig_fillcolor;


  double ps_fgcolor_red;
  double ps_fgcolor_green;
  double ps_fgcolor_blue;
  double ps_fillcolor_red;
  double ps_fillcolor_green;
  double ps_fillcolor_blue;
  int ps_idraw_fgcolor;
  int ps_idraw_bgcolor;
  int ps_idraw_shading;


  plColor i_pen_color;
  plColor i_fill_color;
  plColor i_bg_color;
  unsigned char i_pen_color_index;
  unsigned char i_fill_color_index;
  unsigned char i_bg_color_index;
  bool i_pen_color_status;
  bool i_fill_color_status;
  bool i_bg_color_status;



  unsigned int x_font_pixel_size;
  XFontStruct *x_font_struct;
  const unsigned char *x_label;
  GC x_gc_fg;
  GC x_gc_fill;
  GC x_gc_bg;
  plColor x_current_fgcolor;
  plColor x_current_fillcolor;
  plColor x_current_bgcolor;
  unsigned long x_gc_fgcolor;
  unsigned long x_gc_fillcolor;
  unsigned long x_gc_bgcolor;
  bool x_gc_fgcolor_status;
  bool x_gc_fillcolor_status;
  bool x_gc_bgcolor_status;
  int x_gc_line_style;
  int x_gc_cap_style;
  int x_gc_join_style;
  int x_gc_line_width;
  const char *x_gc_dash_list;
  int x_gc_dash_list_len;
  int x_gc_dash_offset;
  int x_gc_fill_rule;



  struct plDrawStateStruct *previous;

} plDrawState;
# 474 "./../include/plotter.h"
typedef struct plOutbufStruct
{

  struct plOutbufStruct *header;


  struct plOutbufStruct *trailer;


  char *base;
  unsigned long len;
  char *point;
  char *reset_point;
  unsigned long contents;
  unsigned long reset_contents;



  double xrange_min;
  double xrange_max;
  double yrange_min;
  double yrange_max;
  bool ps_font_used[35];
  bool pcl_font_used[45];
  plColor bg_color;
  bool bg_color_suppressed;


  void * extra;


  struct plOutbufStruct *next;
} plOutbuf;





typedef struct
{
  const char *name;
  unsigned char red;
  unsigned char green;
  unsigned char blue;
} plColorNameInfo;

typedef struct plCachedColorNameInfoStruct
{
  const plColorNameInfo *info;
  struct plCachedColorNameInfoStruct *next;
} plCachedColorNameInfo;

typedef struct
{
  plCachedColorNameInfo *cached_colors;
} plColorNameCache;






typedef struct plXFontRecordStruct
{
  char *x_font_name;
  XFontStruct *x_font_struct;
  unsigned int x_font_pixel_size;
  unsigned int x_font_cap_height;
  bool x_font_is_iso8859_1;
  bool subset;
  unsigned char subset_vector[32];
  struct plXFontRecordStruct *next;
} plXFontRecord;


typedef struct plColorRecordStruct
{
  XColor rgb;
  bool allocated;
  int frame_number;
  int page_number;
  struct plColorRecordStruct *next;
} plColorRecord;
# 587 "./../include/plotter.h"
typedef enum
{
  PL_GENERIC,
  PL_BITMAP,
  PL_META,
  PL_TEK,
  PL_REGIS,
  PL_HPGL,
  PL_PCL,
  PL_FIG,
  PL_CGM,
  PL_PS,
  PL_AI,
  PL_SVG,
  PL_GIF,
  PL_PNM

  , PL_PNG


  , PL_X11_DRAWABLE
  , PL_X11

} plPlotterTag;
# 624 "./../include/plotter.h"
typedef enum
{
  PL_OUTPUT_NONE,



  PL_OUTPUT_ONE_PAGE,






  PL_OUTPUT_ONE_PAGE_AT_A_TIME,




  PL_OUTPUT_PAGES_ALL_AT_ONCE,
# 651 "./../include/plotter.h"
  PL_OUTPUT_VIA_CUSTOM_ROUTINES,





  PL_OUTPUT_VIA_CUSTOM_ROUTINES_IN_REAL_TIME,




  PL_OUTPUT_VIA_CUSTOM_ROUTINES_TO_NON_STREAM




} plPlotterOutputModel;
# 678 "./../include/plotter.h"
typedef struct
{




  plPlotterTag type;


  plPlotterOutputModel output_model;


 char *output_filename;


  FILE *infp;
  FILE *outfp;
  FILE *errfp;







  void * params[33];


  int have_wide_lines;
  int have_dash_array;
  int have_solid_fill;
  int have_odd_winding_fill;
  int have_nonzero_winding_fill;
  int have_settable_bg;
  int have_escaped_string_support;
  int have_ps_fonts;
  int have_pcl_fonts;
  int have_stick_fonts;
  int have_extra_stick_fonts;
  int have_other_fonts;


  int default_font_type;
  bool pcl_before_ps;
  bool have_horizontal_justification;
  bool have_vertical_justification;
  bool kern_stick_fonts;
  bool issue_font_warning;


  int max_unfilled_path_length;
  bool have_mixed_paths;
  plScalingType allowed_arc_scaling;
  plScalingType allowed_ellarc_scaling;
  plScalingType allowed_quad_scaling;
  plScalingType allowed_cubic_scaling;
  plScalingType allowed_box_scaling;
  plScalingType allowed_circle_scaling;
  plScalingType allowed_ellipse_scaling;


  bool emulate_color;


  plColorNameCache *color_name_cache;




  int display_model_type;
  int display_coors_type;
  bool flipped_y;
  int imin, imax, jmin, jmax;
  double xmin, xmax, ymin, ymax;




  const plPageData *page_data;
  double viewport_xsize, viewport_ysize;
  double viewport_xorigin, viewport_yorigin;
  double viewport_xoffset, viewport_yoffset;


  double m_ndc_to_device[6];





  bool open;
  bool opened;
  int page_number;
  bool fontsize_invoked;
  bool linewidth_invoked;
  int frame_number;


  bool font_warning_issued;
  bool pen_color_warning_issued;
  bool fill_color_warning_issued;
  bool bg_color_warning_issued;


  plOutbuf *page;
  plOutbuf *first_page;

} plPlotterData;
# 838 "./../include/plotter.h"
typedef struct plPlotterParamsStruct

{
# 851 "./../include/plotter.h"
  int (*setplparam) (struct plPlotterParamsStruct *_plotter_params, const char *parameter, void * value);


  void * plparams[33];
}

PlotterParams;
# 867 "./../include/plotter.h"
typedef struct plPlotterStruct

{
# 1047 "./../include/plotter.h"
  void (*initialize) (struct plPlotterStruct *_plotter);
  void (*terminate) (struct plPlotterStruct *_plotter);




  bool (*begin_page) (struct plPlotterStruct *_plotter);
  bool (*erase_page) (struct plPlotterStruct *_plotter);
  bool (*end_page) (struct plPlotterStruct *_plotter);






  void (*push_state) (struct plPlotterStruct *_plotter);






  void (*pop_state) (struct plPlotterStruct *_plotter);





  void (*paint_path) (struct plPlotterStruct *_plotter);






  bool (*paint_paths) (struct plPlotterStruct *_plotter);
# 1093 "./../include/plotter.h"
  bool (*path_is_flushable) (struct plPlotterStruct *_plotter);







  void (*maybe_prepaint_segments) (struct plPlotterStruct *_plotter, int prev_num_segments);
# 1110 "./../include/plotter.h"
  bool (*paint_marker) (struct plPlotterStruct *_plotter, int type, double size);




  void (*paint_point) (struct plPlotterStruct *_plotter);
# 1142 "./../include/plotter.h"
  void (*paint_text_string_with_escapes) (struct plPlotterStruct *_plotter, const unsigned char *s, int x_justify, int y_justify);

  double (*paint_text_string) (struct plPlotterStruct *_plotter, const unsigned char *s, int h_just, int v_just);
  double (*get_text_width) (struct plPlotterStruct *_plotter, const unsigned char *s);
# 1154 "./../include/plotter.h"
  bool (*retrieve_font) (struct plPlotterStruct *_plotter);






  bool (*flush_output) (struct plPlotterStruct *_plotter);


  void (*warning) (struct plPlotterStruct *_plotter, const char *msg);
  void (*error) (struct plPlotterStruct *_plotter, const char *msg);
# 1175 "./../include/plotter.h"
  plPlotterData *data;


  plDrawState *drawstate;
# 1195 "./../include/plotter.h"
  void * b_arc_cache_data;
  int b_xn, b_yn;
  void * b_painted_set;
  void * b_canvas;


  bool meta_portable_output;

  plPoint meta_pos;
  bool meta_position_is_unknown;
  double meta_m_user_to_ndc[6];

  int meta_fill_rule_type;
  int meta_line_type;
  bool meta_points_are_connected;
  int meta_cap_type;
  int meta_join_type;
  double meta_miter_limit;
  double meta_line_width;
  bool meta_line_width_is_default;
  const double *meta_dash_array;
  int meta_dash_array_len;
  double meta_dash_offset;
  bool meta_dash_array_in_effect;
  int meta_pen_type;
  int meta_fill_type;
  int meta_orientation;

  const char *meta_font_name;
  double meta_font_size;
  bool meta_font_size_is_default;
  double meta_text_rotation;


  plColor meta_fgcolor;
  plColor meta_fillcolor_base;
  plColor meta_bgcolor;

  int tek_display_type;
  int tek_mode;
  int tek_line_type;
  bool tek_mode_is_unknown;
  bool tek_line_type_is_unknown;
  int tek_kermit_fgcolor;
  int tek_kermit_bgcolor;
  bool tek_position_is_unknown;
  plIntPoint tek_pos;

  plIntPoint regis_pos;
  bool regis_position_is_unknown;
  int regis_line_type;
  bool regis_line_type_is_unknown;
  int regis_fgcolor;
  int regis_bgcolor;
  bool regis_fgcolor_is_unknown;
  bool regis_bgcolor_is_unknown;

  int hpgl_version;
  int hpgl_rotation;
  double hpgl_plot_length;
  plPoint hpgl_p1;
  plPoint hpgl_p2;
  bool hpgl_have_screened_vectors;
  bool hpgl_have_char_fill;
  bool hpgl_can_assign_colors;
  bool hpgl_use_opaque_mode;
  plColor hpgl_pen_color[32];
  int hpgl_pen_defined[32];
  int hpgl_pen;
  int hpgl_free_pen;
  bool hpgl_bad_pen;
  bool hpgl_pendown;
  double hpgl_pen_width;
  int hpgl_line_type;
  int hpgl_cap_style;
  int hpgl_join_style;
  double hpgl_miter_limit;
  int hpgl_pen_type;
  double hpgl_pen_option1;
  double hpgl_pen_option2;
  int hpgl_fill_type;
  double hpgl_fill_option1;
  double hpgl_fill_option2;
  int hpgl_char_rendering_type;
  int hpgl_symbol_set;
  int hpgl_spacing;
  int hpgl_posture;
  int hpgl_stroke_weight;
  int hpgl_pcl_typeface;
  int hpgl_charset_lower;
  int hpgl_charset_upper;
  double hpgl_rel_char_height;
  double hpgl_rel_char_width;
  double hpgl_rel_label_rise;
  double hpgl_rel_label_run;
  double hpgl_tan_char_slant;
  bool hpgl_position_is_unknown;
  plIntPoint hpgl_pos;

  int fig_drawing_depth;
  int fig_num_usercolors;
  long int fig_usercolors[512];
  bool fig_colormap_warning_issued;

  int cgm_encoding;
  int cgm_max_version;
  int cgm_version;
  int cgm_profile;
  int cgm_need_color;
  int cgm_page_version;
  int cgm_page_profile;
  bool cgm_page_need_color;
  plColor cgm_line_color;
  plColor cgm_edge_color;
  plColor cgm_fillcolor;
  plColor cgm_marker_color;
  plColor cgm_text_color;
  plColor cgm_bgcolor;
  bool cgm_bgcolor_suppressed;
  int cgm_line_type;
  double cgm_dash_offset;
  int cgm_join_style;
  int cgm_cap_style;
  int cgm_dash_cap_style;
  int cgm_line_width;
  int cgm_interior_style;
  int cgm_edge_type;
  double cgm_edge_dash_offset;
  int cgm_edge_join_style;
  int cgm_edge_cap_style;
  int cgm_edge_dash_cap_style;
  int cgm_edge_width;
  bool cgm_edge_is_visible;
  double cgm_miter_limit;
  int cgm_marker_type;
  int cgm_marker_size;
  int cgm_char_height;
  int cgm_char_base_vector_x;
  int cgm_char_base_vector_y;
  int cgm_char_up_vector_x;
  int cgm_char_up_vector_y;
  int cgm_horizontal_text_alignment;
  int cgm_vertical_text_alignment;
  int cgm_font_id;
  int cgm_charset_lower;
  int cgm_charset_upper;
  int cgm_restricted_text_type;

  int ai_version;
  double ai_pen_cyan;
  double ai_pen_magenta;
  double ai_pen_yellow;
  double ai_pen_black;
  double ai_fill_cyan;
  double ai_fill_magenta;
  double ai_fill_yellow;
  double ai_fill_black;
  bool ai_cyan_used;
  bool ai_magenta_used;
  bool ai_yellow_used;
  bool ai_black_used;
  int ai_cap_style;
  int ai_join_style;
  double ai_miter_limit;
  int ai_line_type;
  double ai_line_width;
  int ai_fill_rule_type;

  double s_matrix[6];
  bool s_matrix_is_unknown;
  bool s_matrix_is_bogus;
  plColor s_bgcolor;
  bool s_bgcolor_suppressed;

  bool n_portable_output;


  bool z_interlace;
  bool z_transparent;
  plColor z_transparent_color;


  int i_xn, i_yn;
  int i_num_pixels;
  bool i_animation;
  int i_iterations;
  int i_delay;
  bool i_interlace;
  bool i_transparent;
  plColor i_transparent_color;
  void * i_arc_cache_data;
  int i_transparent_index;
  void * i_painted_set;
  void * i_canvas;
  plColor i_colormap[256];
  int i_num_color_indices;
  bool i_frame_nonempty;
  int i_bit_depth;
  int i_pixels_scanned;
  int i_pass;
  plIntPoint i_hot;
  plColor i_global_colormap[256];
  int i_num_global_color_indices;
  bool i_header_written;


  Display *x_dpy;
  Visual *x_visual;
  Drawable x_drawable1;
  Drawable x_drawable2;
  Drawable x_drawable3;
  int x_double_buffering;
  long int x_max_polyline_len;
  plXFontRecord *x_fontlist;
  plColorRecord *x_colorlist;
  Colormap x_cmap;
  int x_cmap_type;
  bool x_colormap_warning_issued;
  bool x_bg_color_warning_issued;
  int x_paint_pixel_count;

  XtAppContext y_app_con;
  Widget y_toplevel;
  Widget y_canvas;
  Drawable y_drawable4;
  bool y_auto_flush;
  bool y_vanish_on_delete;
  pid_t *y_pids;
  int y_num_pids;
  int y_event_handler_count;
# 1452 "./../include/plotter.h"
}

Plotter;
# 2397 "./../include/plotter.h"
enum
{ M_NONE, M_DOT, M_PLUS, M_ASTERISK, M_CIRCLE, M_CROSS,
  M_SQUARE, M_TRIANGLE, M_DIAMOND, M_STAR, M_INVERTED_TRIANGLE,
  M_STARBURST, M_FANCY_PLUS, M_FANCY_CROSS, M_FANCY_SQUARE,
  M_FANCY_DIAMOND, M_FILLED_CIRCLE, M_FILLED_SQUARE, M_FILLED_TRIANGLE,
  M_FILLED_DIAMOND, M_FILLED_INVERTED_TRIANGLE, M_FILLED_FANCY_SQUARE,
  M_FILLED_FANCY_DIAMOND, M_HALF_FILLED_CIRCLE, M_HALF_FILLED_SQUARE,
  M_HALF_FILLED_TRIANGLE, M_HALF_FILLED_DIAMOND,
  M_HALF_FILLED_INVERTED_TRIANGLE, M_HALF_FILLED_FANCY_SQUARE,
  M_HALF_FILLED_FANCY_DIAMOND, M_OCTAGON, M_FILLED_OCTAGON
};







enum
{

  O_ARC = 'a',
  O_CIRCLE = 'c',
  O_CONT = 'n',
  O_ERASE = 'e',
  O_LABEL = 't',
  O_LINEMOD = 'f',
  O_LINE = 'l',
  O_MOVE = 'm',
  O_POINT = 'p',
  O_SPACE = 's',


  O_ALABEL = 'T',
  O_ARCREL = 'A',
  O_BEZIER2 = 'q',
  O_BEZIER2REL = 'r',
  O_BEZIER3 = 'y',
  O_BEZIER3REL = 'z',
  O_BGCOLOR = '~',
  O_BOX = 'B',
  O_BOXREL = 'H',
  O_CAPMOD = 'K',
  O_CIRCLEREL = 'G',
  O_CLOSEPATH = 'k',
  O_CLOSEPL = 'x',
  O_COMMENT = '#',
  O_CONTREL = 'N',
  O_ELLARC = '?',
  O_ELLARCREL = '/',
  O_ELLIPSE = '+',
  O_ELLIPSEREL = '=',
  O_ENDPATH = 'E',
  O_ENDSUBPATH = ']',
  O_FILLTYPE = 'L',
  O_FILLCOLOR = 'D',
  O_FILLMOD = 'g',
  O_FONTNAME = 'F',
  O_FONTSIZE = 'S',
  O_JOINMOD = 'J',
  O_LINEDASH = 'd',
  O_LINEREL = 'I',
  O_LINEWIDTH = 'W',
  O_MARKER = 'Y',
  O_MARKERREL = 'Z',
  O_MOVEREL = 'M',
  O_OPENPL = 'o',
  O_ORIENTATION = 'b',
  O_PENCOLOR = '-',
  O_PENTYPE = 'h',
  O_POINTREL = 'P',
  O_RESTORESTATE= 'O',
  O_SAVESTATE = 'U',
  O_SPACE2 = ':',
  O_TEXTANGLE = 'R',



  O_FARC = '1',
  O_FARCREL = '2',
  O_FBEZIER2 = '`',
  O_FBEZIER2REL = '\'',
  O_FBEZIER3 = ',',
  O_FBEZIER3REL = '.',
  O_FBOX = '3',
  O_FBOXREL = '4',
  O_FCIRCLE = '5',
  O_FCIRCLEREL = '6',
  O_FCONT = ')',
  O_FCONTREL = '_',
  O_FELLARC = '}',
  O_FELLARCREL = '|',
  O_FELLIPSE = '{',
  O_FELLIPSEREL = '[',
  O_FFONTSIZE = '7',
  O_FLINE = '8',
  O_FLINEDASH = 'w',
  O_FLINEREL = '9',
  O_FLINEWIDTH = '0',
  O_FMARKER = '!',
  O_FMARKERREL = '@',
  O_FMOVE = '$',
  O_FMOVEREL = '%',
  O_FPOINT = '^',
  O_FPOINTREL = '&',
  O_FSPACE = '*',
  O_FSPACE2 = ';',
  O_FTEXTANGLE = '(',


  O_FCONCAT = '\\',
  O_FMITERLIMIT = 'i',
  O_FSETMATRIX = 'j'
};
# 64 "extern.h" 2




# 1 "C:/msys32/usr/X11R6/include/X11/Xatom.h" 1
# 69 "extern.h" 2


# 1 "C:/msys32/usr/X11R6/include/X11/Shell.h" 1
# 54 "C:/msys32/usr/X11R6/include/X11/Shell.h"
# 1 "C:/msys32/usr/X11R6/include/X11/SM/SMlib.h" 1
# 36 "C:/msys32/usr/X11R6/include/X11/SM/SMlib.h"
# 1 "C:/msys32/usr/X11R6/include/X11/SM/SM.h" 1
# 37 "C:/msys32/usr/X11R6/include/X11/SM/SMlib.h" 2
# 1 "C:/msys32/usr/X11R6/include/X11/ICE/ICElib.h" 1
# 34 "C:/msys32/usr/X11R6/include/X11/ICE/ICElib.h"
# 1 "C:/msys32/usr/X11R6/include/X11/ICE/ICE.h" 1
# 35 "C:/msys32/usr/X11R6/include/X11/ICE/ICElib.h" 2







typedef void *IcePointer;

typedef enum {
    IcePoAuthHaveReply,
    IcePoAuthRejected,
    IcePoAuthFailed,
    IcePoAuthDoneCleanup
} IcePoAuthStatus;

typedef enum {
    IcePaAuthContinue,
    IcePaAuthAccepted,
    IcePaAuthRejected,
    IcePaAuthFailed
} IcePaAuthStatus;

typedef enum {
    IceConnectPending,
    IceConnectAccepted,
    IceConnectRejected,
    IceConnectIOError
} IceConnectStatus;

typedef enum {
    IceProtocolSetupSuccess,
    IceProtocolSetupFailure,
    IceProtocolSetupIOError,
    IceProtocolAlreadyActive
} IceProtocolSetupStatus;

typedef enum {
    IceAcceptSuccess,
    IceAcceptFailure,
    IceAcceptBadMalloc
} IceAcceptStatus;

typedef enum {
    IceClosedNow,
    IceClosedASAP,
    IceConnectionInUse,
    IceStartedShutdownNegotiation
} IceCloseStatus;

typedef enum {
    IceProcessMessagesSuccess,
    IceProcessMessagesIOError,
    IceProcessMessagesConnectionClosed
} IceProcessMessagesStatus;

typedef struct {
    unsigned long sequence_of_request;
    int major_opcode_of_request;
    int minor_opcode_of_request;
    IcePointer reply;
} IceReplyWaitInfo;

typedef struct _IceConn *IceConn;
typedef struct _IceListenObj *IceListenObj;

typedef void (*IceWatchProc) (
    IceConn ,
    IcePointer ,
    int ,
    IcePointer *
);

typedef void (*IcePoProcessMsgProc) (
    IceConn ,
    IcePointer ,
    int ,
    unsigned long ,
    int ,
    IceReplyWaitInfo * ,
    int *
);

typedef void (*IcePaProcessMsgProc) (
    IceConn ,
    IcePointer ,
    int ,
    unsigned long ,
    int
);

typedef struct {
    int major_version;
    int minor_version;
    IcePoProcessMsgProc process_msg_proc;
} IcePoVersionRec;

typedef struct {
    int major_version;
    int minor_version;
    IcePaProcessMsgProc process_msg_proc;
} IcePaVersionRec;

typedef IcePoAuthStatus (*IcePoAuthProc) (
    IceConn ,
    IcePointer * ,
    int ,
    int ,
    int ,
    IcePointer ,
    int * ,
    IcePointer * ,
    char **
);

typedef IcePaAuthStatus (*IcePaAuthProc) (
    IceConn ,
    IcePointer * ,
    int ,
    int ,
    IcePointer ,
    int * ,
    IcePointer * ,
    char **
);

typedef int (*IceHostBasedAuthProc) (
    char *
);

typedef int (*IceProtocolSetupProc) (
    IceConn ,
    int ,
    int ,
    char * ,
    char * ,
    IcePointer * ,
    char **
);

typedef void (*IceProtocolActivateProc) (
    IceConn ,
    IcePointer
);

typedef void (*IceIOErrorProc) (
    IceConn
);

typedef void (*IcePingReplyProc) (
    IceConn ,
    IcePointer
);

typedef void (*IceErrorHandler) (
    IceConn ,
    int ,
    int ,
    unsigned long ,
    int ,
    int ,
    IcePointer
);

typedef void (*IceIOErrorHandler) (
    IceConn
);








extern int IceRegisterForProtocolSetup (
    char * ,
    char * ,
    char * ,
    int ,
    IcePoVersionRec * ,
    int ,
    char ** ,
    IcePoAuthProc * ,
    IceIOErrorProc
);

extern int IceRegisterForProtocolReply (
    char * ,
    char * ,
    char * ,
    int ,
    IcePaVersionRec * ,
    int ,
    char ** ,
    IcePaAuthProc * ,
    IceHostBasedAuthProc ,
    IceProtocolSetupProc ,
    IceProtocolActivateProc ,
    IceIOErrorProc
);

extern IceConn IceOpenConnection (
    char * ,
    IcePointer ,
    int ,
    int ,
    int ,
    char *
);

extern IcePointer IceGetConnectionContext (
    IceConn
);

extern int IceListenForConnections (
    int * ,
    IceListenObj ** ,
    int ,
    char *
);

extern int IceListenForWellKnownConnections (
    char * ,
    int * ,
    IceListenObj ** ,
    int ,
    char *
);

extern int IceGetListenConnectionNumber (
    IceListenObj
);

extern char *IceGetListenConnectionString (
    IceListenObj
);

extern char *IceComposeNetworkIdList (
    int ,
    IceListenObj *
);

extern void IceFreeListenObjs (
    int ,
    IceListenObj *
);

extern void IceSetHostBasedAuthProc (
    IceListenObj ,
    IceHostBasedAuthProc
);

extern IceConn IceAcceptConnection (
    IceListenObj ,
    IceAcceptStatus *
);

extern void IceSetShutdownNegotiation (
    IceConn ,
    int
);

extern int IceCheckShutdownNegotiation (
    IceConn
);

extern IceCloseStatus IceCloseConnection (
    IceConn
);

extern int IceAddConnectionWatch (
    IceWatchProc ,
    IcePointer
);

extern void IceRemoveConnectionWatch (
    IceWatchProc ,
    IcePointer
);

extern IceProtocolSetupStatus IceProtocolSetup (
    IceConn ,
    int ,
    IcePointer ,
    int ,
    int * ,
    int * ,
    char ** ,
    char ** ,
    int ,
    char *
);

extern int IceProtocolShutdown (
    IceConn ,
    int
);

extern IceProcessMessagesStatus IceProcessMessages (
    IceConn ,
    IceReplyWaitInfo * ,
    int *
);

extern int IcePing (
   IceConn ,
   IcePingReplyProc ,
   IcePointer
);

extern char *IceAllocScratch (
   IceConn ,
   unsigned long
);

extern int IceFlush (
   IceConn
);

extern int IceGetOutBufSize (
   IceConn
);

extern int IceGetInBufSize (
   IceConn
);

extern IceConnectStatus IceConnectionStatus (
    IceConn
);

extern char *IceVendor (
    IceConn
);

extern char *IceRelease (
    IceConn
);

extern int IceProtocolVersion (
    IceConn
);

extern int IceProtocolRevision (
    IceConn
);

extern int IceConnectionNumber (
    IceConn
);

extern char *IceConnectionString (
    IceConn
);

extern unsigned long IceLastSentSequenceNumber (
    IceConn
);

extern unsigned long IceLastReceivedSequenceNumber (
    IceConn
);

extern int IceSwapping (
    IceConn
);

extern IceErrorHandler IceSetErrorHandler (
    IceErrorHandler
);

extern IceIOErrorHandler IceSetIOErrorHandler (
    IceIOErrorHandler
);






extern int IceInitThreads (
    void
);

extern void IceAppLockConn (
    IceConn
);

extern void IceAppUnlockConn (
    IceConn
);


# 38 "C:/msys32/usr/X11R6/include/X11/SM/SMlib.h" 2






typedef IcePointer SmPointer;






typedef struct _SmcConn *SmcConn;
typedef struct _SmsConn *SmsConn;






typedef struct {
    int length;
    SmPointer value;
} SmPropValue;

typedef struct {
    char *name;
    char *type;
    int num_vals;
    SmPropValue *vals;
} SmProp;







typedef enum {
    SmcClosedNow,
    SmcClosedASAP,
    SmcConnectionInUse
} SmcCloseStatus;







typedef void (*SmcSaveYourselfProc) (
    SmcConn ,
    SmPointer ,
    int ,
    int ,
    int ,
    int
);

typedef void (*SmcSaveYourselfPhase2Proc) (
    SmcConn ,
    SmPointer
);

typedef void (*SmcInteractProc) (
    SmcConn ,
    SmPointer
);

typedef void (*SmcDieProc) (
    SmcConn ,
    SmPointer
);

typedef void (*SmcShutdownCancelledProc) (
    SmcConn ,
    SmPointer
);

typedef void (*SmcSaveCompleteProc) (
    SmcConn ,
    SmPointer
);

typedef void (*SmcPropReplyProc) (
    SmcConn ,
    SmPointer ,
    int ,
    SmProp **
);






typedef struct {

    struct {
 SmcSaveYourselfProc callback;
 SmPointer client_data;
    } save_yourself;

    struct {
 SmcDieProc callback;
 SmPointer client_data;
    } die;

    struct {
 SmcSaveCompleteProc callback;
 SmPointer client_data;
    } save_complete;

    struct {
 SmcShutdownCancelledProc callback;
 SmPointer client_data;
    } shutdown_cancelled;

} SmcCallbacks;
# 170 "C:/msys32/usr/X11R6/include/X11/SM/SMlib.h"
typedef int (*SmsRegisterClientProc) (
    SmsConn ,
    SmPointer ,
    char *
);

typedef void (*SmsInteractRequestProc) (
    SmsConn ,
    SmPointer ,
    int
);

typedef void (*SmsInteractDoneProc) (
    SmsConn ,
    SmPointer ,
    int
);

typedef void (*SmsSaveYourselfRequestProc) (
    SmsConn ,
    SmPointer ,
    int ,
    int ,
    int ,
    int ,
    int
);

typedef void (*SmsSaveYourselfPhase2RequestProc) (
    SmsConn ,
    SmPointer
);

typedef void (*SmsSaveYourselfDoneProc) (
    SmsConn ,
    SmPointer ,
    int
);

typedef void (*SmsCloseConnectionProc) (
    SmsConn ,
    SmPointer ,
    int ,
    char **
);

typedef void (*SmsSetPropertiesProc) (
    SmsConn ,
    SmPointer ,
    int ,
    SmProp **
);

typedef void (*SmsDeletePropertiesProc) (
    SmsConn ,
    SmPointer ,
    int ,
    char **
);

typedef void (*SmsGetPropertiesProc) (
    SmsConn ,
    SmPointer
);






typedef struct {

    struct {
 SmsRegisterClientProc callback;
 SmPointer manager_data;
    } register_client;

    struct {
 SmsInteractRequestProc callback;
 SmPointer manager_data;
    } interact_request;

    struct {
 SmsInteractDoneProc callback;
 SmPointer manager_data;
    } interact_done;

    struct {
 SmsSaveYourselfRequestProc callback;
 SmPointer manager_data;
    } save_yourself_request;

    struct {
 SmsSaveYourselfPhase2RequestProc callback;
 SmPointer manager_data;
    } save_yourself_phase2_request;

    struct {
 SmsSaveYourselfDoneProc callback;
 SmPointer manager_data;
    } save_yourself_done;

    struct {
 SmsCloseConnectionProc callback;
 SmPointer manager_data;
    } close_connection;

    struct {
 SmsSetPropertiesProc callback;
 SmPointer manager_data;
    } set_properties;

    struct {
 SmsDeletePropertiesProc callback;
 SmPointer manager_data;
    } delete_properties;

    struct {
 SmsGetPropertiesProc callback;
 SmPointer manager_data;
    } get_properties;

} SmsCallbacks;
# 308 "C:/msys32/usr/X11R6/include/X11/SM/SMlib.h"
typedef int (*SmsNewClientProc) (
    SmsConn ,
    SmPointer ,
    unsigned long * ,
    SmsCallbacks * ,
    char **
);







typedef void (*SmcErrorHandler) (
    SmcConn ,
    int ,
    int ,
    unsigned long ,
    int ,
    int ,
    SmPointer
);

typedef void (*SmsErrorHandler) (
    SmsConn ,
    int ,
    int ,
    unsigned long ,
    int ,
    int ,
    SmPointer
);









extern SmcConn SmcOpenConnection (
    char * ,
    SmPointer ,
    int ,
    int ,
    unsigned long ,
    SmcCallbacks * ,
    char * ,
    char ** ,
    int ,
    char *
);

extern SmcCloseStatus SmcCloseConnection (
    SmcConn ,
    int ,
    char **
);

extern void SmcModifyCallbacks (
    SmcConn ,
    unsigned long ,
    SmcCallbacks *
);

extern void SmcSetProperties (
    SmcConn ,
    int ,
    SmProp **
);

extern void SmcDeleteProperties (
    SmcConn ,
    int ,
    char **
);

extern int SmcGetProperties (
    SmcConn ,
    SmcPropReplyProc ,
    SmPointer
);

extern int SmcInteractRequest (
    SmcConn ,
    int ,
    SmcInteractProc ,
    SmPointer
);

extern void SmcInteractDone (
    SmcConn ,
    int
);

extern void SmcRequestSaveYourself (
    SmcConn ,
    int ,
    int ,
    int ,
    int ,
    int
);

extern int SmcRequestSaveYourselfPhase2 (
    SmcConn ,
    SmcSaveYourselfPhase2Proc ,
    SmPointer
);

extern void SmcSaveYourselfDone (
    SmcConn ,
    int
);

extern int SmcProtocolVersion (
    SmcConn
);

extern int SmcProtocolRevision (
    SmcConn
);

extern char *SmcVendor (
    SmcConn
);

extern char *SmcRelease (
    SmcConn
);

extern char *SmcClientID (
    SmcConn
);

extern IceConn SmcGetIceConnection (
    SmcConn
);

extern int SmsInitialize (
    char * ,
    char * ,
    SmsNewClientProc ,
    SmPointer ,
    IceHostBasedAuthProc ,
    int ,
    char *
);

extern char *SmsClientHostName (
    SmsConn
);

extern char *SmsGenerateClientID (
    SmsConn
);

extern int SmsRegisterClientReply (
    SmsConn ,
    char *
);

extern void SmsSaveYourself (
    SmsConn ,
    int ,
    int ,
    int ,
    int
);

extern void SmsSaveYourselfPhase2 (
    SmsConn
);

extern void SmsInteract (
    SmsConn
);

extern void SmsDie (
    SmsConn
);

extern void SmsSaveComplete (
    SmsConn
);

extern void SmsShutdownCancelled (
    SmsConn
);

extern void SmsReturnProperties (
    SmsConn ,
    int ,
    SmProp **
);

extern void SmsCleanUp (
    SmsConn
);

extern int SmsProtocolVersion (
    SmsConn
);

extern int SmsProtocolRevision (
    SmsConn
);

extern char *SmsClientID (
    SmsConn
);

extern IceConn SmsGetIceConnection (
    SmsConn
);

extern SmcErrorHandler SmcSetErrorHandler (
    SmcErrorHandler
);

extern SmsErrorHandler SmsSetErrorHandler (
    SmsErrorHandler
);

extern void SmFreeProperty (
    SmProp *
);

extern void SmFreeReasons (
    int ,
    char **
);


# 55 "C:/msys32/usr/X11R6/include/X11/Shell.h" 2
# 194 "C:/msys32/usr/X11R6/include/X11/Shell.h"
extern const char XtShellStrings[];
# 548 "C:/msys32/usr/X11R6/include/X11/Shell.h"
typedef struct _ShellClassRec *ShellWidgetClass;
typedef struct _OverrideShellClassRec *OverrideShellWidgetClass;
typedef struct _WMShellClassRec *WMShellWidgetClass;
typedef struct _TransientShellClassRec *TransientShellWidgetClass;
typedef struct _TopLevelShellClassRec *TopLevelShellWidgetClass;
typedef struct _ApplicationShellClassRec *ApplicationShellWidgetClass;
typedef struct _SessionShellClassRec *SessionShellWidgetClass;


extern WidgetClass shellWidgetClass;
extern WidgetClass overrideShellWidgetClass;
extern WidgetClass wmShellWidgetClass;
extern WidgetClass transientShellWidgetClass;
extern WidgetClass topLevelShellWidgetClass;
extern WidgetClass applicationShellWidgetClass;
extern WidgetClass sessionShellWidgetClass;
# 72 "extern.h" 2
# 1 "C:/msys32/usr/X11R6/include/X11/StringDefs.h" 1
# 321 "C:/msys32/usr/X11R6/include/X11/StringDefs.h"
extern const char XtStrings[];
# 73 "extern.h" 2

# 1 "C:/msys32/usr/X11R6/include/X11/extensions/multibuf.h" 1
# 106 "C:/msys32/usr/X11R6/include/X11/extensions/multibuf.h"
typedef XID Multibuffer;

typedef struct {
    int type;
    unsigned long serial;
    int send_event;
    Display *display;
    Multibuffer buffer;
    int state;
} XmbufClobberNotifyEvent;

typedef struct {
    int type;
    unsigned long serial;
    int send_event;
    Display *display;
    Multibuffer buffer;
} XmbufUpdateNotifyEvent;





typedef struct {
    int displayed_index;
    int update_action;
    int update_hint;
    int window_mode;
    int nbuffers;
    Multibuffer *buffers;
} XmbufWindowAttributes;




typedef struct {
    int update_hint;
} XmbufSetWindowAttributes;





typedef struct {
    Window window;
    unsigned long event_mask;
    int buffer_index;
    int side;
} XmbufBufferAttributes;




typedef struct {
    unsigned long event_mask;
} XmbufSetBufferAttributes;





typedef struct {
    VisualID visualid;
    int max_buffers;
    int depth;
} XmbufBufferInfo;



extern int XmbufQueryExtension(
    Display* ,
    int* ,
    int*
);

extern int XmbufGetVersion(
    Display* ,
    int* ,
    int*
);

extern int XmbufCreateBuffers(
    Display* ,
    Window ,
    int ,
    int ,
    int ,
    Multibuffer*
);

extern void XmbufDestroyBuffers(
    Display* ,
    Window
);

extern void XmbufDisplayBuffers(
    Display* ,
    int ,
    Multibuffer* ,
    int ,
    int
);

extern int XmbufGetWindowAttributes(
    Display* ,
    Window ,
    XmbufWindowAttributes*
);

extern void XmbufChangeWindowAttributes(
    Display* ,
    Window ,
    unsigned long ,
    XmbufSetWindowAttributes*
);

extern int XmbufGetBufferAttributes(
    Display* ,
    Multibuffer ,
    XmbufBufferAttributes*
);

extern void XmbufChangeBufferAttributes(
    Display* ,
    Multibuffer ,
    unsigned long ,
    XmbufSetBufferAttributes*
);

extern int XmbufGetScreenInfo(
    Display* ,
    Drawable ,
    int* ,
    XmbufBufferInfo** ,
    int* ,
    XmbufBufferInfo**
);

extern Window XmbufCreateStereoWindow(
    Display* ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    unsigned int ,
    int ,
    unsigned int ,
    Visual* ,
    unsigned long ,
    XSetWindowAttributes* ,
    Multibuffer* ,
    Multibuffer*
);

extern void XmbufClearBufferArea(
    Display* ,
    Multibuffer ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int
);


# 75 "extern.h" 2


# 1 "C:/msys32/usr/X11R6/include/X11/extensions/Xdbe.h" 1
# 42 "C:/msys32/usr/X11R6/include/X11/extensions/Xdbe.h"
# 1 "C:/msys32/usr/X11R6/include/X11/extensions/Xdbeproto.h" 1
# 87 "C:/msys32/usr/X11R6/include/X11/extensions/Xdbeproto.h"
typedef struct
{
    VisualID visual;
    int depth;
    int perflevel;
}
XdbeVisualInfo;

typedef struct
{
    int count;
    XdbeVisualInfo *visinfo;
}
XdbeScreenVisualInfo;
# 43 "C:/msys32/usr/X11R6/include/X11/extensions/Xdbe.h" 2
# 53 "C:/msys32/usr/X11R6/include/X11/extensions/Xdbe.h"
typedef Drawable XdbeBackBuffer;

typedef unsigned char XdbeSwapAction;

typedef struct
{
    Window swap_window;
    XdbeSwapAction swap_action;
}
XdbeSwapInfo;

typedef struct
{
    Window window;
}
XdbeBackBufferAttributes;

typedef struct
{
    int type;
    Display *display;
    XdbeBackBuffer buffer;
    unsigned long serial;
    unsigned char error_code;
    unsigned char request_code;
    unsigned char minor_code;
}
XdbeBufferError;






extern int XdbeQueryExtension(
    Display* ,
    int* ,
    int*
);

extern XdbeBackBuffer XdbeAllocateBackBufferName(
    Display* ,
    Window ,
    XdbeSwapAction
);

extern int XdbeDeallocateBackBufferName(
    Display* ,
    XdbeBackBuffer
);

extern int XdbeSwapBuffers(
    Display* ,
    XdbeSwapInfo* ,
    int
);

extern int XdbeBeginIdiom(
    Display*
);

extern int XdbeEndIdiom(
    Display*
);

extern XdbeScreenVisualInfo *XdbeGetVisualInfo(
    Display* ,
    Drawable* ,
    int*
);

extern void XdbeFreeVisualInfo(
    XdbeScreenVisualInfo*
);

extern XdbeBackBufferAttributes *XdbeGetBackBufferAttributes(
    Display* ,
    XdbeBackBuffer
);


# 78 "extern.h" 2




# 1 "C:/msys32/usr/X11R6/include/X11/Xaw/Label.h" 1
# 58 "C:/msys32/usr/X11R6/include/X11/Xaw/Label.h"
# 1 "C:/msys32/usr/X11R6/include/X11/Xaw/Simple.h" 1
# 54 "C:/msys32/usr/X11R6/include/X11/Xaw/Simple.h"
# 1 "C:/msys32/usr/X11R6/include/X11/Xmu/Converters.h" 1
# 42 "C:/msys32/usr/X11R6/include/X11/Xmu/Converters.h"


void XmuCvtFunctionToCallback
(
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal
 );
# 59 "C:/msys32/usr/X11R6/include/X11/Xmu/Converters.h"
void XmuCvtStringToBackingStore
(
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal
 );

Boolean XmuCvtBackingStoreToString
(
 Display *dpy,
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal,
 XtPointer *converter_data
 );

void XmuCvtStringToCursor
(
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal
 );




Boolean XmuCvtStringToColorCursor
(
 Display *dpy,
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal,
 XtPointer *converter_data
 );

typedef int XtGravity;
# 115 "C:/msys32/usr/X11R6/include/X11/Xmu/Converters.h"
void XmuCvtStringToGravity
(
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal
 );

Boolean XmuCvtGravityToString
(
 Display *dpy,
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal,
 XtPointer *converter_data
 );

typedef enum {
    XtJustifyLeft,
    XtJustifyCenter,
    XtJustifyRight
} XtJustify;
# 146 "C:/msys32/usr/X11R6/include/X11/Xmu/Converters.h"
void XmuCvtStringToJustify
(
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal
 );

Boolean XmuCvtJustifyToString
(
 Display *dpy,
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal,
 XtPointer *converter_data
 );


void XmuCvtStringToLong
(
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal
 );
Boolean XmuCvtLongToString
(
 Display *dpy,
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal,
 XtPointer *converter_data
 );

typedef enum {
  XtorientHorizontal,
  XtorientVertical
} XtOrientation;
void XmuCvtStringToOrientation
(
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal
 );

Boolean XmuCvtOrientationToString
(
 Display *dpy,
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal,
 XtPointer *converter_data
 );

void XmuCvtStringToBitmap
(
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal
 );
# 223 "C:/msys32/usr/X11R6/include/X11/Xmu/Converters.h"
Boolean XmuCvtStringToShapeStyle
(
 Display *dpy,
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal,
 XtPointer *converter_data
 );

Boolean XmuCvtShapeStyleToString
(
 Display *dpy,
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal,
 XtPointer *converter_data
 );

Boolean XmuReshapeWidget
(
 Widget w,
 int shape_style,
 int corner_width,
 int corner_height
 );

void XmuCvtStringToWidget
(
 XrmValue *args,
 Cardinal *num_args,
 XrmValuePtr fromVal,
 XrmValuePtr toVal
 );

Boolean XmuNewCvtStringToWidget
(
 Display *display,
 XrmValue *args,
 Cardinal *num_args,
 XrmValue *fromVal,
 XrmValue *toVal,
 XtPointer *converter_data
 );

Boolean XmuCvtWidgetToString
(
 Display *dpy,
 XrmValue *args,
 Cardinal *num_args,
 XrmValue *fromVal,
 XrmValue *toVal,
 XtPointer *converter_data
 );


# 55 "C:/msys32/usr/X11R6/include/X11/Xaw/Simple.h" 2
# 111 "C:/msys32/usr/X11R6/include/X11/Xaw/Simple.h"
typedef struct _SimpleClassRec *SimpleWidgetClass;
typedef struct _SimpleRec *SimpleWidget;

extern WidgetClass simpleWidgetClass;
# 59 "C:/msys32/usr/X11R6/include/X11/Xaw/Label.h" 2
# 130 "C:/msys32/usr/X11R6/include/X11/Xaw/Label.h"
extern WidgetClass labelWidgetClass;

typedef struct _LabelClassRec *LabelWidgetClass;
typedef struct _LabelRec *LabelWidget;
# 83 "extern.h" 2
# 135 "extern.h"
struct plHersheyFontInfoStruct
{
  const char *name;
  const char *othername;
  const char *orig_name;
  short chars[256];
  int typeface_index;
  int font_index;
  bool obliquing;
  bool iso8859_1;
  bool visible;
};

extern const struct plHersheyFontInfoStruct _pl_g_hershey_font_info[];
# 164 "extern.h"
struct plHersheyAccentedCharInfoStruct
{
  unsigned char composite, character, accent;
};

extern const struct plHersheyAccentedCharInfoStruct _pl_g_hershey_accented_char_info[];
# 182 "extern.h"
extern const char * const _pl_g_occidental_hershey_glyphs[];
extern const char * const _pl_g_oriental_hershey_glyphs[];
# 193 "extern.h"
struct plPSFontInfoStruct
{
  const char *ps_name;
  const char *ps_name_alt;
  const char *ps_name_alt2;
  const char *x_name;
  const char *x_name_alt;
  const char *x_name_alt2;
  const char *x_name_alt3;
  const char *css_family;
  const char *css_generic_family;
  const char *css_style;
  const char *css_weight;
  const char *css_stretch;
  const char *css_panose;
  int pcl_typeface;
  int hpgl_spacing;
  int hpgl_posture;
  int hpgl_stroke_weight;
  int hpgl_symbol_set;
  int font_ascent;
  int font_descent;
  int font_cap_height;
  int font_x_height;
  short width[256];
  short offset[256];
  int typeface_index;
  int font_index;
  int fig_id;
  bool iso8859_1;
};

extern const struct plPSFontInfoStruct _pl_g_ps_font_info[];






struct plPCLFontInfoStruct
{
  const char *ps_name;
  const char *ps_name_alt;
  const char *substitute_ps_name;
  const char *x_name;
  const char *css_family;
  const char *css_generic_family;
  const char *css_style;
  const char *css_weight;
  const char *css_stretch;
  const char *css_panose;
  int pcl_typeface;
  int hpgl_spacing;
  int hpgl_posture;
  int hpgl_stroke_weight;
  int hpgl_symbol_set;
  int font_ascent;
  int font_descent;
  int font_cap_height;
  int font_x_height;
  short width[256];
  short offset[256];
  int typeface_index;
  int font_index;
  bool iso8859_1;
};

extern const struct plPCLFontInfoStruct _pl_g_pcl_font_info[];






struct plStickFontInfoStruct
{
  const char *ps_name;
  bool basic;
  int pcl_typeface;
  int hpgl_spacing;
  int hpgl_posture;
  int hpgl_stroke_weight;
  int hpgl_symbol_set;
  int font_ascent;
  int font_descent;
  int raster_width_lower;
  int raster_height_lower;
  int raster_width_upper;
  int raster_height_upper;
  int hpgl_charset_lower;
  int hpgl_charset_upper;
  int kerning_table_lower;
  int kerning_table_upper;
  char width[256];
  int offset;
  int typeface_index;
  int font_index;
  bool obliquing;
  bool iso8859_1;
};

extern const struct plStickFontInfoStruct _pl_g_stick_font_info[];







struct plStickCharSpacingTableStruct
{
  int rows, cols;
  const short *kerns;
};

extern const struct plStickCharSpacingTableStruct _pl_g_stick_spacing_tables[];





struct plStickFontSpacingTableStruct
{
  int spacing_table;
  char row[128], col[128];
};

extern const struct plStickFontSpacingTableStruct _pl_g_stick_kerning_tables[];
# 329 "extern.h"
struct plTypefaceInfoStruct
{
  int numfonts;
  int fonts[10];
};

extern const struct plTypefaceInfoStruct _pl_g_hershey_typeface_info[];
extern const struct plTypefaceInfoStruct _pl_g_ps_typeface_info[];
extern const struct plTypefaceInfoStruct _pl_g_pcl_typeface_info[];
extern const struct plTypefaceInfoStruct _pl_g_stick_typeface_info[];
# 347 "extern.h"
typedef plPoint plVector;
typedef plIntPoint plIntVector;
# 393 "extern.h"
typedef struct
{
  const char *name;
  int type;
  int dash_array_len;
  int dash_array[8];
} plLineStyle;

extern const plLineStyle _pl_g_line_styles[7];
# 434 "extern.h"
enum { DISP_MODEL_PHYSICAL, DISP_MODEL_VIRTUAL };
# 448 "extern.h"
enum { DISP_DEVICE_COORS_REAL, DISP_DEVICE_COORS_INTEGER_LIBXMI, DISP_DEVICE_COORS_INTEGER_NON_LIBXMI };
# 594 "extern.h"
extern const plColor _pl_t_kermit_stdcolors[16];
extern const char * const _pl_t_kermit_fgcolor_escapes[16];
extern const char * const _pl_t_kermit_bgcolor_escapes[16];
# 755 "extern.h"
extern const int _pl_f_fig_line_style[7];
# 768 "extern.h"
extern const int _pl_f_fig_join_style[4];
extern const int _pl_f_fig_cap_style[4];
# 778 "extern.h"
extern const plColor _pl_f_fig_stdcolors[32];
# 953 "extern.h"
extern const int _pl_g_ps_font_to_cgm_font_id[35];
extern const int _pl_g_cgm_font_id_to_ps_font[35];


typedef struct
{
  const char *family;
  const char *extra_style;
  const char *style;
  int posture;
  int weight;
  int proportionate_width;
  int design_group[3];
  int structure;
} plCGMFontProperties;

extern const plCGMFontProperties _pl_g_cgm_font_properties[35];


typedef struct plCGMCustomLineTypeStruct
{
  int *dashes;
  int dash_array_len;
  struct plCGMCustomLineTypeStruct *next;
} plCGMCustomLineType;
# 1010 "extern.h"
extern const plColor _pl_p_idraw_stdcolors[12];
extern const char * const _pl_p_idraw_stdcolornames[12];




extern const double _pl_p_idraw_stdshadings[5];
# 1085 "extern.h"
extern const plDrawState _default_drawstate;
# 1102 "extern.h"
extern Plotter **_plotters;
extern int _plotters_len;

extern Plotter **_xplotters;
extern int _xplotters_len;
# 1118 "extern.h"
extern const Plotter _pl_g_default_plotter, _pl_b_default_plotter, _pl_m_default_plotter, _pl_r_default_plotter, _pl_t_default_plotter, _pl_h_default_plotter, _pl_q_default_plotter, _pl_f_default_plotter, _pl_c_default_plotter, _pl_p_default_plotter, _pl_a_default_plotter, _pl_s_default_plotter, _pl_i_default_plotter, _pl_n_default_plotter, _pl_z_default_plotter, _pl_x_default_plotter, _pl_y_default_plotter;



extern const PlotterParams _default_plotter_params;




struct plParamRecord
{
  const char *parameter;
  void * default_value;
  bool is_string;
};

extern const struct plParamRecord _known_params[33];
# 1143 "extern.h"
extern PlotterParams *_old_api_global_plotter_params;
# 1157 "extern.h"
extern void * _pl_xcalloc (size_t nmemb, size_t size);
extern void * _pl_xmalloc (size_t size);
extern void * _pl_xrealloc (void * p, size_t size);



extern plPoint _truecenter (plPoint p0, plPoint p1, plPoint pc);
extern plVector *_vscale (plVector *v, double newlen);
extern double _angle_of_arc (plPoint p0, plPoint p1, plPoint pc);
extern double _matrix_norm (const double m[6]);
extern double _xatan2 (double y, double x);
extern int _clip_line (double *x0_p, double *y0_p, double *x1_p, double *y1_p, double x_min_clip, double x_max_clip, double y_min_clip, double y_max_clip);
extern int _codestring_len (const unsigned short *codestring);
extern int _grayscale_approx (int red, int green, int blue);
extern void _matrix_product (const double m[6], const double n[6], double product[6]);
extern void _matrix_inverse (const double m[6], double inverse[6]);
extern void _matrix_sing_vals (const double m[6], double *min_sing_val, double *max_sing_val);
extern void _set_common_mi_attributes (plDrawState *drawstate, void * ptr);
extern void * _get_default_plot_param (const char *parameter);



extern void _write_byte (const plPlotterData *data, unsigned char c);
extern void _write_bytes (const plPlotterData *data, int n, const unsigned char *c);
extern void _write_string (const plPlotterData *data, const char *s);

extern bool _compute_ndc_to_device_map (plPlotterData *data);
extern void _set_page_type (plPlotterData *data);
extern void * _get_plot_param (const plPlotterData *data, const char *parameter);


extern plPath * _flatten_path (const plPath *path);
extern plPath * _new_plPath (void);
extern plPath ** _merge_paths (const plPath **paths, int num_paths);
extern void _add_arc (plPath *path, plPoint pc, plPoint p1);
extern void _add_arc_as_bezier3 (plPath *path, plPoint pc, plPoint p1);
extern void _add_arc_as_lines (plPath *path, plPoint pc, plPoint p1);
extern void _add_bezier2 (plPath *path, plPoint pc, plPoint p);
extern void _add_bezier2_as_lines (plPath *path, plPoint pc, plPoint p);
extern void _add_bezier3 (plPath *path, plPoint pc, plPoint pd, plPoint p);
extern void _add_bezier3_as_lines (plPath *path, plPoint pc, plPoint pd, plPoint p);
extern void _add_box (plPath *path, plPoint p0, plPoint p1, bool clockwise);
extern void _add_box_as_lines (plPath *path, plPoint p0, plPoint p1, bool clockwise);
extern void _add_circle (plPath *path, plPoint pc, double radius, bool clockwise);
extern void _add_circle_as_bezier3s (plPath *path, plPoint pc, double radius, bool clockwise);
extern void _add_circle_as_ellarcs (plPath *path, plPoint pc, double radius, bool clockwise);
extern void _add_circle_as_lines (plPath *path, plPoint pc, double radius, bool clockwise);
extern void _add_ellarc (plPath *path, plPoint pc, plPoint p1);
extern void _add_ellarc_as_bezier3 (plPath *path, plPoint pc, plPoint p1);
extern void _add_ellarc_as_lines (plPath *path, plPoint pc, plPoint p1);
extern void _add_ellipse (plPath *path, plPoint pc, double rx, double ry, double angle, bool clockwise);
extern void _add_ellipse_as_bezier3s (plPath *path, plPoint pc, double rx, double ry, double angle, bool clockwise);
extern void _add_ellipse_as_ellarcs (plPath *path, plPoint pc, double rx, double ry, double angle, bool clockwise);
extern void _add_ellipse_as_lines (plPath *path, plPoint pc, double rx, double ry, double angle, bool clockwise);
extern void _add_line (plPath *path, plPoint p);
extern void _add_moveto (plPath *path, plPoint p);
extern void _delete_plPath (plPath *path);
extern void _reset_plPath (plPath *path);


extern plOutbuf * _new_outbuf (void);
extern void _bbox_of_outbuf (plOutbuf *bufp, double *xmin, double *xmax, double *ymin, double *ymax);
extern void _bbox_of_outbufs (plOutbuf *bufp, double *xmin, double *xmax, double *ymin, double *ymax);
extern void _delete_outbuf (plOutbuf *outbuf);
extern void _freeze_outbuf (plOutbuf *outbuf);
extern void _reset_outbuf (plOutbuf *outbuf);
extern void _update_bbox (plOutbuf *bufp, double x, double y);
extern void _update_buffer (plOutbuf *outbuf);
extern void _update_buffer_by_added_bytes (plOutbuf *outbuf, int additional);



extern void _set_bezier2_bbox (plOutbuf *bufp, double x0, double y0, double x1, double y1, double x2, double y2, double device_line_width, double m[6]);
extern void _set_bezier3_bbox (plOutbuf *bufp, double x0, double y0, double x1, double y1, double x2, double y2, double x3, double y3, double device_line_width, double m[6]);
extern void _set_ellipse_bbox (plOutbuf *bufp, double x, double y, double rx, double ry, double costheta, double sintheta, double linewidth, double m[6]);
extern void _set_line_end_bbox (plOutbuf *bufp, double x, double y, double xother, double yother, double linewidth, int capstyle, double m[6]);
extern void _set_line_join_bbox (plOutbuf *bufp, double xleft, double yleft, double x, double y, double xright, double yright, double linewidth, int joinstyle, double miterlimit, double m[6]);



extern void _cgm_emit_command_header (plOutbuf *outbuf, int cgm_encoding, int element_class, int id, int data_len, int *byte_count, const char *op_code);
extern void _cgm_emit_color_component (plOutbuf *outbuf, bool no_partitioning, int cgm_encoding, unsigned int x, int data_len, int *data_byte_count, int *byte_count);
extern void _cgm_emit_enum (plOutbuf *outbuf, bool no_partitioning, int cgm_encoding, int x, int data_len, int *data_byte_count, int *byte_count, const char *text_string);
extern void _cgm_emit_index (plOutbuf *outbuf, bool no_partitioning, int cgm_encoding, int x, int data_len, int *data_byte_count, int *byte_count);
extern void _cgm_emit_integer (plOutbuf *outbuf, bool no_partitioning, int cgm_encoding, int x, int data_len, int *data_byte_count, int *byte_count);
extern void _cgm_emit_point (plOutbuf *outbuf, bool no_partitioning, int cgm_encoding, int x, int y, int data_len, int *data_byte_count, int *byte_count);
extern void _cgm_emit_points (plOutbuf *outbuf, bool no_partitioning, int cgm_encoding, const int *x, const int *y, int npoints, int data_len, int *data_byte_count, int *byte_count);
extern void _cgm_emit_real_fixed_point (plOutbuf *outbuf, bool no_partitioning, int cgm_encoding, double x, int data_len, int *data_byte_count, int *byte_count);
extern void _cgm_emit_real_floating_point (plOutbuf *outbuf, bool no_partitioning, int cgm_encoding, double x, int data_len, int *data_byte_count, int *byte_count);
extern void _cgm_emit_string (plOutbuf *outbuf, bool no_partitioning, int cgm_encoding, const char *s, int string_length, bool use_double_quotes, int data_len, int *data_byte_count, int *byte_count);
extern void _cgm_emit_unsigned_integer (plOutbuf *outbuf, bool no_partitioning, int cgm_encoding, unsigned int x, int data_len, int *data_byte_count, int *byte_count);
extern void _cgm_emit_unsigned_integer_8bit (plOutbuf *outbuf, bool no_partitioning, int cgm_encoding, unsigned int x, int data_len, int *data_byte_count, int *byte_count);
extern void _cgm_emit_command_terminator (plOutbuf *outbuf, int cgm_encoding, int *byte_count);


extern const char * _libplot_color_to_svg_color (plColor color_48, char charbuf[8]);


extern bool _string_to_color (const char *name, plColor *color_p, plColorNameCache *color_name_cache);
extern plColorNameCache * _create_color_name_cache (void);
extern void _delete_color_name_cache (plColorNameCache *color_cache);
# 1353 "extern.h"
extern int _maybe_output_image (Plotter *_plotter);
extern void _maybe_switch_to_hpgl (Plotter *_plotter);
extern void _maybe_switch_from_hpgl (Plotter *_plotter);

extern void _maybe_get_new_colormap (Plotter *_plotter);
extern void _maybe_handle_x_events (Plotter *_plotter);
# 1497 "extern.h"

extern FILE* pl_outfile_r (Plotter *_plotter, FILE* newstream);
extern double pl_ffontname_r (Plotter *_plotter, const char *s);
extern double pl_ffontsize_r (Plotter *_plotter, double size);
extern double pl_flabelwidth_r (Plotter *_plotter, const char *s);
extern double pl_ftextangle_r (Plotter *_plotter, double angle);
extern int pl_alabel_r (Plotter *_plotter, int x_justify, int y_justify, const char *s);
extern int pl_arc_r (Plotter *_plotter, int xc, int yc, int x0, int y0, int x1, int y1);
extern int pl_arcrel_r (Plotter *_plotter, int dxc, int dyc, int dx0, int dy0, int dx1, int dy1);
extern int pl_bezier2_r (Plotter *_plotter, int x0, int y0, int x1, int y1, int x2, int y2);
extern int pl_bezier2rel_r (Plotter *_plotter, int dx0, int dy0, int dx1, int dy1, int dx2, int dy2);
extern int pl_bezier3_r (Plotter *_plotter, int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
extern int pl_bezier3rel_r (Plotter *_plotter, int dx0, int dy0, int dx1, int dy1, int dx2, int dy2, int dx3, int dy3);
extern int pl_bgcolor_r (Plotter *_plotter, int red, int green, int blue);
extern int pl_bgcolorname_r (Plotter *_plotter, const char *name);
extern int pl_box_r (Plotter *_plotter, int x0, int y0, int x1, int y1);
extern int pl_boxrel_r (Plotter *_plotter, int dx0, int dy0, int dx1, int dy1);
extern int pl_capmod_r (Plotter *_plotter, const char *s);
extern int pl_circle_r (Plotter *_plotter, int x, int y, int r);
extern int pl_circlerel_r (Plotter *_plotter, int dx, int dy, int r);
extern int pl_closepath_r (Plotter *_plotter);
extern int pl_closepl_r (Plotter *_plotter);
extern int pl_color_r (Plotter *_plotter, int red, int green, int blue);
extern int pl_colorname_r (Plotter *_plotter, const char *name);
extern int pl_cont_r (Plotter *_plotter, int x, int y);
extern int pl_contrel_r (Plotter *_plotter, int x, int y);
extern int pl_ellarc_r (Plotter *_plotter, int xc, int yc, int x0, int y0, int x1, int y1);
extern int pl_ellarcrel_r (Plotter *_plotter, int dxc, int dyc, int dx0, int dy0, int dx1, int dy1);
extern int pl_ellipse_r (Plotter *_plotter, int x, int y, int rx, int ry, int angle);
extern int pl_ellipserel_r (Plotter *_plotter, int dx, int dy, int rx, int ry, int angle);
extern int pl_endpath_r (Plotter *_plotter);
extern int pl_endsubpath_r (Plotter *_plotter);
extern int pl_erase_r (Plotter *_plotter);
extern int pl_farc_r (Plotter *_plotter, double xc, double yc, double x0, double y0, double x1, double y1);
extern int pl_farcrel_r (Plotter *_plotter, double dxc, double dyc, double dx0, double dy0, double dx1, double dy1);
extern int pl_fbezier2_r (Plotter *_plotter, double x0, double y0, double x1, double y1, double x2, double y2);
extern int pl_fbezier2rel_r (Plotter *_plotter, double dx0, double dy0, double dx1, double dy1, double dx2, double dy2);
extern int pl_fbezier3_r (Plotter *_plotter, double x0, double y0, double x1, double y1, double x2, double y2, double x3, double y3);
extern int pl_fbezier3rel_r (Plotter *_plotter, double dx0, double dy0, double dx1, double dy1, double dx2, double dy2, double dx3, double dy3);
extern int pl_fbox_r (Plotter *_plotter, double x0, double y0, double x1, double y1);
extern int pl_fboxrel_r (Plotter *_plotter, double dx0, double dy0, double dx1, double dy1);
extern int pl_fcircle_r (Plotter *_plotter, double x, double y, double r);
extern int pl_fcirclerel_r (Plotter *_plotter, double dx, double dy, double r);
extern int pl_fconcat_r (Plotter *_plotter, double m0, double m1, double m2, double m3, double m4, double m5);
extern int pl_fcont_r (Plotter *_plotter, double x, double y);
extern int pl_fcontrel_r (Plotter *_plotter, double x, double y);
extern int pl_fellarc_r (Plotter *_plotter, double xc, double yc, double x0, double y0, double x1, double y1);
extern int pl_fellarcrel_r (Plotter *_plotter, double dxc, double dyc, double dx0, double dy0, double dx1, double dy1);
extern int pl_fellipse_r (Plotter *_plotter, double x, double y, double rx, double ry, double angle);
extern int pl_fellipserel_r (Plotter *_plotter, double dx, double dy, double rx, double ry, double angle);
extern int pl_fillcolor_r (Plotter *_plotter, int red, int green, int blue);
extern int pl_fillcolorname_r (Plotter *_plotter, const char *name);
extern int pl_fillmod_r (Plotter *_plotter, const char *s);
extern int pl_filltype_r (Plotter *_plotter, int level);
extern int pl_fline_r (Plotter *_plotter, double x0, double y0, double x1, double y1);
extern int pl_flinedash_r (Plotter *_plotter, int n, const double *dashes, double offset);
extern int pl_flinerel_r (Plotter *_plotter, double dx0, double dy0, double dx1, double dy1);
extern int pl_flinewidth_r (Plotter *_plotter, double size);
extern int pl_flushpl_r (Plotter *_plotter);
extern int pl_fmarker_r (Plotter *_plotter, double x, double y, int type, double size);
extern int pl_fmarkerrel_r (Plotter *_plotter, double dx, double dy, int type, double size);
extern int pl_fmiterlimit_r (Plotter *_plotter, double limit);
extern int pl_fmove_r (Plotter *_plotter, double x, double y);
extern int pl_fmoverel_r (Plotter *_plotter, double x, double y);
extern int pl_fontname_r (Plotter *_plotter, const char *s);
extern int pl_fontsize_r (Plotter *_plotter, int size);
extern int pl_fpoint_r (Plotter *_plotter, double x, double y);
extern int pl_fpointrel_r (Plotter *_plotter, double dx, double dy);
extern int pl_frotate_r (Plotter *_plotter, double theta);
extern int pl_fscale_r (Plotter *_plotter, double x, double y);
extern int pl_fsetmatrix_r (Plotter *_plotter, double m0, double m1, double m2, double m3, double m4, double m5);
extern int pl_fspace_r (Plotter *_plotter, double x0, double y0, double x1, double y1);
extern int pl_fspace2_r (Plotter *_plotter, double x0, double y0, double x1, double y1, double x2, double y2);
extern int pl_ftranslate_r (Plotter *_plotter, double x, double y);
extern int pl_havecap_r (Plotter *_plotter, const char *s);
extern int pl_joinmod_r (Plotter *_plotter, const char *s);
extern int pl_label_r (Plotter *_plotter, const char *s);
extern int pl_labelwidth_r (Plotter *_plotter, const char *s);
extern int pl_line_r (Plotter *_plotter, int x0, int y0, int x1, int y1);
extern int pl_linedash_r (Plotter *_plotter, int n, const int *dashes, int offset);
extern int pl_linemod_r (Plotter *_plotter, const char *s);
extern int pl_linerel_r (Plotter *_plotter, int dx0, int dy0, int dx1, int dy1);
extern int pl_linewidth_r (Plotter *_plotter, int size);
extern int pl_marker_r (Plotter *_plotter, int x, int y, int type, int size);
extern int pl_markerrel_r (Plotter *_plotter, int dx, int dy, int type, int size);
extern int pl_move_r (Plotter *_plotter, int x, int y);
extern int pl_moverel_r (Plotter *_plotter, int x, int y);
extern int pl_openpl_r (Plotter *_plotter);
extern int pl_orientation_r (Plotter *_plotter, int direction);
extern int pl_pencolor_r (Plotter *_plotter, int red, int green, int blue);
extern int pl_pencolorname_r (Plotter *_plotter, const char *name);
extern int pl_pentype_r (Plotter *_plotter, int level);
extern int pl_point_r (Plotter *_plotter, int x, int y);
extern int pl_pointrel_r (Plotter *_plotter, int dx, int dy);
extern int pl_restorestate_r (Plotter *_plotter);
extern int pl_savestate_r (Plotter *_plotter);
extern int pl_space_r (Plotter *_plotter, int x0, int y0, int x1, int y1);
extern int pl_space2_r (Plotter *_plotter, int x0, int y0, int x1, int y1, int x2, int y2);
extern int pl_textangle_r (Plotter *_plotter, int angle);

extern bool _pl_g_begin_page (Plotter *_plotter);
extern bool _pl_g_end_page (Plotter *_plotter);
extern bool _pl_g_erase_page (Plotter *_plotter);
extern bool _pl_g_flush_output (Plotter *_plotter);
extern bool _pl_g_paint_marker (Plotter *_plotter, int type, double size);
extern bool _pl_g_paint_paths (Plotter *_plotter);
extern bool _pl_g_path_is_flushable (Plotter *_plotter);
extern bool _pl_g_retrieve_font (Plotter *_plotter);
extern double _pl_g_get_text_width (Plotter *_plotter, const unsigned char *s);
extern double _pl_g_paint_text_string (Plotter *_plotter, const unsigned char *s, int x_justify, int y_justify);
extern void _pl_g_error (Plotter *_plotter, const char *msg);
extern void _pl_g_initialize (Plotter *_plotter);
extern void _pl_g_maybe_prepaint_segments (Plotter *_plotter, int prev_num_segments);
extern void _pl_g_paint_path (Plotter *_plotter);
extern void _pl_g_paint_point (Plotter *_plotter);
extern void _pl_g_paint_text_string_with_escapes (Plotter *_plotter, const unsigned char *s, int x_justify, int y_justify);
extern void _pl_g_pop_state (Plotter *_plotter);
extern void _pl_g_push_state (Plotter *_plotter);
extern void _pl_g_terminate (Plotter *_plotter);
extern void _pl_g_warning (Plotter *_plotter, const char *msg);


extern void * _pl_get_hershey_font_info (Plotter *_plotter);
extern void * _pl_get_ps_font_info (Plotter *_plotter);
extern void * _pl_get_pcl_font_info (Plotter *_plotter);
extern void * _pl_get_stick_font_info (Plotter *_plotter);


extern double _pl_g_alabel_hershey (Plotter *_plotter, const unsigned char *s, int x_justify, int y_justify);
extern double _pl_g_flabelwidth_hershey (Plotter *_plotter, const unsigned char *s);
extern void _pl_g_draw_hershey_glyph (Plotter *_plotter, int num, double charsize, int type, bool oblique);
extern void _pl_g_draw_hershey_penup_stroke (Plotter *_plotter, double dx, double dy, double charsize, bool oblique);
extern void _pl_g_draw_hershey_string (Plotter *_plotter, const unsigned short *string);
extern void _pl_g_draw_hershey_stroke (Plotter *_plotter, bool pendown, double deltax, double deltay);

extern double _pl_g_render_non_hershey_string (Plotter *_plotter, const char *s, bool do_render, int x_justify, int y_justify);
extern double _pl_g_render_simple_string (Plotter *_plotter, const unsigned char *s, bool do_render, int h_just, int v_just);
extern unsigned short * _pl_g_controlify (Plotter *_plotter, const unsigned char *);
extern void _pl_g_copy_params_to_plotter (Plotter *_plotter, const PlotterParams *params);
extern void _pl_g_create_first_drawing_state (Plotter *_plotter);
extern void _pl_g_delete_first_drawing_state (Plotter *_plotter);
extern void _pl_g_free_params_in_plotter (Plotter *_plotter);
extern void _pl_g_maybe_replace_arc (Plotter *_plotter);
extern void _pl_g_set_font (Plotter *_plotter);

extern void _pl_g_flush_plotter_outstreams (Plotter *_plotter);

# 1796 "extern.h"


extern bool _pl_m_begin_page (Plotter *_plotter);
extern bool _pl_m_end_page (Plotter *_plotter);
extern bool _pl_m_erase_page (Plotter *_plotter);
extern bool _pl_m_paint_marker (Plotter *_plotter, int type, double size);
extern bool _pl_m_paint_paths (Plotter *_plotter);
extern bool _pl_m_path_is_flushable (Plotter *_plotter);
extern void _pl_m_initialize (Plotter *_plotter);
extern void _pl_m_maybe_prepaint_segments (Plotter *_plotter, int prev_num_segments);
extern void _pl_m_paint_path (Plotter *_plotter);
extern void _pl_m_paint_point (Plotter *_plotter);
extern void _pl_m_paint_text_string_with_escapes (Plotter *_plotter, const unsigned char *s, int h_just, int v_just);
extern void _pl_m_terminate (Plotter *_plotter);

extern void _pl_m_emit_integer (Plotter *_plotter, int x);
extern void _pl_m_emit_float (Plotter *_plotter, double x);
extern void _pl_m_emit_op_code (Plotter *_plotter, int c);
extern void _pl_m_emit_string (Plotter *_plotter, const char *s);
extern void _pl_m_emit_terminator (Plotter *_plotter);
extern void _pl_m_paint_path_internal (Plotter *_plotter, const plPath *path);
extern void _pl_m_set_attributes (Plotter *_plotter, unsigned int mask);

# 1844 "extern.h"


extern bool _pl_b_begin_page (Plotter *_plotter);
extern bool _pl_b_end_page (Plotter *_plotter);
extern bool _pl_b_erase_page (Plotter *_plotter);
extern bool _pl_b_paint_paths (Plotter *_plotter);
extern void _pl_b_initialize (Plotter *_plotter);
extern void _pl_b_paint_path (Plotter *_plotter);
extern void _pl_b_paint_point (Plotter *_plotter);
extern void _pl_b_terminate (Plotter *_plotter);

extern int _pl_b_maybe_output_image (Plotter *_plotter);

extern void _pl_b_delete_image (Plotter *_plotter);
extern void _pl_b_draw_elliptic_arc (Plotter *_plotter, plPoint p0, plPoint p1, plPoint pc);
extern void _pl_b_draw_elliptic_arc_2 (Plotter *_plotter, plPoint p0, plPoint p1, plPoint pc);
extern void _pl_b_draw_elliptic_arc_internal (Plotter *_plotter, int xorigin, int yorigin, unsigned int squaresize_x, unsigned int squaresize_y, int startangle, int anglerange);
extern void _pl_b_new_image (Plotter *_plotter);

# 1884 "extern.h"


extern bool _pl_t_begin_page (Plotter *_plotter);
extern bool _pl_t_end_page (Plotter *_plotter);
extern bool _pl_t_erase_page (Plotter *_plotter);
extern bool _pl_t_path_is_flushable (Plotter *_plotter);
extern void _pl_t_initialize (Plotter *_plotter);
extern void _pl_t_maybe_prepaint_segments (Plotter *_plotter, int prev_num_segments);
extern void _pl_t_paint_point (Plotter *_plotter);
extern void _pl_t_terminate (Plotter *_plotter);

extern void _pl_t_set_attributes (Plotter *_plotter);
extern void _pl_t_set_bg_color (Plotter *_plotter);
extern void _pl_t_set_pen_color (Plotter *_plotter);
extern void _pl_t_tek_mode (Plotter *_plotter, int newmode);
extern void _pl_t_tek_move (Plotter *_plotter, int xx, int yy);
extern void _pl_t_tek_vector_compressed (Plotter *_plotter, int xx, int yy, int oldxx, int oldyy, bool force);
extern void _pl_t_tek_vector (Plotter *_plotter, int xx, int yy);

# 1924 "extern.h"


extern bool _pl_r_begin_page (Plotter *_plotter);
extern bool _pl_r_end_page (Plotter *_plotter);
extern bool _pl_r_erase_page (Plotter *_plotter);
extern bool _pl_r_paint_paths (Plotter *_plotter);
extern bool _pl_r_path_is_flushable (Plotter *_plotter);
extern void _pl_r_initialize (Plotter *_plotter);
extern void _pl_r_maybe_prepaint_segments (Plotter *_plotter, int prev_num_segments);
extern void _pl_r_paint_path (Plotter *_plotter);
extern void _pl_r_paint_point (Plotter *_plotter);
extern void _pl_r_terminate (Plotter *_plotter);

extern void _pl_r_regis_move (Plotter *_plotter, int xx, int yy);
extern void _pl_r_set_attributes (Plotter *_plotter);
extern void _pl_r_set_bg_color (Plotter *_plotter);
extern void _pl_r_set_fill_color (Plotter *_plotter);
extern void _pl_r_set_pen_color (Plotter *_plotter);

# 1964 "extern.h"


extern bool _pl_h_begin_page (Plotter *_plotter);
extern bool _pl_h_end_page (Plotter *_plotter);
extern bool _pl_h_erase_page (Plotter *_plotter);
extern bool _pl_h_paint_paths (Plotter *_plotter);
extern double _pl_h_paint_text_string (Plotter *_plotter, const unsigned char *s, int h_just, int v_just);
extern void _pl_h_paint_point (Plotter *_plotter);
extern void _pl_h_paint_path (Plotter *_plotter);

extern void _pl_h_initialize (Plotter *_plotter);
extern void _pl_h_terminate (Plotter *_plotter);

extern void _pl_q_initialize (Plotter *_plotter);
extern void _pl_q_terminate (Plotter *_plotter);

extern bool _pl_h_hpgl2_maybe_update_font (Plotter *_plotter);
extern bool _pl_h_hpgl_maybe_update_font (Plotter *_plotter);
extern bool _pl_h_parse_pen_string (Plotter *_plotter, const char *pen_s);
extern int _pl_h_hpgl_pseudocolor (Plotter *_plotter, int red, int green, int blue, bool restrict_white);
extern void _pl_h_hpgl_shaded_pseudocolor (Plotter *_plotter, int red, int green, int blue, int *pen, double *shading);
extern void _pl_h_set_attributes (Plotter *_plotter);
extern void _pl_h_set_fill_color (Plotter *_plotter, bool force_pen_color);
extern void _pl_h_set_font (Plotter *_plotter);
extern void _pl_h_set_hpgl_fill_type (Plotter *_plotter, int fill_type, double option1, double option2);
extern void _pl_h_set_hpgl_pen (Plotter *_plotter, int pen);
extern void _pl_h_set_hpgl_pen_type (Plotter *_plotter, int pen_type, double option1, double option2);
extern void _pl_h_set_pen_color (Plotter *_plotter, int hpgl_object_type);
extern void _pl_h_set_position (Plotter *_plotter);

extern void _pl_h_maybe_switch_to_hpgl (Plotter *_plotter);
extern void _pl_h_maybe_switch_from_hpgl (Plotter *_plotter);

extern void _pl_q_maybe_switch_to_hpgl (Plotter *_plotter);
extern void _pl_q_maybe_switch_from_hpgl (Plotter *_plotter);

# 2038 "extern.h"


extern bool _pl_f_begin_page (Plotter *_plotter);
extern bool _pl_f_end_page (Plotter *_plotter);
extern bool _pl_f_erase_page (Plotter *_plotter);
extern bool _pl_f_paint_paths (Plotter *_plotter);
extern bool _pl_f_retrieve_font (Plotter *_plotter);
extern double _pl_f_paint_text_string (Plotter *_plotter, const unsigned char *s, int h_just, int v_just);
extern void _pl_f_initialize (Plotter *_plotter);
extern void _pl_f_paint_path (Plotter *_plotter);
extern void _pl_f_paint_point (Plotter *_plotter);
extern void _pl_f_terminate (Plotter *_plotter);

extern int _pl_f_fig_color (Plotter *_plotter, int red, int green, int blue);
extern void _pl_f_compute_line_style (Plotter *_plotter, int *style, double *spacing);
extern void _pl_f_draw_arc_internal (Plotter *_plotter, double xc, double yc, double x0, double y0, double x1, double y1);
extern void _pl_f_draw_box_internal (Plotter *_plotter, plPoint p0, plPoint p1);
extern void _pl_f_draw_ellipse_internal (Plotter *_plotter, double x, double y, double rx, double ry, double angle, int subtype);
extern void _pl_f_set_fill_color (Plotter *_plotter);
extern void _pl_f_set_pen_color (Plotter *_plotter);

# 2082 "extern.h"


extern bool _pl_c_begin_page (Plotter *_plotter);
extern bool _pl_c_end_page (Plotter *_plotter);
extern bool _pl_c_erase_page (Plotter *_plotter);
extern bool _pl_c_paint_marker (Plotter *_plotter, int type, double size);
extern bool _pl_c_paint_paths (Plotter *_plotter);
extern double _pl_c_paint_text_string (Plotter *_plotter, const unsigned char *s, int h_just, int v_just);
extern void _pl_c_initialize (Plotter *_plotter);
extern void _pl_c_paint_path (Plotter *_plotter);
extern void _pl_c_paint_point (Plotter *_plotter);
extern void _pl_c_terminate (Plotter *_plotter);

extern void _pl_c_set_attributes (Plotter *_plotter, int cgm_object_type);
extern void _pl_c_set_bg_color (Plotter *_plotter);
extern void _pl_c_set_fill_color (Plotter *_plotter, int cgm_object_type);
extern void _pl_c_set_pen_color (Plotter *_plotter, int cgm_object_type);

# 2120 "extern.h"


extern bool _pl_p_begin_page (Plotter *_plotter);
extern bool _pl_p_end_page (Plotter *_plotter);
extern bool _pl_p_erase_page (Plotter *_plotter);
extern bool _pl_p_paint_paths (Plotter *_plotter);
extern double _pl_p_paint_text_string (Plotter *_plotter, const unsigned char *s, int h_just, int v_just);
extern void _pl_p_initialize (Plotter *_plotter);
extern void _pl_p_paint_path (Plotter *_plotter);
extern void _pl_p_paint_point (Plotter *_plotter);
extern void _pl_p_terminate (Plotter *_plotter);

extern double _pl_p_emit_common_attributes (Plotter *_plotter);
extern void _pl_p_compute_idraw_bgcolor (Plotter *_plotter);
extern void _pl_p_fellipse_internal (Plotter *_plotter, double x, double y, double rx, double ry, double angle, bool circlep);
extern void _pl_p_set_fill_color (Plotter *_plotter);
extern void _pl_p_set_pen_color (Plotter *_plotter);

# 2158 "extern.h"


extern bool _pl_a_begin_page (Plotter *_plotter);
extern bool _pl_a_end_page (Plotter *_plotter);
extern bool _pl_a_erase_page (Plotter *_plotter);
extern bool _pl_a_paint_paths (Plotter *_plotter);
extern double _pl_a_paint_text_string (Plotter *_plotter, const unsigned char *s, int h_just, int v_just);
extern void _pl_a_initialize (Plotter *_plotter);
extern void _pl_a_paint_path (Plotter *_plotter);
extern void _pl_a_paint_point (Plotter *_plotter);
extern void _pl_a_terminate (Plotter *_plotter);

extern void _pl_a_set_attributes (Plotter *_plotter);
extern void _pl_a_set_fill_color (Plotter *_plotter, bool force_pen_color);
extern void _pl_a_set_pen_color (Plotter *_plotter);

# 2192 "extern.h"


extern bool _pl_s_begin_page (Plotter *_plotter);
extern bool _pl_s_end_page (Plotter *_plotter);
extern bool _pl_s_erase_page (Plotter *_plotter);
extern bool _pl_s_paint_paths (Plotter *_plotter);
extern double _pl_s_paint_text_string (Plotter *_plotter, const unsigned char *s, int h_just, int v_just);
extern void _pl_s_initialize (Plotter *_plotter);
extern void _pl_s_paint_path (Plotter *_plotter);
extern void _pl_s_paint_point (Plotter *_plotter);
extern void _pl_s_terminate (Plotter *_plotter);

extern void _pl_s_set_matrix (Plotter *_plotter, const double m_local[6]);

# 2222 "extern.h"


extern void _pl_n_initialize (Plotter *_plotter);
extern void _pl_n_terminate (Plotter *_plotter);

extern int _pl_n_maybe_output_image (Plotter *_plotter);

extern void _pl_n_write_pnm (Plotter *_plotter);
extern void _pl_n_write_pbm (Plotter *_plotter);
extern void _pl_n_write_pgm (Plotter *_plotter);
extern void _pl_n_write_ppm (Plotter *_plotter);

# 2249 "extern.h"


extern void _pl_z_initialize (Plotter *_plotter);
extern void _pl_z_terminate (Plotter *_plotter);

extern int _pl_z_maybe_output_image (Plotter *_plotter);

# 2266 "extern.h"


extern bool _pl_i_begin_page (Plotter *_plotter);
extern bool _pl_i_end_page (Plotter *_plotter);
extern bool _pl_i_erase_page (Plotter *_plotter);
extern bool _pl_i_paint_paths (Plotter *_plotter);
extern void _pl_i_initialize (Plotter *_plotter);
extern void _pl_i_paint_path (Plotter *_plotter);
extern void _pl_i_paint_point (Plotter *_plotter);
extern void _pl_i_terminate (Plotter *_plotter);

extern int _pl_i_scan_pixel (Plotter *_plotter);
extern unsigned char _pl_i_new_color_index (Plotter *_plotter, int red, int green, int blue);
extern void _pl_i_delete_image (Plotter *_plotter);
extern void _pl_i_draw_elliptic_arc (Plotter *_plotter, plPoint p0, plPoint p1, plPoint pc);
extern void _pl_i_draw_elliptic_arc_2 (Plotter *_plotter, plPoint p0, plPoint p1, plPoint pc);
extern void _pl_i_draw_elliptic_arc_internal (Plotter *_plotter, int xorigin, int yorigin, unsigned int squaresize_x, unsigned int squaresize_y, int startangle, int anglerange);
extern void _pl_i_new_image (Plotter *_plotter);
extern void _pl_i_set_bg_color (Plotter *_plotter);
extern void _pl_i_set_fill_color (Plotter *_plotter);
extern void _pl_i_set_pen_color (Plotter *_plotter);
extern void _pl_i_start_scan (Plotter *_plotter);
extern void _pl_i_write_gif_header (Plotter *_plotter);
extern void _pl_i_write_gif_image (Plotter *_plotter);
extern void _pl_i_write_gif_trailer (Plotter *_plotter);
extern void _pl_i_write_short_int (Plotter *_plotter, unsigned int i);

# 2323 "extern.h"


extern bool _pl_x_begin_page (Plotter *_plotter);
extern bool _pl_x_end_page (Plotter *_plotter);
extern bool _pl_x_erase_page (Plotter *_plotter);
extern bool _pl_x_flush_output (Plotter *_plotter);
extern bool _pl_x_paint_paths (Plotter *_plotter);
extern bool _pl_x_path_is_flushable (Plotter *_plotter);
extern bool _pl_x_retrieve_font (Plotter *_plotter);
extern double _pl_x_paint_text_string (Plotter *_plotter, const unsigned char *s, int h_just, int v_just);
extern double _pl_x_get_text_width (Plotter *_plotter, const unsigned char *s);
extern void _pl_x_initialize (Plotter *_plotter);
extern void _pl_x_maybe_prepaint_segments (Plotter *_plotter, int prev_num_segments);
extern void _pl_x_paint_path (Plotter *_plotter);
extern void _pl_x_paint_point (Plotter *_plotter);
extern void _pl_x_pop_state (Plotter *_plotter);
extern void _pl_x_push_state (Plotter *_plotter);
extern void _pl_x_terminate (Plotter *_plotter);

extern bool _pl_x_retrieve_color (Plotter *_plotter, XColor *rgb_ptr);
extern bool _pl_x_select_font_carefully (Plotter *_plotter, const char *name, const unsigned char *s, bool subsetting);
extern bool _pl_x_select_xlfd_font_carefully (Plotter *_plotter, const char *x_name, const char *x_name_alt, const char *x_name_alt2, const char *x_name_alt3);
extern void _pl_x_add_gcs_to_first_drawing_state (Plotter *_plotter);
extern void _pl_x_delete_gcs_from_first_drawing_state (Plotter *_plotter);
extern void _pl_x_draw_elliptic_arc (Plotter *_plotter, plPoint p0, plPoint p1, plPoint pc);
extern void _pl_x_draw_elliptic_arc_2 (Plotter *_plotter, plPoint p0, plPoint p1, plPoint pc);
extern void _pl_x_draw_elliptic_arc_internal (Plotter *_plotter, int xorigin, int yorigin, unsigned int squaresize_x, unsigned int squaresize_y, int startangle, int anglerange);
extern void _pl_x_set_attributes (Plotter *_plotter, int x_gc_type);
extern void _pl_x_set_bg_color (Plotter *_plotter);
extern void _pl_x_set_fill_color (Plotter *_plotter);
extern void _pl_x_set_pen_color (Plotter *_plotter);

extern void _pl_x_maybe_get_new_colormap (Plotter *_plotter);
extern void _pl_x_maybe_handle_x_events (Plotter *_plotter);

extern bool _pl_y_begin_page (Plotter *_plotter);
extern bool _pl_y_end_page (Plotter *_plotter);
extern bool _pl_y_erase_page (Plotter *_plotter);
extern void _pl_y_initialize (Plotter *_plotter);
extern void _pl_y_terminate (Plotter *_plotter);

extern void _pl_y_flush_plotter_outstreams (Plotter *_plotter);
extern void _pl_y_maybe_get_new_colormap (Plotter *_plotter);
extern void _pl_y_maybe_handle_x_events (Plotter *_plotter);
extern void _pl_y_set_data_for_quitting (Plotter *_plotter);

# 2430 "extern.h"


extern int _setplparam (PlotterParams *_plotter_params, const char *parameter, void * value);
extern int _pushplparams (PlotterParams *_plotter_params);
extern int _popplparams (PlotterParams *_plotter_params);

# 34 "y_openpl.c" 2
# 1 "./../include/select.h" 1
# 17 "./../include/select.h"
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/cdefs.h" 1 3
# 18 "./../include/select.h" 2
# 1 "./../include/_sigset.h" 1
# 41 "./../include/_sigset.h"
typedef unsigned long __sigset_t;
# 19 "./../include/select.h" 2
# 1 "./../include/_timeval.h" 1
# 34 "./../include/_timeval.h"
# 1 "./../include/_types.h" 1
# 37 "./../include/_types.h"
# 1 "./../include/_types.h" 1
# 38 "./../include/_types.h" 2

typedef long int __blkcnt_t;
typedef int __blksize_t;
typedef long int __clock_t;
typedef int __clockid_t;
typedef unsigned long __cpuid_t;
typedef int __dev_t;
typedef unsigned int __fixpt_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned int __gid_t;
typedef unsigned int __id_t;
typedef unsigned int __in_addr_t;
typedef unsigned short __in_port_t;
typedef unsigned long int __ino_t;
typedef long __key_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long int __off_t;
typedef int __pid_t;
typedef unsigned long int __rlim_t;
typedef unsigned short __sa_family_t;
typedef int __segsz_t;
typedef unsigned int __socklen_t;
typedef long __suseconds_t;
typedef int __swblk_t;
typedef long int __time_t;
typedef int __timer_t;
typedef unsigned int __uid_t;
typedef unsigned int __useconds_t;





typedef union {
 char __mbstate8[128];
 long int __mbstateL;
} __mbstate_t;
# 35 "./../include/_timeval.h" 2


typedef __suseconds_t suseconds_t;
# 54 "./../include/_timeval.h"
struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};
# 20 "./../include/select.h" 2
# 1 "./../include/timespec.h" 1
# 37 "./../include/timespec.h"
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/cdefs.h" 1 3
# 38 "./../include/timespec.h" 2
# 21 "./../include/select.h" 2



typedef __sigset_t sigset_t;
# 38 "./../include/select.h"
typedef unsigned long __fd_mask;

typedef __fd_mask fd_mask;
# 52 "./../include/select.h"
typedef struct fd_set {
 __fd_mask __fds_bits[(((64) + ((((int)sizeof(__fd_mask) * 8)) - 1)) / (((int)sizeof(__fd_mask) * 8)))];
} fd_set;
# 79 "./../include/select.h"


int select (int __n, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, struct timeval *__timeout)
                                                   ;







# 35 "y_openpl.c" 2



# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/time.h" 1 3
# 10 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/time.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/time.h" 1 3
# 24 "C:/msys32/mingw32/i686-w64-mingw32/include/time.h" 3
#pragma pack(push,_CRT_PACKING)
# 60 "C:/msys32/mingw32/i686-w64-mingw32/include/time.h" 3
  
# 60 "C:/msys32/mingw32/i686-w64-mingw32/include/time.h" 3
 typedef long clock_t;
# 97 "C:/msys32/mingw32/i686-w64-mingw32/include/time.h" 3
  struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
  };
# 122 "C:/msys32/mingw32/i686-w64-mingw32/include/time.h" 3
  extern __attribute__ ((__dllimport__)) int _daylight;
  extern __attribute__ ((__dllimport__)) long _dstbias;
  extern __attribute__ ((__dllimport__)) long _timezone;
  extern __attribute__ ((__dllimport__)) char * _tzname[2];


  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_daylight(int *_Daylight);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_dstbias(long *_Daylight_savings_bias);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_timezone(long *_Timezone);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _get_tzname(size_t *_ReturnValue,char *_Buffer,size_t _SizeInBytes,int _Index);
  char *__attribute__((__cdecl__)) asctime(const struct tm *_Tm) ;
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) asctime_s (char *_Buf,size_t _SizeInWords,const struct tm *_Tm);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ctime32(const __time32_t *_Time) ;
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) _ctime32_s (char *_Buf,size_t _SizeInBytes,const __time32_t *_Time);
  clock_t __attribute__((__cdecl__)) clock(void);
  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _difftime32(__time32_t _Time1,__time32_t _Time2);
  __attribute__ ((__dllimport__)) struct tm *__attribute__((__cdecl__)) _gmtime32(const __time32_t *_Time) ;
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) _gmtime32_s (struct tm *_Tm,const __time32_t *_Time);
  __attribute__ ((__dllimport__)) struct tm *__attribute__((__cdecl__)) _localtime32(const __time32_t *_Time) ;
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) _localtime32_s (struct tm *_Tm,const __time32_t *_Time);
  size_t __attribute__((__cdecl__)) strftime(char * __restrict__ _Buf,size_t _SizeInBytes,const char * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _strftime_l(char * __restrict__ _Buf,size_t _Max_size,const char * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strdate(char *_Buffer) ;
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) _strdate_s (char *_Buf,size_t _SizeInBytes);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _strtime(char *_Buffer) ;
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) _strtime_s (char *_Buf ,size_t _SizeInBytes);
  __attribute__ ((__dllimport__)) __time32_t __attribute__((__cdecl__)) _time32(__time32_t *_Time);
  __attribute__ ((__dllimport__)) __time32_t __attribute__((__cdecl__)) _mktime32(struct tm *_Tm);
  __attribute__ ((__dllimport__)) __time32_t __attribute__((__cdecl__)) _mkgmtime32(struct tm *_Tm);


  void __attribute__((__cdecl__)) tzset(void) ;



  __attribute__ ((__dllimport__))

  void __attribute__((__cdecl__)) _tzset(void);


  __attribute__ ((__dllimport__)) double __attribute__((__cdecl__)) _difftime64(__time64_t _Time1,__time64_t _Time2);
  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _ctime64(const __time64_t *_Time) ;
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) _ctime64_s (char *_Buf,size_t _SizeInBytes,const __time64_t *_Time);
  __attribute__ ((__dllimport__)) struct tm *__attribute__((__cdecl__)) _gmtime64(const __time64_t *_Time) ;
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) _gmtime64_s (struct tm *_Tm,const __time64_t *_Time);
  __attribute__ ((__dllimport__)) struct tm *__attribute__((__cdecl__)) _localtime64(const __time64_t *_Time) ;
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) _localtime64_s (struct tm *_Tm,const __time64_t *_Time);
  __attribute__ ((__dllimport__)) __time64_t __attribute__((__cdecl__)) _mktime64(struct tm *_Tm);
  __attribute__ ((__dllimport__)) __time64_t __attribute__((__cdecl__)) _mkgmtime64(struct tm *_Tm);
  __attribute__ ((__dllimport__)) __time64_t __attribute__((__cdecl__)) _time64(__time64_t *_Time);
  unsigned __attribute__((__cdecl__)) _getsystime(struct tm *_Tm);
  unsigned __attribute__((__cdecl__)) _setsystime(struct tm *_Tm,unsigned _MilliSec);


  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wasctime(const struct tm *_Tm);
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) _wasctime_s (wchar_t *_Buf,size_t _SizeInWords,const struct tm *_Tm);
  wchar_t *__attribute__((__cdecl__)) _wctime32(const __time32_t *_Time) ;
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) _wctime32_s (wchar_t *_Buf,size_t _SizeInWords,const __time32_t *_Time);
  size_t __attribute__((__cdecl__)) wcsftime(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t __attribute__((__cdecl__)) _wcsftime_l(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wstrdate(wchar_t *_Buffer) ;
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) _wstrdate_s (wchar_t *_Buf,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wstrtime(wchar_t *_Buffer) ;
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) _wstrtime_s (wchar_t *_Buf,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wctime64(const __time64_t *_Time) ;
  __attribute__((dllimport)) errno_t __attribute__((__cdecl__)) _wctime64_s (wchar_t *_Buf,size_t _SizeInWords,const __time64_t *_Time);



  wchar_t *__attribute__((__cdecl__)) _wctime(const time_t *) ;
# 203 "C:/msys32/mingw32/i686-w64-mingw32/include/time.h" 3
  errno_t __attribute__((__cdecl__)) _wctime_s(wchar_t *, size_t, const time_t *);
# 219 "C:/msys32/mingw32/i686-w64-mingw32/include/time.h" 3
static __inline time_t __attribute__((__cdecl__)) time(time_t *_Time) { return _time32(_Time); }
static __inline double __attribute__((__cdecl__)) difftime(time_t _Time1,time_t _Time2) { return _difftime32(_Time1,_Time2); }
static __inline struct tm *__attribute__((__cdecl__)) localtime(const time_t *_Time) { return _localtime32(_Time); }
static __inline errno_t __attribute__((__cdecl__)) localtime_s(struct tm *_Tm,const time_t *_Time) { return _localtime32_s(_Tm,_Time); }
static __inline struct tm *__attribute__((__cdecl__)) gmtime(const time_t *_Time) { return _gmtime32(_Time); }
static __inline errno_t __attribute__((__cdecl__)) gmtime_s(struct tm *_Tm, const time_t *_Time) { return _gmtime32_s(_Tm, _Time); }
static __inline char *__attribute__((__cdecl__)) ctime(const time_t *_Time) { return _ctime32(_Time); }
static __inline errno_t __attribute__((__cdecl__)) ctime_s(char *_Buf,size_t _SizeInBytes,const time_t *_Time) { return _ctime32_s(_Buf,_SizeInBytes,_Time); }
static __inline time_t __attribute__((__cdecl__)) mktime(struct tm *_Tm) { return _mktime32(_Tm); }
static __inline time_t __attribute__((__cdecl__)) _mkgmtime(struct tm *_Tm) { return _mkgmtime32(_Tm); }
# 256 "C:/msys32/mingw32/i686-w64-mingw32/include/time.h" 3
  __attribute__ ((__dllimport__)) extern int daylight ;
  __attribute__ ((__dllimport__)) extern long timezone ;
  __attribute__ ((__dllimport__)) extern char *tzname[2] ;
  void __attribute__((__cdecl__)) tzset(void) ;






struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};

  extern int __attribute__((__cdecl__)) mingw_gettimeofday (struct timeval *p, struct timezone *z);


#pragma pack(pop)
# 300 "C:/msys32/mingw32/i686-w64-mingw32/include/time.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/timeb.h" 1 3
# 15 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/timeb.h" 3
#pragma pack(push,_CRT_PACKING)
# 53 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/timeb.h" 3
  struct __timeb32 {
    __time32_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
  };


  struct timeb {
    time_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
  };


  struct __timeb64 {
    __time64_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
  };



  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _ftime64(struct __timeb64 *_Time);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _ftime32(struct __timeb32 *_Time);
# 103 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/timeb.h" 3
  void __attribute__((__cdecl__)) ftime (struct timeb *);
# 123 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/timeb.h" 3
#pragma pack(pop)

# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/sys/timeb_s.h" 1 3
# 10 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/sys/timeb_s.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/timeb.h" 1 3
# 11 "C:/msys32/mingw32/i686-w64-mingw32/include/sec_api/sys/timeb_s.h" 2 3





  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ftime32_s(struct __timeb32 *_Time);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _ftime64_s(struct __timeb64 *_Time);
# 126 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/timeb.h" 2 3
# 301 "C:/msys32/mingw32/i686-w64-mingw32/include/time.h" 2 3







# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/pthread_time.h" 1 3
# 49 "C:/msys32/mingw32/i686-w64-mingw32/include/pthread_time.h" 3
typedef int clockid_t;
# 78 "C:/msys32/mingw32/i686-w64-mingw32/include/pthread_time.h" 3
       





int __attribute__((__cdecl__)) nanosleep(const struct timespec *request, struct timespec *remain);

int __attribute__((__cdecl__)) clock_nanosleep(clockid_t clock_id, int flags, const struct timespec *request, struct timespec *remain);
int __attribute__((__cdecl__)) clock_getres(clockid_t clock_id, struct timespec *res);
int __attribute__((__cdecl__)) clock_gettime(clockid_t clock_id, struct timespec *tp);
int __attribute__((__cdecl__)) clock_settime(clockid_t clock_id, const struct timespec *tp);

       
# 309 "C:/msys32/mingw32/i686-w64-mingw32/include/time.h" 2 3
# 11 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/time.h" 2 3
# 42 "C:/msys32/mingw32/i686-w64-mingw32/include/sys/time.h" 3
int __attribute__((__cdecl__)) gettimeofday(struct timeval *__restrict__,
                         void *__restrict__ );
# 39 "y_openpl.c" 2
# 47 "y_openpl.c"
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/unistd.h" 1 3
# 10 "C:/msys32/mingw32/i686-w64-mingw32/include/unistd.h" 3
# 1 "C:/msys32/mingw32/include/io.h" 1 3
# 17 "C:/msys32/mingw32/include/io.h" 3
# 1 "C:/msys32/mingw32/include/libqhull.h" 1 3
# 34 "C:/msys32/mingw32/include/libqhull.h" 3
# 1 "C:/msys32/mingw32/include/user.h" 1 3
# 35 "C:/msys32/mingw32/include/libqhull.h" 2 3

# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/setjmp.h" 1 3
# 11 "C:/msys32/mingw32/i686-w64-mingw32/include/setjmp.h" 3
#pragma pack(push,_CRT_PACKING)
# 34 "C:/msys32/mingw32/i686-w64-mingw32/include/setjmp.h" 3
  typedef struct __JUMP_BUFFER {
    unsigned long Ebp;
    unsigned long Ebx;
    unsigned long Edi;
    unsigned long Esi;
    unsigned long Esp;
    unsigned long Eip;
    unsigned long Registration;
    unsigned long TryLevel;
    unsigned long Cookie;
    unsigned long UnwindFunc;
    unsigned long UnwindData[6];
  } _JUMP_BUFFER;
# 199 "C:/msys32/mingw32/i686-w64-mingw32/include/setjmp.h" 3
  typedef int jmp_buf[16];



__attribute__ ((__dllimport__)) __attribute__ ((__noreturn__)) __attribute__ ((__nothrow__)) void __attribute__((__cdecl__)) longjmp(jmp_buf _Buf,int _Value);

void * __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) mingw_getsp (void);

       
# 242 "C:/msys32/mingw32/i686-w64-mingw32/include/setjmp.h" 3
  int __attribute__((__cdecl__)) __attribute__ ((__nothrow__,__returns_twice__)) _setjmp(jmp_buf _Buf, void *_Ctx);
  int __attribute__((__cdecl__)) __attribute__ ((__nothrow__,__returns_twice__)) _setjmp3(jmp_buf _Buf, void *_Ctx);
# 270 "C:/msys32/mingw32/i686-w64-mingw32/include/setjmp.h" 3
       





#pragma pack(pop)
# 37 "C:/msys32/mingw32/include/libqhull.h" 2 3
# 1 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include/float.h" 1 3 4
# 543 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include/float.h" 3 4
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/float.h" 1 3 4
# 544 "C:/msys32/mingw32/lib/gcc/i686-w64-mingw32/10.2.0/include/float.h" 2 3 4
# 38 "C:/msys32/mingw32/include/libqhull.h" 2 3
# 59 "C:/msys32/mingw32/include/libqhull.h" 3
extern const char *qh_version;
# 120 "C:/msys32/mingw32/include/libqhull.h" 3
typedef enum
{
    qh_ASnone = 0, qh_ASvoronoi, qh_AScentrum
}
qh_CENTER;
# 138 "C:/msys32/mingw32/include/libqhull.h" 3
typedef enum {qh_PRINTnone= 0,
  qh_PRINTarea, qh_PRINTaverage,
  qh_PRINTcoplanars, qh_PRINTcentrums,
  qh_PRINTfacets, qh_PRINTfacets_xridge,
  qh_PRINTgeom, qh_PRINTids, qh_PRINTinner, qh_PRINTneighbors,
  qh_PRINTnormals, qh_PRINTouter, qh_PRINTmaple,
  qh_PRINTincidences, qh_PRINTmathematica, qh_PRINTmerges, qh_PRINToff,
  qh_PRINToptions, qh_PRINTpointintersect,
  qh_PRINTpointnearest, qh_PRINTpoints, qh_PRINTqhull, qh_PRINTsize,
  qh_PRINTsummary, qh_PRINTtriangles,
  qh_PRINTvertices, qh_PRINTvneighbors, qh_PRINTextremes,
  qh_PRINTEND} qh_PRINT;
# 193 "C:/msys32/mingw32/include/libqhull.h" 3
typedef struct vertexT vertexT;
typedef struct ridgeT ridgeT;
typedef struct facetT facetT;


typedef struct setT setT;




typedef struct qhstatT qhstatT;
# 242 "C:/msys32/mingw32/include/libqhull.h" 3
struct facetT {

  double furthestdist;


  double maxoutside;





  double offset;
  double *normal;

  union {
   double area;
   facetT *replace;

   facetT *samecycle;

   facetT *newcycle;
   facetT *trivisible;
   facetT *triowner;
  }f;
  double *center;


  facetT *previous;
  facetT *next;
  setT *vertices;

  setT *ridges;

  setT *neighbors;


  setT *outsideset;


  setT *coplanarset;



  unsigned visitid;

  unsigned id;
  unsigned nummerge:9;

  unsigned int tricoplanar:1;





  unsigned int newfacet:1;
  unsigned int visible:1;
  unsigned int toporient:1;

  unsigned int simplicial:1;
  unsigned int seen:1;
  unsigned int seen2:1;
  unsigned int flipped:1;
  unsigned int upperdelaunay:1;
  unsigned int notfurthest:1;


  unsigned int good:1;
  unsigned int isarea:1;


  unsigned int dupridge:1;
  unsigned int mergeridge:1;

  unsigned int mergeridge2:1;
  unsigned int coplanar:1;
  unsigned int mergehorizon:1;
  unsigned int cycledone:1;
  unsigned int tested:1;
  unsigned int keepcentrum:1;
  unsigned int newmerge:1;
  unsigned int degenerate:1;
  unsigned int redundant:1;
};
# 347 "C:/msys32/mingw32/include/libqhull.h" 3
struct ridgeT {
  setT *vertices;

  facetT *top;
  facetT *bottom;
  unsigned id:24;
  unsigned int seen:1;
  unsigned int tested:1;
  unsigned int nonconvex:1;

};
# 372 "C:/msys32/mingw32/include/libqhull.h" 3
struct vertexT {
  vertexT *next;
  vertexT *previous;
  double *point;
  setT *neighbors;

  unsigned visitid:31;
  unsigned int seen2:1;
  unsigned id:24;
  unsigned dim:4;

  unsigned int seen:1;
  unsigned int delridge:1;
  unsigned int deleted:1;
  unsigned int newlist:1;
};
# 412 "C:/msys32/mingw32/include/libqhull.h" 3
extern int qhull_inuse;

typedef struct qhT qhT;
# 426 "C:/msys32/mingw32/include/libqhull.h" 3
extern qhT qh_qh;


struct qhT {
# 441 "C:/msys32/mingw32/include/libqhull.h" 3
  unsigned int ALLpoints;
  unsigned int ANGLEmerge;
  unsigned int APPROXhull;
  double MINoutside;
  unsigned int ANNOTATEoutput;
  unsigned int ATinfinity;

  unsigned int AVOIDold;
  unsigned int BESToutside;
  unsigned int CDDinput;
  unsigned int CDDoutput;
  unsigned int CHECKfrequently;
  double premerge_cos;
  double postmerge_cos;
  unsigned int DELAUNAY;
  unsigned int DOintersections;
  int DROPdim;
  unsigned int FORCEoutput;
  int GOODpoint;
  double *GOODpointp;
  unsigned int GOODthreshold;

  int GOODvertex;
  double *GOODvertexp;
  unsigned int HALFspace;
  int IStracing;
  int KEEParea;
  unsigned int KEEPcoplanar;
  unsigned int KEEPinside;

  int KEEPmerge;
  double KEEPminArea;
  double MAXcoplanar;
  unsigned int MERGEexact;
  unsigned int MERGEindependent;
  unsigned int MERGING;
  double premerge_centrum;
  double postmerge_centrum;
  unsigned int MERGEvertices;
  double MINvisible;
  unsigned int NOnarrow;
  unsigned int NOnearinside;
  unsigned int NOpremerge;
  unsigned int ONLYgood;
  unsigned int ONLYmax;
  unsigned int PICKfurthest;
  unsigned int POSTmerge;
  unsigned int PREmerge;

  unsigned int PRINTcentrums;
  unsigned int PRINTcoplanar;
  int PRINTdim;
  unsigned int PRINTdots;
  unsigned int PRINTgood;
  unsigned int PRINTinner;
  unsigned int PRINTneighbors;
  unsigned int PRINTnoplanes;
  unsigned int PRINToptions1st;
  unsigned int PRINTouter;
  unsigned int PRINTprecision;
  qh_PRINT PRINTout[qh_PRINTEND];
  unsigned int PRINTridges;
  unsigned int PRINTspheres;
  unsigned int PRINTstatistics;
  unsigned int PRINTsummary;
  unsigned int PRINTtransparent;
  unsigned int PROJECTdelaunay;

  int PROJECTinput;
  unsigned int QUICKhelp;
  unsigned int RANDOMdist;
  double RANDOMfactor;
  double RANDOMa;
  double RANDOMb;
  unsigned int RANDOMoutside;
  int REPORTfreq;
  int REPORTfreq2;
  int RERUN;
  int ROTATErandom;
  unsigned int SCALEinput;
  unsigned int SCALElast;
  unsigned int SETroundoff;
  unsigned int SKIPcheckmax;
  unsigned int SKIPconvex;
  unsigned int SPLITthresholds;

  int STOPcone;

  int STOPpoint;

  int TESTpoints;
  unsigned int TESTvneighbors;
  int TRACElevel;
  int TRACElastrun;
  int TRACEpoint;
  double TRACEdist;
  int TRACEmerge;
  unsigned int TRIangulate;
  unsigned int TRInormals;
  unsigned int UPPERdelaunay;
  unsigned int USEstdout;
  unsigned int VERIFYoutput;
  unsigned int VIRTUALmemory;
  unsigned int VORONOI;


  double AREAfactor;
  unsigned int DOcheckmax;
  char *feasible_string;
  double *feasible_point;
  unsigned int GETarea;
  unsigned int KEEPnearinside;
  int hull_dim;
  int input_dim;
  int num_points;
  double *first_point;
  unsigned int POINTSmalloc;
  double *input_points;
  unsigned int input_malloc;
  char qhull_command[256];
  int qhull_commandsiz2;
  char rbox_command[256];
  char qhull_options[512];
  int qhull_optionlen;
  int qhull_optionsiz;
  int qhull_optionsiz2;
  int run_id;
  unsigned int VERTEXneighbors;
  unsigned int ZEROcentrum;
  double *upper_threshold;


  double *lower_threshold;
  double *upper_bound;
  double *lower_bound;
# 589 "C:/msys32/mingw32/include/libqhull.h" 3
  double ANGLEround;
  double centrum_radius;
  double cos_max;
  double DISTround;
  double MAXabs_coord;
  double MAXlastcoord;
  double MAXsumcoord;
  double MAXwidth;
  double MINdenom_1;
  double MINdenom;
  double MINdenom_1_2;
  double MINdenom_2;
  double MINlastcoord;
  unsigned int NARROWhull;
  double *NEARzero;
  double NEARinside;
  double ONEmerge;
  double outside_err;

  double WIDEfacet;
# 617 "C:/msys32/mingw32/include/libqhull.h" 3
  char qhull[sizeof("qhull")];
  jmp_buf errexit;
  char jmpXtra[40];
  jmp_buf restartexit;
  char jmpXtra2[40];
  FILE *fin;
  FILE *fout;
  FILE *ferr;
  double *interior_point;
  int normal_size;
  int center_size;
  int TEMPsize;
# 639 "C:/msys32/mingw32/include/libqhull.h" 3
  facetT *facet_list;
  facetT *facet_tail;
  facetT *facet_next;


  facetT *newfacet_list;
  facetT *visible_list;

  int num_visible;
  unsigned tracefacet_id;
  facetT *tracefacet;
  unsigned tracevertex_id;
  vertexT *tracevertex;
  vertexT *vertex_list;
  vertexT *vertex_tail;
  vertexT *newvertex_list;

  int num_facets;

  int num_vertices;
  int num_outside;

  int num_good;
  unsigned facet_id;
  unsigned ridge_id:24;
  unsigned vertex_id:24;
# 674 "C:/msys32/mingw32/include/libqhull.h" 3
  unsigned long hulltime;

  unsigned int ALLOWrestart;
  int build_cnt;
  qh_CENTER CENTERtype;
  int furthest_id;
  facetT *GOODclosest;
  unsigned int hasAreaVolume;
  unsigned int hasTriangulation;
  double JOGGLEmax;
  unsigned int maxoutdone;
  double max_outside;



  double max_vertex;

  double min_vertex;



  unsigned int NEWfacets;

  unsigned int findbestnew;
  unsigned int findbest_notsharp;
  unsigned int NOerrexit;
  double PRINTcradius;
  double PRINTradius;
  unsigned int POSTmerging;
  int printoutvar;
  int printoutnum;
  unsigned int QHULLfinished;
  double totarea;
  double totvol;
  unsigned int visit_id;
  unsigned int vertex_visit:31;
  unsigned int ZEROall_ok;
  unsigned int WAScoplanar;
# 720 "C:/msys32/mingw32/include/libqhull.h" 3
  setT *facet_mergeset;
  setT *degen_mergeset;
  setT *hash_table;

  setT *other_points;
  setT *del_vertices;
# 734 "C:/msys32/mingw32/include/libqhull.h" 3
  double *gm_matrix;
  double **gm_row;
  char* line;
  int maxline;
  double *half_space;
  double *temp_malloc;
# 753 "C:/msys32/mingw32/include/libqhull.h" 3
  unsigned int ERREXITcalled;
  unsigned int firstcentrum;
  unsigned int old_randomdist;
  setT *coplanarfacetset;
  double last_low;
  double last_high;
  double last_newhigh;
  unsigned lastreport;
  int mergereport;
  qhstatT *old_qhstat;
  setT *old_tempstack;
  int ridgeoutnum;
};
# 994 "C:/msys32/mingw32/include/libqhull.h" 3
void qh_qhull(void);
unsigned int qh_addpoint(double *furthest, facetT *facet, unsigned int checkdist);
void qh_printsummary(FILE *fp);



void qh_errexit(int exitcode, facetT *facet, ridgeT *ridge);
void qh_errprint(const char* string, facetT *atfacet, facetT *otherfacet, ridgeT *atridge, vertexT *atvertex);
int qh_new_qhull(int dim, int numpoints, double *points, unsigned int ismalloc,
                char *qhull_cmd, FILE *outfile, FILE *errfile);
void qh_printfacetlist(facetT *facetlist, setT *facets, unsigned int printall);
void qh_printhelp_degenerate(FILE *fp);
void qh_printhelp_narrowhull(FILE *fp, double minangle);
void qh_printhelp_singular(FILE *fp);
void qh_user_memsizes(void);


void qh_exit(int exitcode);
void qh_free(void *mem);
void *qh_malloc(size_t size);


void qh_fprintf(FILE *fp, int msgcode, const char *fmt, ... );
void qh_fprintf_rbox(FILE *fp, int msgcode, const char *fmt, ... );



facetT *qh_findbest(double *point, facetT *startfacet,
                     unsigned int bestoutside, unsigned int newfacets, unsigned int noupper,
                     double *dist, unsigned int *isoutside, int *numpart);
facetT *qh_findbestnew(double *point, facetT *startfacet,
                     double *dist, unsigned int bestoutside, unsigned int *isoutside, int *numpart);
unsigned int qh_gram_schmidt(int dim, double **rows);
void qh_outerinner(facetT *facet, double *outerplane, double *innerplane);
void qh_printsummary(FILE *fp);
void qh_projectinput(void);
void qh_randommatrix(double *buffer, int dim, double **row);
void qh_rotateinput(double **rows);
void qh_scaleinput(void);
void qh_setdelaunay(int dim, int count, double *points);
double *qh_sethalfspace_all(int dim, int count, double *halfspaces, double *feasible);



unsigned long qh_clock(void);
void qh_checkflags(char *command, char *hiddenflags);
void qh_clear_outputflags(void);
void qh_freebuffers(void);
void qh_freeqhull(unsigned int allmem);
void qh_freeqhull2(unsigned int allmem);
void qh_init_A(FILE *infile, FILE *outfile, FILE *errfile, int argc, char *argv[]);
void qh_init_B(double *points, int numpoints, int dim, unsigned int ismalloc);
void qh_init_qhull_command(int argc, char *argv[]);
void qh_initbuffers(double *points, int numpoints, int dim, unsigned int ismalloc);
void qh_initflags(char *command);
void qh_initqhull_buffers(void);
void qh_initqhull_globals(double *points, int numpoints, int dim, unsigned int ismalloc);
void qh_initqhull_mem(void);
void qh_initqhull_outputflags(void);
void qh_initqhull_start(FILE *infile, FILE *outfile, FILE *errfile);
void qh_initqhull_start2(FILE *infile, FILE *outfile, FILE *errfile);
void qh_initthresholds(char *command);
void qh_option(const char *option, int *i, double *r);







void dfacet( unsigned id);
void dvertex( unsigned id);
void qh_printneighborhood(FILE *fp, qh_PRINT format, facetT *facetA, facetT *facetB, unsigned int printall);
void qh_produce_output(void);
double *qh_readpoints(int *numpoints, int *dimension, unsigned int *ismalloc);




void qh_meminit(FILE *ferr);
void qh_memfreeshort(int *curlong, int *totlong);



void qh_check_output(void);
void qh_check_points(void);
setT *qh_facetvertices(facetT *facetlist, setT *facets, unsigned int allfacets);
facetT *qh_findbestfacet(double *point, unsigned int bestoutside,
           double *bestdist, unsigned int *isoutside);
vertexT *qh_nearvertex(facetT *facet, double *point, double *bestdistp);
double *qh_point(int id);
setT *qh_pointfacet(void );
int qh_pointid(double *point);
setT *qh_pointvertex(void );
void qh_setvoronoi_all(void);
void qh_triangulate(void );


int qh_rboxpoints(FILE* fout, FILE* ferr, char* rbox_command);
void qh_errexit_rbox(int exitcode);



void qh_collectstatistics(void);
void qh_printallstatistics(FILE *fp, const char *string);
# 18 "C:/msys32/mingw32/include/io.h" 2 3
# 61 "C:/msys32/mingw32/include/io.h" 3
typedef enum
{
    qh_RIDGEall = 0, qh_RIDGEinner, qh_RIDGEouter
}
qh_RIDGE;
# 76 "C:/msys32/mingw32/include/io.h" 3
typedef void (*printvridgeT)(FILE *fp, vertexT *vertex, vertexT *vertexA, setT *centers, unsigned int unbounded);



void dfacet(unsigned id);
void dvertex(unsigned id);
int qh_compare_facetarea(const void *p1, const void *p2);
int qh_compare_facetmerge(const void *p1, const void *p2);
int qh_compare_facetvisit(const void *p1, const void *p2);
int qh_compare_vertexpoint(const void *p1, const void *p2);
void qh_copyfilename(char *filename, int size, const char* source, int length);
void qh_countfacets(facetT *facetlist, setT *facets, unsigned int printall,
              int *numfacetsp, int *numsimplicialp, int *totneighborsp,
              int *numridgesp, int *numcoplanarsp, int *numnumtricoplanarsp);
double *qh_detvnorm(vertexT *vertex, vertexT *vertexA, setT *centers, double *offsetp);
setT *qh_detvridge(vertexT *vertex);
setT *qh_detvridge3 (vertexT *atvertex, vertexT *vertex);
int qh_eachvoronoi(FILE *fp, printvridgeT printvridge, vertexT *atvertex, unsigned int visitall, qh_RIDGE innerouter, unsigned int inorder);
int qh_eachvoronoi_all(FILE *fp, printvridgeT printvridge, unsigned int isUpper, qh_RIDGE innerouter, unsigned int inorder);
void qh_facet2point(facetT *facet, double **point0, double **point1, double *mindist);
setT *qh_facetvertices(facetT *facetlist, setT *facets, unsigned int allfacets);
void qh_geomplanes(facetT *facet, double *outerplane, double *innerplane);
void qh_markkeep(facetT *facetlist);
setT *qh_markvoronoi(facetT *facetlist, setT *facets, unsigned int printall, unsigned int *isLowerp, int *numcentersp);
void qh_order_vertexneighbors(vertexT *vertex);
void qh_prepare_output(void);
void qh_printafacet(FILE *fp, qh_PRINT format, facetT *facet, unsigned int printall);
void qh_printbegin(FILE *fp, qh_PRINT format, facetT *facetlist, setT *facets, unsigned int printall);
void qh_printcenter(FILE *fp, qh_PRINT format, const char *string, facetT *facet);
void qh_printcentrum(FILE *fp, facetT *facet, double radius);
void qh_printend(FILE *fp, qh_PRINT format, facetT *facetlist, setT *facets, unsigned int printall);
void qh_printend4geom(FILE *fp, facetT *facet, int *num, unsigned int printall);
void qh_printextremes(FILE *fp, facetT *facetlist, setT *facets, unsigned int printall);
void qh_printextremes_2d(FILE *fp, facetT *facetlist, setT *facets, unsigned int printall);
void qh_printextremes_d(FILE *fp, facetT *facetlist, setT *facets, unsigned int printall);
void qh_printfacet(FILE *fp, facetT *facet);
void qh_printfacet2math(FILE *fp, facetT *facet, qh_PRINT format, int notfirst);
void qh_printfacet2geom(FILE *fp, facetT *facet, double color[3]);
void qh_printfacet2geom_points(FILE *fp, double *point1, double *point2,
                               facetT *facet, double offset, double color[3]);
void qh_printfacet3math(FILE *fp, facetT *facet, qh_PRINT format, int notfirst);
void qh_printfacet3geom_nonsimplicial(FILE *fp, facetT *facet, double color[3]);
void qh_printfacet3geom_points(FILE *fp, setT *points, facetT *facet, double offset, double color[3]);
void qh_printfacet3geom_simplicial(FILE *fp, facetT *facet, double color[3]);
void qh_printfacet3vertex(FILE *fp, facetT *facet, qh_PRINT format);
void qh_printfacet4geom_nonsimplicial(FILE *fp, facetT *facet, double color[3]);
void qh_printfacet4geom_simplicial(FILE *fp, facetT *facet, double color[3]);
void qh_printfacetNvertex_nonsimplicial(FILE *fp, facetT *facet, int id, qh_PRINT format);
void qh_printfacetNvertex_simplicial(FILE *fp, facetT *facet, qh_PRINT format);
void qh_printfacetheader(FILE *fp, facetT *facet);
void qh_printfacetridges(FILE *fp, facetT *facet);
void qh_printfacets(FILE *fp, qh_PRINT format, facetT *facetlist, setT *facets, unsigned int printall);
void qh_printhyperplaneintersection(FILE *fp, facetT *facet1, facetT *facet2,
                   setT *vertices, double color[3]);
void qh_printneighborhood(FILE *fp, qh_PRINT format, facetT *facetA, facetT *facetB, unsigned int printall);
void qh_printline3geom(FILE *fp, double *pointA, double *pointB, double color[3]);
void qh_printpoint(FILE *fp, const char *string, double *point);
void qh_printpointid(FILE *fp, const char *string, int dim, double *point, int id);
void qh_printpoint3 (FILE *fp, double *point);
void qh_printpoints_out(FILE *fp, facetT *facetlist, setT *facets, unsigned int printall);
void qh_printpointvect(FILE *fp, double *point, double *normal, double *center, double radius, double color[3]);
void qh_printpointvect2 (FILE *fp, double *point, double *normal, double *center, double radius);
void qh_printridge(FILE *fp, ridgeT *ridge);
void qh_printspheres(FILE *fp, setT *vertices, double radius);
void qh_printvdiagram(FILE *fp, qh_PRINT format, facetT *facetlist, setT *facets, unsigned int printall);
int qh_printvdiagram2 (FILE *fp, printvridgeT printvridge, setT *vertices, qh_RIDGE innerouter, unsigned int inorder);
void qh_printvertex(FILE *fp, vertexT *vertex);
void qh_printvertexlist(FILE *fp, const char* string, facetT *facetlist,
                         setT *facets, unsigned int printall);
void qh_printvertices(FILE *fp, const char* string, setT *vertices);
void qh_printvneighbors(FILE *fp, facetT* facetlist, setT *facets, unsigned int printall);
void qh_printvoronoi(FILE *fp, qh_PRINT format, facetT *facetlist, setT *facets, unsigned int printall);
void qh_printvnorm(FILE *fp, vertexT *vertex, vertexT *vertexA, setT *centers, unsigned int unbounded);
void qh_printvridge(FILE *fp, vertexT *vertex, vertexT *vertexA, setT *centers, unsigned int unbounded);
void qh_produce_output(void);
void qh_produce_output2(void);
void qh_projectdim3 (double *source, double *destination);
int qh_readfeasible(int dim, const char *curline);
double *qh_readpoints(int *numpoints, int *dimension, unsigned int *ismalloc);
void qh_setfeasible(int dim);
unsigned int qh_skipfacet(facetT *facet);
char *qh_skipfilename(char *filename);
# 11 "C:/msys32/mingw32/i686-w64-mingw32/include/unistd.h" 2 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/process.h" 1 3
# 10 "C:/msys32/mingw32/i686-w64-mingw32/include/process.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt_startup.h" 1 3
# 14 "C:/msys32/mingw32/i686-w64-mingw32/include/corecrt_startup.h" 3
__attribute__ ((__dllimport__)) char **__attribute__((__cdecl__)) __p__acmdln(void);


__attribute__ ((__dllimport__)) wchar_t **__attribute__((__cdecl__)) __p__wcmdln(void);


typedef void (__attribute__((__cdecl__)) *_PVFV)(void);
typedef int (__attribute__((__cdecl__)) *_PIFV)(void);
typedef void (__attribute__((__cdecl__)) *_PVFI)(int);

typedef struct _onexit_table_t {
    _PVFV* _first;
    _PVFV* _last;
    _PVFV* _end;
} _onexit_table_t;

typedef int (__attribute__((__cdecl__)) *_onexit_t)(void);

__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _initialize_onexit_table(_onexit_table_t*);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _register_onexit_function(_onexit_table_t*,_onexit_t);
__attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _execute_onexit_table(_onexit_table_t*);
# 11 "C:/msys32/mingw32/i686-w64-mingw32/include/process.h" 2 3
# 32 "C:/msys32/mingw32/i686-w64-mingw32/include/process.h" 3
  typedef void (__attribute__((__cdecl__)) *_beginthread_proc_type)(void *);
  typedef unsigned (__attribute__((__stdcall__)) *_beginthreadex_proc_type)(void *);

  __attribute__ ((__dllimport__)) uintptr_t __attribute__((__cdecl__)) _beginthread(_beginthread_proc_type _StartAddress,unsigned _StackSize,void *_ArgList);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _endthread(void) __attribute__ ((__noreturn__));
  __attribute__ ((__dllimport__)) uintptr_t __attribute__((__cdecl__)) _beginthreadex(void *_Security,unsigned _StackSize,_beginthreadex_proc_type _StartAddress,void *_ArgList,unsigned _InitFlag,unsigned *_ThrdAddr);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _endthreadex(unsigned _Retval) __attribute__ ((__noreturn__));
# 61 "C:/msys32/mingw32/i686-w64-mingw32/include/process.h" 3
  typedef void (__attribute__((__stdcall__)) *_tls_callback_type)(void*,unsigned long,void*);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _register_thread_local_exe_atexit_callback(_tls_callback_type callback);

  void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _cexit(void);
  void __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) _c_exit(void);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _getpid(void);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _cwait(int *_TermStat,intptr_t _ProcHandle,int _Action);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _execl(const char *_Filename,const char *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _execle(const char *_Filename,const char *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _execlp(const char *_Filename,const char *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _execlpe(const char *_Filename,const char *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _execv(const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _execve(const char *_Filename,const char *const *_ArgList,const char *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _execvp(const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _execvpe(const char *_Filename,const char *const *_ArgList,const char *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnl(int _Mode,const char *_Filename,const char *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnle(int _Mode,const char *_Filename,const char *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnlp(int _Mode,const char *_Filename,const char *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnlpe(int _Mode,const char *_Filename,const char *_ArgList,...);
# 97 "C:/msys32/mingw32/i686-w64-mingw32/include/process.h" 3
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexecl(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexecle(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexeclp(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexeclpe(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexecv(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexecve(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexecvp(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wexecvpe(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
# 126 "C:/msys32/mingw32/i686-w64-mingw32/include/process.h" 3
  intptr_t __attribute__((__cdecl__)) _loaddll(char *_Filename);
  int __attribute__((__cdecl__)) _unloaddll(intptr_t _Handle);
  int (__attribute__((__cdecl__)) *__attribute__((__cdecl__)) _getdllprocaddr(intptr_t _Handle,char *_ProcedureName,intptr_t _Ordinal))(void);
# 158 "C:/msys32/mingw32/i686-w64-mingw32/include/process.h" 3
  int __attribute__((__cdecl__)) getpid(void) ;



  intptr_t __attribute__((__cdecl__)) cwait(int *_TermStat,intptr_t _ProcHandle,int _Action) ;

  int __attribute__((__cdecl__)) execl(const char *_Filename,const char *_ArgList,...) ;
  int __attribute__((__cdecl__)) execle(const char *_Filename,const char *_ArgList,...) ;
  int __attribute__((__cdecl__)) execlp(const char *_Filename,const char *_ArgList,...) ;
  int __attribute__((__cdecl__)) execlpe(const char *_Filename,const char *_ArgList,...) ;






  intptr_t __attribute__((__cdecl__)) spawnl(int,const char *_Filename,const char *_ArgList,...) ;
  intptr_t __attribute__((__cdecl__)) spawnle(int,const char *_Filename,const char *_ArgList,...) ;
  intptr_t __attribute__((__cdecl__)) spawnlp(int,const char *_Filename,const char *_ArgList,...) ;
  intptr_t __attribute__((__cdecl__)) spawnlpe(int,const char *_Filename,const char *_ArgList,...) ;





  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) execv(const char *_Filename,char *const _ArgList[]) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) execve(const char *_Filename,char *const _ArgList[],char *const _Env[]) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) execvp(const char *_Filename,char *const _ArgList[]) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) execvpe(const char *_Filename,char *const _ArgList[],char *const _Env[]) ;






  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) spawnv(int,const char *_Filename,char *const _ArgList[]) ;
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) spawnve(int,const char *_Filename,char *const _ArgList[],char *const _Env[]) ;
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) spawnvp(int,const char *_Filename,char *const _ArgList[]) ;
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) spawnvpe(int,const char *_Filename,char *const _ArgList[],char *const _Env[]) ;
# 12 "C:/msys32/mingw32/i686-w64-mingw32/include/unistd.h" 2 3
# 1 "./../include/getopt.h" 1 3
# 12 "./../include/getopt.h" 3
extern char *optarg;
# 26 "./../include/getopt.h" 3
extern int optind;




extern int opterr;



extern int optopt;
# 58 "./../include/getopt.h" 3
struct option
{
  const char *name;


  int has_arg;
  int *flag;
  int val;
};
# 84 "./../include/getopt.h" 3
extern int gnu_getopt (int argc, char *const *argv, const char *shortopts);
extern int getopt_long (int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind);
extern int getopt_long_only (int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind);


extern int _getopt_internal (int argc, char *const *argv, const char *shortopts, const struct option *longopts, int *longind, int long_only);
# 13 "C:/msys32/mingw32/i686-w64-mingw32/include/unistd.h" 2 3
# 44 "C:/msys32/mingw32/i686-w64-mingw32/include/unistd.h" 3
       

unsigned int __attribute__((__cdecl__)) sleep (unsigned int);
       




int __attribute__((__cdecl__)) __attribute__ ((__nothrow__)) usleep(useconds_t);







int ftruncate(int, off32_t);
int ftruncate64(int, off64_t);
int truncate(const char *, off32_t);
int truncate64(const char *, off64_t);
# 107 "C:/msys32/mingw32/i686-w64-mingw32/include/unistd.h" 3
# 1 "C:/msys32/mingw32/i686-w64-mingw32/include/pthread_unistd.h" 1 3
# 108 "C:/msys32/mingw32/i686-w64-mingw32/include/unistd.h" 2 3
# 48 "y_openpl.c" 2
# 73 "y_openpl.c"

# 73 "y_openpl.c"
static const String _xplot_fallback_resources[] =
{
  (String)"Xplot*geometry:      570x570",
  (String)
# 76 "y_openpl.c" 3 4
         ((void *)0)

# 77 "y_openpl.c"
};
# 88 "y_openpl.c"
static const String _xplot_translations_before_forking =



(String)"";


static const String _xplot_translations_after_forking =







(String)"<Btn1Down>:	Foldup()\n <Btn3Down>:	Foldup()\n <Key>Q:	Foldup()\n <Key>q:	Foldup()";






static bool _bitmap_size_ok (const char *bitmap_size_s);
static void Foldup (Widget widget, XEvent *event, String *params, Cardinal *num_params);
# 123 "y_openpl.c"
void
_pl_y_set_data_for_quitting (Plotter *_plotter)
{
  Arg wargs[1];





  ((void)( (wargs[0]).name = (((char*)&XtStrings[802])), (wargs[0]).value = (XtArgVal)(XtParseTranslationTable(_xplot_translations_after_forking)) ))
                                                                ;

  XtSetValues (_plotter->y_canvas, wargs, (Cardinal)1);
}






static void
Foldup (Widget widget, XEvent *event, String *params, Cardinal *num_params)
{
  Display *dpy;

  dpy = XtDisplay (widget);
  XtDestroyWidget (XtParent (widget));
  XFlush (dpy);
  exit (
# 151 "y_openpl.c" 3
       0
# 151 "y_openpl.c"
                   );
}


static const XtActionsRec _xplot_actions[] =
{
  {(String)"Foldup", Foldup},
};

bool
_pl_y_begin_page (Plotter *_plotter)
{
  Arg wargs[10];
  Dimension window_height, window_width;
  Screen *screen_struct;
  String fake_argv[8];
  const char *double_buffer_s;
  int fake_argc;
  int screen;
# 186 "y_openpl.c"
  _plotter->y_app_con = XtCreateApplicationContext();
  if (_plotter->y_app_con == (XtAppContext)
# 187 "y_openpl.c" 3 4
                                          ((void *)0)
# 187 "y_openpl.c"
                                              )
    {
      _plotter->error (_plotter, "an X application context could not be created");
      return false;
    }


  XtAppSetFallbackResources (_plotter->y_app_con,
        (String *)_xplot_fallback_resources);



  XtAppAddActions (_plotter->y_app_con, (XtActionsRec *)_xplot_actions,
     ((Cardinal) (sizeof(_xplot_actions) / sizeof(_xplot_actions[0]))));



  fake_argc = 0;
  fake_argv[fake_argc++] = (String)"xplot";


  {
    const char *display_s;

    display_s = (char *)_get_plot_param (_plotter->data, "DISPLAY");
    if (display_s == 
# 212 "y_openpl.c" 3 4
                    ((void *)0) 
# 212 "y_openpl.c"
                         || *display_s == '\0')
      {
 _plotter->error (_plotter,
    "the Plotter could not be opened, as the DISPLAY parameter is null");
 return false;
      }
    fake_argv[fake_argc++] = (String)"-display";
    fake_argv[fake_argc++] = (String)display_s;
  }




  {
    char *bitmap_size_s;

    bitmap_size_s = (char *)_get_plot_param (_plotter->data, "BITMAPSIZE");
    if (bitmap_size_s && _bitmap_size_ok (bitmap_size_s))
      {
 fake_argv[fake_argc++] = (String)"-geometry";
 fake_argv[fake_argc++] = (String)bitmap_size_s;
      }
  }



  {
    const char *bg_color_s;

    bg_color_s = (char *)_get_plot_param (_plotter->data, "BG_COLOR");
    if (bg_color_s)
      {
 plColor color;
 char rgb[8];

 if (_string_to_color (bg_color_s, &color, _plotter->data->color_name_cache))

   {
     if (_plotter->data->emulate_color)

       {
  int gray;

  gray = _grayscale_approx (color.red, color.green, color.blue);
  sprintf (rgb, "#%02X%02X%02X", gray, gray, gray);
       }
     else
       sprintf (rgb, "#%02X%02X%02X",
         color.red, color.green, color.blue);
     bg_color_s = rgb;
   }
 else

   {
     if (_plotter->x_bg_color_warning_issued == false)
       {
  char *buf;

  buf = (char *)_pl_xmalloc (strlen (bg_color_s) + 100);
  sprintf (buf, "substituting \"white\" for undefined background color \"%s\"",
    bg_color_s);
  _plotter->warning (_plotter, buf);
  free (buf);
  _plotter->x_bg_color_warning_issued = true;

  bg_color_s = "white";
       }
   }

 fake_argv[fake_argc++] = (String)"-bg";
 fake_argv[fake_argc++] = (String)bg_color_s;
      }
  }


  fake_argv[fake_argc] = (String)
# 287 "y_openpl.c" 3 4
                                ((void *)0)
# 287 "y_openpl.c"
                                    ;


  _plotter->x_dpy =
    XtOpenDisplay (_plotter->y_app_con,

     (String)
# 293 "y_openpl.c" 3 4
            ((void *)0)
# 293 "y_openpl.c"
                ,

     (String)
# 295 "y_openpl.c" 3 4
            ((void *)0)
# 295 "y_openpl.c"
                ,

     (String)"Xplot",


     
# 300 "y_openpl.c" 3 4
    ((void *)0)
# 300 "y_openpl.c"
        , (Cardinal)0,



     &fake_argc, fake_argv);
  if (_plotter->x_dpy == (Display *)
# 305 "y_openpl.c" 3 4
                                   ((void *)0)
# 305 "y_openpl.c"
                                       )
    {
      char *display_s;

      display_s = (char *)_get_plot_param (_plotter->data, "DISPLAY");
      if (display_s == 
# 310 "y_openpl.c" 3 4
                      ((void *)0)
# 310 "y_openpl.c"
                          )
 _plotter->error (_plotter,
    "the X Window System display could not be opened, as it is null");
      else
 {
   char *buf;

   buf = (char *)_pl_xmalloc(strlen(display_s) + 1 + 50);
   sprintf (buf, "the X Window System display \"%s\" could not be opened",
     display_s);
   _plotter->error (_plotter, buf);
   free (buf);
 }
      return false;
    }


  screen = (((_XPrivDisplay)_plotter->x_dpy)->default_screen);
  screen_struct = (&((_XPrivDisplay)_plotter->x_dpy)->screens[screen]);
  _plotter->x_visual = ((screen_struct)->root_visual);
  _plotter->x_cmap = ((screen_struct)->cmap);
  _plotter->x_cmap_type = 0;


  _plotter->x_max_polyline_len = XMaxRequestSize(_plotter->x_dpy) / 2;





  ((void)( (wargs[0]).name = (((char*)&XtStrings[584])), (wargs[0]).value = (XtArgVal)(screen_struct) ));
  ((void)( (wargs[1]).name = (((char*)&XtShellStrings[373])), (wargs[1]).value = (XtArgVal)(fake_argc) ));
  ((void)( (wargs[2]).name = (((char*)&XtShellStrings[383])), (wargs[2]).value = (XtArgVal)(fake_argv) ));
  _plotter->y_toplevel = XtAppCreateShell(
# 343 "y_openpl.c" 3 4
                                         ((void *)0)
# 343 "y_openpl.c"
                                             ,
        (String)"Xplot",
        applicationShellWidgetClass,
        _plotter->x_dpy,




        wargs, (Cardinal)3);
# 369 "y_openpl.c"
  ((void)( (wargs[0]).name = (((char*)&XtStrings[341])), (wargs[0]).value = (XtArgVal)((Dimension)0) ));
  ((void)( (wargs[1]).name = (((char*)&XtStrings[356])), (wargs[1]).value = (XtArgVal)((Dimension)0) ));
  _plotter->y_canvas = XtCreateManagedWidget ((String)"", labelWidgetClass,
         _plotter->y_toplevel,
         wargs, (Cardinal)2);



  XtRealizeWidget (_plotter->y_toplevel);







  ((void)( (wargs[0]).name = (((char*)&XtStrings[802])), (wargs[0]).value = (XtArgVal)(XtParseTranslationTable(_xplot_translations_before_forking)) ))
                                                                 ;

  XtSetValues (_plotter->y_canvas, wargs, (Cardinal)1);



  _plotter->x_drawable2 = (Drawable)XtWindow(_plotter->y_canvas);






  ((void)( (wargs[0]).name = (((char*)&XtStrings[872])), (wargs[0]).value = (XtArgVal)(&window_width) ));
  ((void)( (wargs[1]).name = (((char*)&XtStrings[234])), (wargs[1]).value = (XtArgVal)(&window_height) ));

  XtGetValues (_plotter->y_canvas, wargs, (Cardinal)2);
  _plotter->data->imin = 0;
  _plotter->data->imax = (int)window_width - 1;

  _plotter->data->jmin = (int)window_height - 1;
  _plotter->data->jmax = 0;


  _compute_ndc_to_device_map (_plotter->data);


  if (((screen_struct)->backing_store))
    {
      XSetWindowAttributes attributes;
      unsigned long value_mask;

      attributes.backing_store = 2;
      value_mask = (1L<<6);
      XChangeWindowAttributes (_plotter->x_dpy, (Window)_plotter->x_drawable2,
          value_mask, &attributes);
    }


  _plotter->x_double_buffering = 0;
  double_buffer_s = (const char *)_get_plot_param (_plotter->data,
         "USE_DOUBLE_BUFFERING");


  if (strcmp (double_buffer_s, "fast") == 0)
    double_buffer_s = "yes";



  if (strcmp (double_buffer_s, "yes") == 0)

    {
      int major_version, minor_version;
      int one = 1;
      XdbeScreenVisualInfo *sv_info;

      if (XdbeQueryExtension (_plotter->x_dpy, &major_version, &minor_version)
   && (sv_info = XdbeGetVisualInfo (_plotter->x_dpy,

        &_plotter->x_drawable2,
        &one)) != 
# 446 "y_openpl.c" 3 4
                 ((void *)0)
# 446 "y_openpl.c"
                     )


 {
   bool ok = false;
   int i, num_visuals = sv_info->count;
   XdbeVisualInfo *vis_info = sv_info->visinfo;
   VisualID visual_id = XVisualIDFromVisual (_plotter->x_visual);
# 469 "y_openpl.c"
   for (i = 0; i < num_visuals; i++)

     if (vis_info[i].visual == visual_id)
       {
  ok = true;
  break;
       }
   XdbeFreeVisualInfo (sv_info);
   if (ok)


     {
       _plotter->x_drawable3 =
  XdbeAllocateBackBufferName (_plotter->x_dpy,
         _plotter->x_drawable2,
         (XdbeSwapAction)0);

       _plotter->x_double_buffering = 3;
     }
 }
    }





  if (_plotter->x_double_buffering == 0
      && strcmp (double_buffer_s, "yes") == 0)


    {
      int event_base, error_base;
      int major_version, minor_version;

      if (XmbufQueryExtension (_plotter->x_dpy, &event_base, &error_base)
   && XmbufGetVersion (_plotter->x_dpy, &major_version, &minor_version))

 {
   Multibuffer multibuf[2];
   int num;

   num = XmbufCreateBuffers (_plotter->x_dpy,
        (Window)_plotter->x_drawable2, 2,
        0,
        0,
        multibuf);
   if (num == 2)



     {
       _plotter->x_drawable3 = multibuf[0];
       _plotter->y_drawable4 = multibuf[1];

       _plotter->x_double_buffering = 2;
     }
   else
     _plotter->warning (_plotter,
          "X server refuses to support multibuffering");
 }
    }



  if (_plotter->x_double_buffering == 0)


    {
      Pixmap bg_pixmap;



      bg_pixmap = XCreatePixmap(_plotter->x_dpy,
    _plotter->x_drawable2,
    (unsigned int)window_width,
    (unsigned int)window_height,
    (unsigned int)((screen_struct)->root_depth));





      if (strcmp (double_buffer_s, "yes") == 0)
 {
   _plotter->x_drawable3 = (Drawable)bg_pixmap;
   _plotter->x_double_buffering = 1;
 }
      else
 {
   _plotter->x_drawable1 = (Drawable)bg_pixmap;
   _plotter->x_double_buffering = 0;
 }
    }



  _pl_x_add_gcs_to_first_drawing_state (_plotter);




  _pl_y_erase_page (_plotter);





  if (_plotter->x_double_buffering != 0)
    _pl_y_erase_page (_plotter);

  if (_plotter->x_double_buffering == 0
      || _plotter->x_double_buffering == 1)

    {
      Pixmap bg_pixmap;

      bg_pixmap = ((_plotter->x_double_buffering == 1) ?
     _plotter->x_drawable3 : _plotter->x_drawable1);





      ((void)( (wargs[0]).name = (((char*)&XtStrings[80])), (wargs[0]).value = (XtArgVal)(bg_pixmap) ));
      XtSetValues (_plotter->y_canvas, wargs, (Cardinal)1);

    }



  _pl_x_flush_output (_plotter);






  return true;
}

static bool
_bitmap_size_ok (const char *bitmap_size_s)
{
  int width, height;

  if (bitmap_size_s

      && (sscanf (bitmap_size_s, "%dx%d", &width, &height) == 2)
      && (width > 0) && (height > 0))
    return true;
  else
    return false;
}




void
_pl_y_maybe_get_new_colormap (Plotter *_plotter)
{
  Colormap new_pl_x_cmap;


  if (_plotter->x_cmap_type != 0)
    return;

  _plotter->warning (_plotter,
       "color supply low, switching to private colormap");
  new_pl_x_cmap = XCopyColormapAndFree (_plotter->x_dpy, _plotter->x_cmap);

  if (new_pl_x_cmap == 0)

    {
      _plotter->warning (_plotter,
    "unable to create private colormap");
      _plotter->warning (_plotter,
    "color supply exhausted, can't create new colors");
      _plotter->x_colormap_warning_issued = true;
    }
  else

    {
      Arg wargs[1];


      _plotter->x_cmap = new_pl_x_cmap;
      _plotter->x_cmap_type = 1;


      ((void)( (wargs[0]).name = (((char*)&XtStrings[154])), (wargs[0]).value = (XtArgVal)(_plotter->x_cmap) ));
      XtSetValues (_plotter->y_toplevel, wargs, (Cardinal)1);
    }

  return;
}
# 727 "y_openpl.c"
void
_pl_y_maybe_handle_x_events(Plotter *_plotter)
{
  if (_plotter->y_auto_flush)





    {
      if (_plotter->drawstate->path == (plPath *)
# 737 "y_openpl.c" 3 4
                                                ((void *)0)
   
# 738 "y_openpl.c"
  || (_plotter->drawstate->line_type == 0
       && !_plotter->drawstate->dash_array_in_effect
       && _plotter->drawstate->points_are_connected
       && _plotter->drawstate->quantized_device_line_width == 0))
 XFlush (_plotter->x_dpy);
    }

  if (_plotter->y_event_handler_count % 4 == 0)

    {
      int i;
# 758 "y_openpl.c"
  for (i = 0; i < _xplotters_len; i++)
    {
      if (_xplotters[i] != 
# 760 "y_openpl.c" 3 4
                          ((void *)0)
   
# 761 "y_openpl.c"
  && _xplotters[i]->data->opened
   && _xplotters[i]->data->open
   && _xplotters[i]->y_app_con != 
# 763 "y_openpl.c" 3 4
                                 ((void *)0)
# 763 "y_openpl.c"
                                     )

 {





   for ( ; ; )
     {
       bool have_data;

       have_data = false;

       if ((((_XPrivDisplay)_xplotters[i]->x_dpy)->qlen) > 0)



  have_data = true;

       else


  {
    int connection_number;
    int maxfds, select_return;
    fd_set readfds;
    struct timeval timeout;

    timeout.tv_sec = 0;
    timeout.tv_usec = 0;

    connection_number =
          (((_XPrivDisplay)_xplotters[i]->x_dpy)->fd);
    maxfds = 1 + connection_number;
    do { fd_set *_p;;
    ((&readfds)->__fds_bits[(connection_number)/((int)sizeof(__fd_mask) * 8)] |= ((__fd_mask)1 << ((connection_number) % ((int)sizeof(__fd_mask) * 8))));
    select_return = select (maxfds, &readfds, 
# 800 "y_openpl.c" 3 4
                                             ((void *)0)
# 800 "y_openpl.c"
                                                 , 
# 800 "y_openpl.c" 3 4
                                                   ((void *)0)
# 800 "y_openpl.c"
                                                       , &timeout);

    if (select_return < 0 && 
# 802 "y_openpl.c" 3
                            (*_errno()) 
# 802 "y_openpl.c"
                                  != 
# 802 "y_openpl.c" 3
                                     4
# 802 "y_openpl.c"
                                          )
      {
        _plotter->error (_plotter, strerror (
# 804 "y_openpl.c" 3
                                                 (*_errno())
# 804 "y_openpl.c"
                                                      ));
        break;
      }
    if (select_return > 0) have_data = true;



  }
# 839 "y_openpl.c"
     }

 }

    }
# 852 "y_openpl.c"
    }
  _plotter->y_event_handler_count++;
}
