# CMakeList.txt : fichier projet CMake de niveau supérieur, effectuez une configuration globale
# et incluez les sous-projets ici.
#
cmake_minimum_required (VERSION 3.8)

# Solution
project ("SAE921-GRP4100-SFML")

# Each sub-project
set(EXECUTABLE_CUSTOM_NAME "Game")
add_subdirectory ("Game")

set(EXECUTABLE_CUSTOM_NAME "Projet_A")
add_subdirectory ("Projet_A")

set(EXECUTABLE_CUSTOM_NAME "Projet_S")
add_subdirectory ("Projet_S")