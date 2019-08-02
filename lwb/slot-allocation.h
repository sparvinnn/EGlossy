#ifndef SLOT_ALLOCATION_H_
#define SLOT_ALLOCATION_H_

#include "tailored-lwb.h"

/*--------------------------------------------------------------------*/
static uint16_t global_slot_info[MAX_NODE_NUMBER];

int8_t prepare_slot_request(request_data_struct *req_reply);

uint16_t handle_slot_request(request_data_struct *req_reply);

void handle_slot_reply(request_data_struct *req_reply);

/*--------------------------------------------------------------------*/


#endif /* SLOT_ALLOCATION_H_ */

/** @} */
