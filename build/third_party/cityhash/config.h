/* Define to 1 if the compiler supports __builtin_expect. */
/* #undef HAVE_BUILTIN_EXPECT */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined __BIG_ENDIAN__
# define WORDS_BIGENDIAN 1
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif
