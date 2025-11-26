#include <stdio.h>
#include <string.h>
union Data {
int id;
char name[20];
};
int main() {
union Data d;
d.id = 100;
printf("ID: %d\n", d.id);
strcpy(d.name, "Alice");
printf("Name: %s\n", d.name);
printf("ID after writing name: %d\n", d.id);
return 0;
}
