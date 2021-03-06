#ifndef TH_GENERIC_FILE
#define TH_GENERIC_FILE "master_worker/master/generic/THDTensorCopy.h"
#else

THD_API void THDTensor_(copy)(THDTensor *tensor, THDTensor *src);

THD_API void THDTensor_(copyFromMaster)(THDTensor *to, THDTensorDescriptor* from);
THD_API void THDTensor_(copyFromWorker)(THDTensorDescriptor *to, THDTensor *from);

#endif
