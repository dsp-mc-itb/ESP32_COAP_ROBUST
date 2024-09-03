#ifndef _COAP_CLIENT_SERVER_H_
#define _COAP_CLIENT_SERVER_H_

#ifdef __cplusplus
extern "C" {
#endif

void coap_send_initial_data();
void coap_client_server(void* p);

#ifdef __cplusplus
}
#endif

#endif