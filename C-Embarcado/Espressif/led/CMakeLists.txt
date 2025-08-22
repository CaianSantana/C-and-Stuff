# Localização: /caminho/do/projeto/led/CMakeLists.txt

cmake_minimum_required(VERSION 3.16)

# 1. Diga o nome do projeto PRIMEIRO
# 3. Agora inclua os scripts de projeto do ESP-IDF
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
set(EXTRA_COMPONENT_DIRS ../my_components)

project(led)

# 2. Adicione o caminho para seus componentes customizados
#    (Verifique se a pasta se chama "meus_componentes")

