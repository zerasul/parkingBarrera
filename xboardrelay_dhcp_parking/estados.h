enum Estado {
  INICIAL,
  CERRADA,
  ABRIENDO_AUTOMATICO,
  ABIERTA_SIN_OCUPAR,
  ABIERTA_OCUPADA,
  ABIERTA_LIBRE,
  CERRANDO_AUTOMATICO,
  ABIERTA_MANUAL,
  ABRIENDO_MANUAL,
  CERRANDO_MANUAL
};

enum Orden {
  ORDEN_NINGUNA,
  ORDEN_ABRIR_AUTOMATICO,
  ORDEN_ABRIR_MANUAL,
  ORDEN_CERRAR
};

void estado_loop();
bool orden_siguiente(Orden siguiente);
bool estado_siguiente(Estado siguiente);
const __FlashStringHelper* EstadoStr();
const __FlashStringHelper* OrdenStr();

extern long unsigned int estado_millis;
extern long unsigned int ultima_orden_millis;
