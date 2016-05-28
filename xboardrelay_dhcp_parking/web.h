#include <SPI.h>
#include <Ethernet.h>
#include <uHTTP.h>

extern uHTTP server;

void ethernet_setup();
void webpage_form(EthernetClient &client);
void redirect(EthernetClient &client, String uri);
void unauthorized(EthernetClient &client);
void not_found(EthernetClient &client);
void error(EthernetClient &client);
void ethernet_loop();

void serial_print_connect();
void serial_print_localip();
