#include <fileXio.h>
#include <stdio.h>
#include "rom_loader.h"
void list_roms(const char *path) {
    // Verifica se a pasta existe, caso contrário tenta criar
    int fd = fileXioDopen(path);
    if (fd < 0) {
        fileXioMkdir(path, 0777);
    } else {
        fileXioDclose(fd);
    }
    // Implementar leitura de diretório e filtro de extensões .smc/.sfc
}