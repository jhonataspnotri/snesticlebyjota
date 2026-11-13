#!/usr/bin/env bash
# Forja PS2 - compila o projeto e deixa o BOOT.ELF pronto para o OPL
set -e

export PS2DEV="${PS2DEV:-/usr/local/ps2dev}"
export PS2SDK="$PS2DEV/ps2sdk"
export PATH="$PATH:$PS2DEV/bin:$PS2DEV/ee/bin:$PS2DEV/iop/bin"

if [ ! -d "$PS2SDK" ]; then
  echo "ps2sdk nao encontrado em $PS2SDK - ajuste PS2DEV." >&2
  exit 1
fi

cd "$(dirname "$0")/PROJETO/SNESTICLE-BY-JOTA"
make

OPLDIR="../../OPL/APPS/SNESTICLE-BY-JOTA"
mkdir -p "$OPLDIR"
cp "snesticle.elf" "$OPLDIR/BOOT.ELF"

echo "BOOT.ELF pronto em OPL/APPS/SNESTICLE-BY-JOTA/"
