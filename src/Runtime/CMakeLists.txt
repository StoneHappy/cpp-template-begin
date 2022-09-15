set(TARGET_NAME ${PROJECT_NAME}Runtime)

add_library(${TARGET_NAME} INTERFACE)

set_target_properties(${TARGET_NAME} PROPERTIES CXX_STANDARD 17)
set_target_properties(${TARGET_NAME} PROPERTIES FOLDER ${PROJECT_NAME})

# Link dependencies    
target_link_libraries(${TARGET_NAME} PUBLIC
          )

target_include_directories(
  ${TARGET_NAME} 
  INTERFACE 
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/>
)
