#!/bin/bash

# Nom du fichier source
SRC_FILE="matrices.cpp"

# Nom de l'exécutable
EXE_FILE="matrices"

# Options de compilation
OPTS=("-O0" "-O1" "-O2" "-O3" "-Ofast")

# Boucle sur les options de compilation
for OPT in "${OPTS[@]}"; do
  # Compilation
  g++ $OPT -o $EXE_FILE $SRC_FILE

  # Vérification de la compilation
  if [[ $? -ne 0 ]]; then
    echo "Erreur lors de la compilation avec l'option $OPT"
    continue
  fi

  # Exécution du programme 5 fois avec perf stat
  for RUN in {1..5}; do
    echo "Exécution $RUN avec l'option de compilation $OPT"
    time perf stat -e cycles,instructions,cache-references,cache-misses,branches,branch-misses ./$EXE_FILE
  done

  # Suppression de l'exécutable
  rm $EXE_FILE
done