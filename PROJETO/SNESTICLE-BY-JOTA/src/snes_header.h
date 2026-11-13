#ifndef SNES_HEADER_H
#define SNES_HEADER_H
// SifLoadModule é a função de carregamento de IRX para o IOP
// Estrutura para validar cabeçalhos LoROM e HiROM baseada no offset 0x7FC0
typedef struct {
    char title[21];
    u8 map_mode;
    u8 rom_type;
} SnesHeader;
#endif