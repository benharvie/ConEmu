
#define MVV_1 11
#define MVV_2 3
#define MVV_3 8
#define MVV_4 1
#define MVV_4a "a"


#define STRING2(x) #x
#define STRING(x) STRING2(x)

#if (MVV_2<10)
  #define MVV_2s "0" STRING(MVV_2)
#else
  #define MVV_2s STRING(MVV_2)
#endif
#if (MVV_3<10)
  #define MVV_3s "0" STRING(MVV_3)
#else
  #define MVV_3s STRING(MVV_3)
#endif
#if (MVV_4>0)
  #define D(N) (10##N)
  #define MVV_4n D(MVV_4)
#else
  #define MVV_4n 0
#endif

#define CONEMUVERS STRING(MVV_1) MVV_2s MVV_3s MVV_4a
#define CONEMUVERN 2000+MVV_1,MVV_2,MVV_4n+MVV_3,MVV_4

#ifdef _WIN64
#define CONEMUPLTFRM " (x64)"
#else
#ifdef WIN64
#define CONEMUPLTFRM " (x64)"
#else
#define CONEMUPLTFRM " (x86)"
#endif
#endif
