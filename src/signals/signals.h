
#ifndef SIGNALS__H
#define SIGNALS__H

#ifdef __cplusplus
extern "C" {
#endif

// timestamps and sends values
int initSignal(int port, const char *pId, const char *sId, const char *userid);
int sendSignal  (const char *name, double value);
int sendSignalAndFlag (const char *flag, const char *name, double value);
int sendSignalsAndFlag (const char *flag, const char *name, double value, ...);
int sendSignals  (const char *name, double value, ...);
int putFlag (const char *sigal, const char *flag);
int sendSignalsList (const char *names[], float values[], int elements);
int sendSignalsListAndFlag  (const char *flag, const char *names[], float values[], int elements);


#ifdef __cplusplus
}
#endif

#endif