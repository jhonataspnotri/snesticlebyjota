#include <tamtypes.h>
#include <kernel.h>
#include <sifrpc.h>
#include <loadfile.h>
#include <debug.h>
#include "rom_loader.h"
int main() {
    SifInitRpc(0);
    init_scr();
    scr_printf("Iniciando Snesticle by Jota...\n");
    // Carrega módulos do IOP (processador de entrada/saída) necessários
    SifLoadModule("rom0:SIO2MAN", 0, NULL);
    SifLoadModule("rom0:PADMAN", 0, NULL);
    list_roms("mass:/ROMS/SNES/");
    return 0;
}