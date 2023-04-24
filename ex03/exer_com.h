#ifdef USER_COM_ENA
    #define COM_VALUE 100
#else
    #define COM_VALUE	200
#endif

#define COM_OK	0 //seizyou syuuryou


struct st_exer {
    char from
    char to
    char msg[30]
};

typedef struct st_exer ST_EXER;
