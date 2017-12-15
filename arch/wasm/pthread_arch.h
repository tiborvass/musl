extern struct pthread *__main_pthread;
static inline struct pthread *__pthread_self(void) { return __main_pthread; }

#define TP_ADJ(p) (p)

#define MC_PC __ip_dummy
