int controller_loadFromText(char* path , LinkedList* pArrayListPassenger);
int controller_loadFromBinary(char* path , LinkedList* pArrayListPassenger);
int controller_addPassenger(LinkedList* pArrayListPassenger);
int controller_editPassenger(LinkedList* pArrayListPassenger);
int controller_removePassenger(LinkedList* pArrayListPassenger);
int controller_ListPassenger(LinkedList* pArrayListPassenger);
int controller_sortPassenger(LinkedList* pArrayListPassenger);
int controller_saveAsText(char* path , LinkedList* pArrayListPassenger);
int controller_saveAsBinary(char* path , LinkedList* pArrayListPassenger);
int controller_GetMaxId(LinkedList* pArrayListPassenger);
int controller_saveMaxIdAsText(LinkedList* pArrayListPassenger);
int controller_countPassenger(LinkedList* pArrayListPassenger);
int controller_listFilter(LinkedList* pArrayListPassenger);
int controller_calcularMillas(LinkedList* pArrayListPassenger);
