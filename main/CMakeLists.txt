# # Edit following two lines to set component requirements (see docs)
# set(COMPONENT_REQUIRES )
# set(COMPONENT_PRIV_REQUIRES )

# set(COMPONENT_SRCS "coap_client_example_main.c")
# set(COMPONENT_ADD_INCLUDEDIRS "")

# register_component()

# Embed CA, certificate & key directly into binary
idf_component_register(SRCS "coap_server_example_main.c"
                    INCLUDE_DIRS "." "include"
                    EMBED_TXTFILES certs/coap_ca.pem certs/coap_server.crt certs/coap_server.key oscore/coap_oscore.conf)
                   # EMBED_TXTFILES certs/coap_ca.pem certs/coap_client.crt certs/coap_client.key oscore/coap_oscore.conf)
