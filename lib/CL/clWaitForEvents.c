#include "pocl_cl.h"

CL_API_ENTRY cl_int CL_API_CALL
clWaitForEvents(cl_uint              num_events ,
                const cl_event *     event_list ) CL_API_SUFFIX__VERSION_1_0
{
    if (num_events > 1)
        POCL_ABORT_UNIMPLEMENTED();
	// stub-out implementation. Currently support only one queue
	clFinish(event_list[0]->queue);
	return CL_SUCCESS;
}

